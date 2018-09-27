#pragma once

#include "kraPrerequisitesUtil.h"
#include "kraMath.h"
#include "kraVector3.h"
#include "kraVector4.h"

namespace kraEngineSDK {

  class Plane : Vector3 {
  
  public:
    
    Plane() = default;
    
    Plane(const Vector4& Vec);

    Plane(const Vector3& Vec, float w);

    Plane(float x, float y, float z, float w);

  public:

    float x;

    float y;

    float z;

    float w;
  };

  Plane::Plane(float X, float Y, float Z, float W) : x(X), y(Y), z(Z), w(W) {}


}