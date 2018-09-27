#pragma once

#include "kraPrerequisitesUtil.h"
#include "kraMath.h"
#include "kraVector2.h"
#include "kraVector3.h"


namespace kraEngineSDK {
  
  class Vector4
  {
    /**
     * @brief Constructores.
     */
  public:

    /**
     * @brief Constructor por default, sin inicializacion.
     */

    Vector4() = default;

    /**
     * @brief Constructor con valores X y Y inicializados.
     */

    Vector4(float X, float Y, float Z, float W);


    /**
     * @brief Construir un Vector4 a partir de los valores X y Y de un Vector4.
     */
    //explicit inline Vector4(const Vector3& V, float w);


    /**
     * @brief Overload de operadores.
     */
  public:

    /**
     * @brief Obtiene el resultado de sumar los componentes de 2 vectores.
     * @param Vec es el segundo vector que se le suma a este vector.
     * @return Regresa el resultado de la suma.
     */
    Vector4
      operator+(const Vector4& Vec) const;

    /**
     * @brief Obtiene el resultado de restar los componentes de 2 vectores.
     * @param Vec es el segundo vector que se le resta a este vector.
     * @return Regresa el resultado de la resta.
     */
    Vector4
      operator-(const Vector4& Vec) const;

    /**
     * @brief Obtiene el resultado de escalar los componentes de un vector.
     * @param Scale es por cuanto se va a escalar el vector.
     * @return Regresa el resultado de escalar este vector.
     */
    Vector4
      operator*(float Scale) const;

    /**
     * @brief Obtiene el resultado de dividir los componentes un vector por un valor.
     * @param Scale es el valor que se le resta a este vector.
     * @return Regresa el resultado de la division.
     */
    Vector4
      operator/(float Scale) const;

    /**
     * @brief Obtiene el resultado de sumarle un valor a los componentes del vector.
     * @param Val es el valor que se le suma a los componentes de este vector.
     * @return Regresa el resultado de la suma.
     */
    Vector4
      operator+(float Val) const;

    /**
     * @brief Obtiene el resultado de restar un valor a los componentes del vector.
     * @param Val es el valor que se le resta a los componentes de este vector.
     * @return Regresa el resultado de la resta.
     */
    Vector4
      operator-(float Val) const;

    /**
     * @brief Obtiene el resultado de multiplicar los componentes de dos vectores.
     * @param Vec es el segundo vector por el cuál sde va multiplicar.
     * @return Regresa el resultado de la multiplicación de los vectores.
     */
    Vector4
      operator*(const Vector4& Vec) const;

    /**
     * @brief Obtiene el resultado de dividir los componentes de dos vectores.
     * @param Vec es el segundo vector por el cuál de va dividir.
     * @return Regresa el resultado de la división de los vectores.
     */
    Vector4
      operator/(const Vector4& Vec) const;

    /**
     * @brief Obtiene el producto punto de este vector y otro.
     * @param Vec es el segundo vector para calcuilar el producto punto.
     * @return Regresa el producto punto.
     */
    float
      operator|(const Vector4& Vec) const;

    /**
     * @brief Obtiene el producto cruz de este vector y otro.
     * @param Vec es el segundo vector para calcuilar el producto cruz.
     * @return Regresa el producto cruz.
     */
    Vector4
      Vector4::operator^(const Vector4& Vec)const;

    /**
     * @brief Overload de operadores booleanos.
     */

  public:

    /**
     * @brief Compara 2 vectores para ver si sus componentes son iguales.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si son iguales, y false si no lo son.
     */
    bool
      operator==(const Vector4& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si sus componentes son diferentes.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si son diferentes, y false si no lo son.
     */
    bool
      operator!=(const Vector4& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si los componentes de uno son menores que el otro.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si este vector es menor, y false si no lo es.
     */
    bool
      operator<(const Vector4& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si los componentes de uno son mayores que el otro.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si este vector es mayor que el otro, y false si no lo es.
     */
    bool
      operator>(const Vector4& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si los componentes de uno son menores o iguales que el otro.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si este vector es menor o igual que el otro, y false si no lo es.
     */
    bool
      operator<=(const Vector4& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si los componentes de uno son mayores o iguales que el otro.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si este vector es mayor o igual que el otro, y false si no lo es.
     */
    bool
      operator>=(const Vector4& Vec) const;

    /**
     * @brief Vuelve los componentes de este vector negativos.
     * @param el mismo vector.
     * @return Regresa una copia de vector resultado.
     */
    Vector4
      operator-() const;

    /**
     * @brief Le suma un vetor secundario a este mismo vetcor.
     * @param Vec es el segundo vector que se va a sumar.
     * @return Regresa una copia de vector resultado.
     */
    Vector4
      operator+=(const Vector4& Vec);

    /**
     * @brief Le resta un vetor secundario a este mismo vetcor.
     * @param Vec es el segundo vector que se va a restar.
     * @return Regresa una copia del vector resultado.
     */
    Vector4
      operator-=(const Vector4& Vec);

    /**
     * @brief Multiplica los componentes de este mismo vector por un valor
     * @param Val es el valor a multiplicar el vector.
     * @return Regresa una copia del vector resultado.
     */
    Vector4
      operator*=(float Val);

    /**
     * @brief Multiplica los componentes de este mismo vector por otro vector
     * @param Vec es el vector que multiplica este vector.
     * @return Regresa una copia del vector resultado.
     */
    Vector4
      operator*=(const Vector4& Vec);

    /**
     * @brief Divide los componentes de este mismo vector por un valor
     * @param Val es el valor a dividir el vector.
     * @return Regresa una copia del vector resultado.
     */
    Vector4
      operator/=(float Val);

    /**
     * @brief Divide los componentes de este mismo vector por otro vector
     * @param Vec es el otro vector para dividir este vector.
     * @return Regresa una copia del vector resultado.
     */
    Vector4
      operator/=(const Vector4& Vec);

    /**
    * Funciones para accesar a los componentes individuales del vector
    */

    /**
     * @brief Obtiene uno de los componentes del vector basado en un índice.
     * @param Index el indice del componente a obtener.
     * @return referencia al componente.
     */
    float&
      operator[](uint32 Index);

    /**
     * @brief Obtiene uno de los componentes del vector basado en un índice.
     * @param Index el indice del componente a obtener.
     * @return Copia del valor del componente.
     */
    float
      operator[](uint32 Index) const;

    /**
     * @brief Obtiene uno de los componentes del vector basado en un índice.
     * @param  Index el indice del componente a obtener.
     * @return referencia al componente.
     */
    float&
      component(uint32 Index);

    /**
     * @brief Obtiene uno de los componentes del vector basado en un índice.
     * @param  Index el indice del componente a obtener.
     * @return Copia del valor del componente.
     */
    float
      component(uint32 Index) const;



    /**
     * @brief Obtiene el tamaño o magnitud de un vector.
     * @return Regresa el tamaño del vector.
     */
    float
      lenght() const;

    /**
     * @brief Obtiene el cuadrado del tamaño o magnitud de un vector.
     * @return Regresa el tamaño del vector.
     */
    float
      lenghtSquared() const;

    /**
     * @brief Obtiene el cuadrado del tamaño o magnitud de un vector.
     * @return Regresa el tamaño del vector.
     */
    static float
      dot(Vector4& V1, Vector4& V2);

    /**
     * @brief Obtiene el cuadrado del tamaño o magnitud de un vector.
     * @return Regresa el tamaño del vector.
     */
    static Vector4
      cross(Vector4& V1, Vector4& V2);

    /**
     * @brief Obtiene la distancia enrtre 2 vectores.
     * @param Los dos vectores.
     * @return Regresa la distancia entre esos dos vectores.
     */
    float
      distance(const Vector4& V1, const Vector4& V2);

    /**
     * @brief Normaliza el vector.
     * @return Regresa el vector normalizado.
     */
    void
      normalize();

    void
      floor();

    void
      ceil();

  public:
    /**
     * @brief Componente X.
     */
    float x;
    /**
     * @brief Componente Y.
     */
    float y;
    /**
     * @brief Componente Z.
     */
    float z;
    /**
     * @brief Componente W.
     */
    float w;

  };

  /***************************************************************************/
  /**
   * Funciones de Vector4
   */
   /***************************************************************************/

  Vector4::Vector4(float X, float Y, float Z, float W) : x(X), y(Y), z(Z), w(W) {}

  Vector4
    Vector4::operator+(const Vector4& Vec)const {
    Vector4 newVec;
    newVec.x = x + Vec.x;
    newVec.y = y + Vec.y;
    newVec.z = z + Vec.z;
    newVec.w = w + Vec.w;

    return newVec;
  }

  Vector4
    Vector4::operator-(const Vector4& Vec)const {
    Vector4 newVec;
    newVec.x = x - Vec.x;
    newVec.y = y - Vec.y;
    newVec.z = z - Vec.z;
    newVec.w = w - Vec.w;

    return newVec;
  }

  Vector4
    Vector4::operator*(float Val)const {
    Vector4 newVec;
    newVec.x = x * Val;
    newVec.y = y * Val;
    newVec.z = z * Val;
    newVec.w = w * Val;

    return newVec;
  }

  Vector4
    Vector4::operator/(float Val)const {
    Vector4 newVec;
    newVec.x = x / Val;
    newVec.y = y / Val;
    newVec.z = z / Val;
    newVec.w = w / Val;

    return newVec;
  }

  Vector4
    Vector4::operator+(float Val)const {
    Vector4 newVec;
    newVec.x = x + Val;
    newVec.y = y + Val;
    newVec.z = z + Val;
    newVec.w = w + Val;

    return newVec;
  }

  Vector4
    Vector4::operator-(float Val)const {
    Vector4 newVec;
    newVec.x = x - Val;
    newVec.y = y - Val;
    newVec.z = z - Val;
    newVec.w = w - Val;


    return newVec;
  }

  Vector4
    Vector4::operator*(const Vector4& Vec)const {
    Vector4 newVec;
    newVec.x = x * Vec.x;
    newVec.y = y * Vec.y;
    newVec.z = z * Vec.z;
    newVec.w = w * Vec.z;

    return newVec;
  }

  Vector4
    Vector4::operator/(const Vector4& Vec)const {
    Vector4 newVec;
    newVec.x = x / Vec.x;
    newVec.y = y / Vec.y;
    newVec.z = z / Vec.z;
    newVec.w = w / Vec.w;

    return newVec;
  }

  float
    Vector4::operator|(const Vector4& Vec)const {

    float escalar = (x * Vec.x) + (y * Vec.y) + (z * Vec.z) + (w * Vec.w);

    return escalar;
  }

  Vector4
    Vector4::operator^(const Vector4& Vec)const {

    return Vector4((y * Vec.z - z * Vec.y), (z * Vec.x - x * Vec.z), (x * Vec.y - y * Vec.x), 0.0f);

  }

  bool
    Vector4::operator==(const Vector4& Vec) const {

    return x == Vec.x && y == Vec.y && z == Vec.z && w == Vec.w;

  }

  bool
    Vector4::operator!=(const Vector4& Vec) const {
    return x != Vec.x || y != Vec.y || z != Vec.z || w != Vec.w;
  }

  bool
    Vector4::operator<(const Vector4& Vec) const {

    return x < Vec.x && y < Vec.y && z < Vec.z && w < Vec.w;

  }

  bool
    Vector4::operator>(const Vector4& Vec) const {
    return x > Vec.x && y > Vec.y && z > Vec.z && w > Vec.w;
  }

  bool
    Vector4::operator<=(const Vector4& Vec) const {

    return x <= Vec.x && y <= Vec.y && z <= Vec.z && w <= Vec.w;

  }

  bool
    Vector4::operator>=(const Vector4& Vec) const {

    return x >= Vec.x && y >= Vec.y && z >= Vec.z && w >= Vec.w;

  }

  Vector4
    Vector4::operator-() const {

    return Vector4(-x, -y, -z, -w);

  }

  Vector4
    Vector4::operator+=(const Vector4& Vec) {
    x += Vec.x;
    y += Vec.y;
    z += Vec.z;
    w += Vec.w;
    return *this;
  }

  Vector4
    Vector4::operator-=(const Vector4& Vec) {
    x -= Vec.x;
    y -= Vec.y;
    z -= Vec.z;
    w -= Vec.w;
    return *this;
  }

  Vector4
    Vector4::operator*=(float Val) {
    x *= Val;
    y *= Val;
    z *= Val;
    w *= Val;
    return *this;
  }

  Vector4
    Vector4::operator*=(const Vector4& Vec) {
    x *= Vec.x;
    y *= Vec.y;
    z *= Vec.z;
    w *= Vec.w;
    return *this;
  }

  Vector4
    Vector4::operator/=(float Val) {
    x /= Val;
    y /= Val;
    z /= Val;
    w /= Val;
    return *this;
  }

  Vector4
    Vector4::operator/=(const Vector4& Vec) {
    x /= Vec.x;
    y /= Vec.y;
    z /= Vec.z;
    w /= Vec.w;
    return *this;
  }

  float
    Vector4::lenght() const {

    return kraMath::sqrt(x*x + y*y + z*z + w*w);

  }

  float
    Vector4::lenghtSquared() const {

    return kraMath::powf(kraMath::sqrt(x*x + y*y + z*z + w*w), 2.0f);

  }

  float
    Vector4::dot(Vector4& V1, Vector4& V2) {
    return V1 | V2;
  }

  Vector4
    Vector4::cross(Vector4& V1, Vector4& V2) {
    return V1 ^ V2;
  }

  float
    Vector4::distance(const Vector4& V1, const Vector4& V2) {
    kraMath::sqrt(kraMath::pow((V1.x - V2.x), 2.0f) + kraMath::pow((V1.y - V2.y), 2.0f) + kraMath::pow((V1.z - V2.z), 2.0f) + kraMath::pow((V1.w - V2.w), 2.0f));
  }

  void
    Vector4::normalize() {
    float vec = kraMath::sqrt(x*x + y*y + z*z + w*w);
    x /= vec;
    y /= vec;
    z /= vec;
    w /= vec;
  }

  void
    Vector4::floor() {
    kraMath::floor(x);
    kraMath::floor(y);
    kraMath::floor(z);
    kraMath::floor(w);
  }

  void
    Vector4::ceil() {
    kraMath::ceil(x);
    kraMath::ceil(y);
    kraMath::ceil(z);
    kraMath::ceil(w);
  }

  float&
    Vector4::operator[](uint32 Index) {

    if (Index == 0) {
      return x;
    }
    else if (Index == 1) {
      return y;
    }
    else if (Index == 2) {
      return z;
    }
    else if (Index == 3) {
      return w;
    }
  }

  float
    Vector4::operator[](uint32 Index) const {

    if (Index == 0) {
      return x;
    }
    else if (Index == 1) {
      return y;
    }
    else if (Index == 2) {
      return z;
    }
    else if (Index == 3) {
      return w;
    }
  }

  float&
    Vector4::component(uint32 Index) {

    if (Index == 0) {
      return x;
    }
    else if (Index == 1) {
      return y;
    }
    else if (Index == 2) {
      return z;
    }
    else if (Index == 3) {
      return w;
    }
  }

  float
    Vector4::component(uint32 Index) const {

    if (Index == 0) {
      return x;
    }
    else if (Index == 1) {
      return y;
    }
    else if (Index == 2) {
      return z;
    }
    else if (Index == 3) {
      return w;
    }
  }
}
