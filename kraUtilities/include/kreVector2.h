#pragma once
#include "kraPrerequisitesUtil.h"
#include "kraMath.h"

namespace kraEngineSDK {
  class Vector3;

  class Vector2
  {
    /**
     * @brief Constructores.
     */
  public:

    /**
     * @brief Constructor por default, sin inicializacion.
     */

    Vector2() = default;

    /**
     * @brief Constructor con valores X y Y inicializados.
     */

    Vector2(float X, float Y);


    /**
     * @brief Construir un Vector2 a partir de los valores X y Y de un Vector3.
     */
    explicit inline Vector2(const Vector3& V);

    /**
     * @brief Overload de operadores.
     */
  public:

    /**
     * @brief Obtiene el resultado de sumar los componentes de 2 vectores.
     * @param Vec es el segundo vector que se le suma a este vector.
     * @return Regresa el resultado de la suma.
     */
    Vector2
    operator+(const Vector2& Vec) const;
  
    /**
     * @brief Obtiene el resultado de restar los componentes de 2 vectores.
     * @param Vec es el segundo vector que se le resta a este vector.
     * @return Regresa el resultado de la resta.
     */
    Vector2
    operator-(const Vector2& Vec) const;

    /**
     * @brief Obtiene el resultado de escalar los componentes de un vector.
     * @param Scale es por cuanto se va a escalar el vector.
     * @return Regresa el resultado de escalar este vector.
     */
    Vector2
    operator*(float Scale) const;

    /**
     * @brief Obtiene el resultado de dividir los componentes un vector por un valor.
     * @param Scale es el valor que se le resta a este vector.
     * @return Regresa el resultado de la division.
     */
    Vector2
    operator/(float Scale) const;

    /**
     * @brief Obtiene el resultado de sumarle un valor a los componentes del vector.
     * @param Val es el valor que se le suma a los componentes de este vector.
     * @return Regresa el resultado de la suma.
     */
    Vector2
    operator+(float Val) const;

    /**
     * @brief Obtiene el resultado de restar un valor a los componentes del vector.
     * @param Val es el valor que se le resta a los componentes de este vector.
     * @return Regresa el resultado de la resta.
     */
    Vector2
    operator-(float Val) const;

    /**
     * @brief Obtiene el resultado de multiplicar los componentes de dos vectores.
     * @param Vec es el segundo vector por el cuál sde va multiplicar.
     * @return Regresa el resultado de la multiplicación de los vectores.
     */
    Vector2
    operator*(const Vector2& Vec) const;

    /**
     * @brief Obtiene el resultado de dividir los componentes de dos vectores.
     * @param Vec es el segundo vector por el cuál de va dividir.
     * @return Regresa el resultado de la división de los vectores.
     */
    Vector2
    operator/(const Vector2& Vec) const;

    /**
     * @brief Obtiene el producto punto de este vector y otro.
     * @param Vec es el segundo vector para calcuilar el producto punto.
     * @return Regresa el producto punto.
     */
    Vector2
      operator|(const Vector2& Vec) const;

    /**
     * @brief Obtiene el producto cruz de este vector y otro.
     * @param Vec es el segundo vector para calcuilar el producto cruz.
     * @return Regresa el producto cruz.
     */
    Vector2
      operator^(const Vector2& Vec) const;

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
    operator==(const Vector2& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si sus componentes son diferentes.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si son diferentes, y false si no lo son.
     */
    bool
    operator!=(const Vector2& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si los componentes de uno son menores que el otro.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si este vector es menor, y false si no lo es.
     */
    bool
    operator<(const Vector2& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si los componentes de uno son mayores que el otro.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si este vector es mayor que el otro, y false si no lo es.
     */
    bool
    operator>(const Vector2& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si los componentes de uno son menores o iguales que el otro.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si este vector es menor o igual que el otro, y false si no lo es.
     */
    bool
    operator<=(const Vector2& Vec) const;

    /**
     * @brief Compara 2 vectores para ver si los componentes de uno son mayores o iguales que el otro.
     * @param Vec es el segundo vector contra el que se va a comparar.
     * @return Regresa true si este vector es mayor o igual que el otro, y false si no lo es.
     */
    bool
    operator>=(const Vector2& Vec) const;

    /**
     * @brief Le suma un vetor secundario a este mismo vetcor.
     * @param Vec es el segundo vector que se va a sumar.
     * @return Regresa una copia de vector resultado.
     */
    Vector2
    operator+=(const Vector2& Vec) const;

    /**
     * @brief Le resta un vetor secundario a este mismo vetcor.
     * @param Vec es el segundo vector que se va a restar.
     * @return Regresa una copia del vector resultado.
     */
    Vector2
    operator-=(const Vector2& Vec) const;

    /**
     * @brief Multiplica los componentes de este mismo vector por un valor
     * @param Val es el valor a multiplicar el vector.
     * @return Regresa una copia del vector resultado.
     */
    Vector2
    operator*=(float Val) const;

    /**
     * @brief Divide los componentes de este mismo vector por un valor
     * @param Val es el valor a dividir el vector.
     * @return Regresa una copia del vector resultado.
     */
    Vector2
    operator/=(float Val) const;

    /**
     * @brief Obtiene el tamaño o magnitud de un vector.
     * @return Regresa el tamaño del vector.
     */
    float
    lenght() const;

    void
    normalize();

  public:
    /**
     * @brief Componente X.
     */
    float x;
    /**
     * @brief Componente Y.
     */
    float y;

  };

  /***************************************************************************/
  /**
   * Funciones de Vector2 
   */
   /***************************************************************************/

  Vector2::Vector2(float X, float Y) : x(X), y(Y) {}

  Vector2
  Vector2::operator+(const Vector2& Vec)const {
    Vector2 newVec;
    newVec.x = x + Vec.x;
    newVec.y = y + Vec.y;
    
    return newVec;
  }

  Vector2
  Vector2::operator-(const Vector2& Vec)const {
    Vector2 newVec;
    newVec.x = x - Vec.x;
    newVec.y = y - Vec.y;

    return newVec;
  }

  Vector2
  Vector2::operator*(float Val)const {
    Vector2 newVec;
    newVec.x = x * Val;
    newVec.y = y * Val;

    return newVec;
  }

  Vector2
  Vector2::operator/(float Val)const {
    Vector2 newVec;
    newVec.x = x / Val;
    newVec.y = y / Val;

    return newVec;
  }

  Vector2
  Vector2::operator+(float Val)const {
    Vector2 newVec;
    newVec.x = x + Val;
    newVec.y = y + Val;

    return newVec;
  }

  Vector2
  Vector2::operator-(float Val)const {
    Vector2 newVec;
    newVec.x = x - Val;
    newVec.y = y - Val;

    return newVec;
  }

  Vector2
  Vector2::operator*(const Vector2& Vec)const {
    Vector2 newVec;
    newVec.x = x * Vec.x;
    newVec.y = y * Vec.y;

    return newVec;
  }

  Vector2
  Vector2::operator/(const Vector2& Vec)const {
    Vector2 newVec;
    newVec.x = x / Vec.x;
    newVec.y = y / Vec.y;

    return newVec;
  }

}