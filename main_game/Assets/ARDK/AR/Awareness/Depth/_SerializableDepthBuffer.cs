// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;

using Niantic.ARDK.AR.Camera;
using Niantic.ARDK.Utilities.Logging;

using Unity.Collections;
using UnityEngine;

namespace Niantic.ARDK.AR.Awareness.Depth
{
  // Can't use [Serializable]. Need to provide a serializer.
  internal sealed class _SerializableDepthBuffer
    : _SerializableAwarenessBufferBase<float>,
      IDepthBuffer
  {
    private static bool _hasWarnedAboutInterpolation;

    internal _SerializableDepthBuffer
    (
      uint width,
      uint height,
      bool isKeyframe,
      Matrix4x4 viewMatrix,
      NativeArray<float> data,
      float nearDistance,
      float farDistance,
      CameraIntrinsics intrinsics
    )
      : base(width, height, isKeyframe, viewMatrix, data, intrinsics)
    {
      NearDistance = nearDistance;
      FarDistance = farDistance;
    }

    public float NearDistance { get; private set; }

    public float FarDistance { get; private set; }

    private Vector4? _params;

    public Vector4 ZBufferParams
    {
      get
      {
        _params ??= AwarenessUtils.CalculateZBufferParams
        (
          NearDistance,
          FarDistance
        );

        return _params.Value;
      }
    }

    public override IAwarenessBuffer GetCopy()
    {
      return new _SerializableDepthBuffer
      (
        Width,
        Height,
        false,
        ViewMatrix,
        new NativeArray<float>(Data, Allocator.Persistent),
        NearDistance,
        FarDistance,
        Intrinsics
      )
      {
        IsRotatedToScreenOrientation = IsRotatedToScreenOrientation
      };
    }

    public IDepthBuffer RotateToScreenOrientation()
    {
      if (IsRotatedToScreenOrientation)
        return GetCopy() as IDepthBuffer;

      var newData =
        _AwarenessBufferHelper.RotateToScreenOrientation
        (
          Data,
          (int) Width,
          (int) Height,
          out int newWidth,
          out int newHeight
        );

      var newBuffer =
        new _SerializableDepthBuffer
        (
          (uint) newWidth,
          (uint) newHeight,
          false,
          ViewMatrix,
          newData,
          NearDistance,
          FarDistance,
          Intrinsics
        )
        {
          IsRotatedToScreenOrientation = true
        };

      return newBuffer;
    }

    public IDepthBuffer Interpolate
    (
      IARCamera arCamera,
      int viewportWidth,
      int viewportHeight,
      float backProjectionDistance = AwarenessParameters.DefaultBackProjectionDistance
    )
    {
      if (!_hasWarnedAboutInterpolation)
      {
        ARLog._Warn
        (
          "IDepthBuffer.Interpolate is not supported in the Unity Editor. " +
          "No interpolation will be performed."
        );

        _hasWarnedAboutInterpolation = true;
      }

      if (!IsRotatedToScreenOrientation)
      {
        var rotated =
          _AwarenessBufferHelper.RotateToScreenOrientation
          (
            Data,
            (int) Width,
            (int) Height,
            out int rotatedWidth,
            out int rotatedHeight
          );

        return new _SerializableDepthBuffer
        (
          (uint)rotatedWidth,
          (uint)rotatedHeight,
          false,
          ViewMatrix,
          rotated,
          NearDistance,
          FarDistance,
          Intrinsics
        )
        {
          IsRotatedToScreenOrientation = true
        };
      }

      return new _SerializableDepthBuffer
      (
        Width,
        Height,
        false,
        ViewMatrix,
        new NativeArray<float>(Data, Allocator.Persistent),
        NearDistance,
        FarDistance,
        Intrinsics
      )
      {
        IsRotatedToScreenOrientation = true
      };
    }

    public IDepthBuffer FitToViewport
    (
      int viewportWidth,
      int viewportHeight
    )
    {
      NativeArray<float> fit;
      int fitWidth, fitHeight;

      if (!IsRotatedToScreenOrientation)
      {
        var rotated =
          _AwarenessBufferHelper.RotateToScreenOrientation
          (
            Data,
            (int)Width,
            (int)Height,
            out int rotatedWidth,
            out int rotatedHeight
          );

        fit =
          _AwarenessBufferHelper._FitToViewport
          (
            rotated,
            rotatedWidth,
            rotatedHeight,
            viewportWidth,
            viewportHeight,
            out fitWidth,
            out fitHeight
          );

        rotated.Dispose();
      }
      else
      {
        fit =
          _AwarenessBufferHelper._FitToViewport
          (
            Data,
            (int)Width,
            (int)Height,
            viewportWidth,
            viewportHeight,
            out fitWidth,
            out fitHeight
          );
      }


      return new _SerializableDepthBuffer
      (
        (uint)fitWidth,
        (uint)fitHeight,
        false,
        ViewMatrix,
        fit,
        NearDistance,
        FarDistance,
        Intrinsics
      )
      {
        IsRotatedToScreenOrientation = true
      };
    }

    public bool CreateOrUpdateTextureARGB32
    (
      ref Texture2D texture,
      FilterMode filterMode = FilterMode.Point,
      Func<float, float> valueConverter = null
    )
    {
      return
        _AwarenessBufferHelper._CreateOrUpdateTextureARGB32
        (
          Data,
          (int)Width,
          (int)Height,
          ref texture,
          filterMode,
          valueConverter
        );
    }

    public bool CreateOrUpdateTextureRFloat
    (
      ref Texture2D texture,
      FilterMode filterMode = FilterMode.Point
    )
    {
      return _AwarenessBufferHelper._CreateOrUpdateTextureRFloat
      (
        Data,
        (int)Width,
        (int)Height,
        ref texture,
        filterMode
      );
    }
  }
}
