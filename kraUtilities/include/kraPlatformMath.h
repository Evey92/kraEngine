#pragma once

#include "kraPlatformTypes.h"
#include <cmath>
#include <algorithm> 

namespace kraEngineSDK {
  struct KRA_UTILITY_EXPORT kraPlatformMath {

  public:
    static const float PI;

    /*****************************************************************************/
 /**
  * Trigonometric functions
  */
  /*****************************************************************************/

    template<typename T>
    static T cos(T rads) {
      return std::cos(rads);
    }

    template<typename T>
    T sin(T)
    {
      return std::sin(T);
    }

    template<typename T>
    T fastSin(T Ta, double precision)
    {
      T sine = x;
      bool isNeg;
      isNeg = true;
      for (double i = 3; i <= precision; i += 2)
      {
        if (isNeg)
        {
          sine -= pow(x, i) / factorial(i);
          isNeg = false;
        }
        else
        {
          sine += pow(x, i) / factorial(i);
          isNeg = true;
        }
      }
      return sine;
    }

    template<typename T>
    T tan(T)
    {
      return std::tan(T);
    }

    template<typename T>
    T acos(T)
    {
      return std::acos(T);
    }

    template<typename T>
    T asin(T)
    {
      return std::asin(T);
    }

    template<typename T>
    T atan(T)
    {
      return std::atan(T);
    }

    template<typename T>
    T atan2(T T1, T T2)
    {
      return std::atan2(T);
    }


    /*****************************************************************************/
 /**
  * Hyperbolic  functions
  */
  /*****************************************************************************/
    template<typename T>
    T cosh(T T1)
    {
      return std::cosh(T);
    }

    template<typename T>
    T sinh(T T1)
    {
      return std::sinh(T);
    }

    template<typename T>
    T tanh(T T1)
    {
      return std::tanh(T);
    }

    template<typename T>
    T acosh(T T1)
    {
      return std::acosh(T);
    }

    template<typename T>
    T asinh(T T1)
    {
      return std::asinh(T);
    }

    template<typename T>
    T atanh(T T1)
    {
      return std::atanh(T);
    }

    /*****************************************************************************/
 /**
  * Exponential and logarithmic functions
  */
  /*****************************************************************************/
    template<typename T>
    T exp(T T1)
    {
      return std::exp(T);
    }

    template<typename T>
    T frexp(T T1)
    {
      return std::frexp(T);
    }

    template<typename T>
    T ldexp(T T1)
    {
      return std::ldexp(T);
    }


    /*****************************************************************************/
 /**
  * Power functions
  */
  /*****************************************************************************/
    template<typename T>
    T pow(T T1, T T2)
    {
      return std::pow(T);
    }

    template<typename T>
    T kraPow(T T1, T T2)
    {
      T base = T1;
      for (int i = 0; i < abs(T2); i++)
      {
        base *= T1;
      }
      if (exp > 0)
      {
        return base;

      }
      else
      {
        return 1 / base;
      }
    }




    /*****************************************************************************/
     /**
    * Misc functions
    */
    /*****************************************************************************/

    template<class T>
    static T lerp(T Ta, T Tb, float t)
    {
      return(a + (b - a)* T);
    }

    template<class T>
    static T abs(T Ta)
    {
      if (Ta > 0)
        return Ta;
      else
        return -(Ta);
    }
    template<class T>
    T factorial(T x)
    {
      double result = 1;
      for (int i = 1; i <= x; i++)
        result *= i;
      return result;
    }



  };
}