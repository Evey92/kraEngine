#pragma once
<<<<<<< HEAD
=======

>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
#include "kraPrerequisitesUtil.h"
#include "kraMath.h"

namespace kraEngineSDK {
<<<<<<< HEAD
  class Vector3;

  class Vector2
=======


  class KRA_UTILITY_EXPORT Vector2
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
  {
    /**
     * @brief Constructores.
     */
<<<<<<< HEAD
  public:
=======
   public:
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f

    /**
     * @brief Constructor por default, sin inicializacion.
     */

    Vector2() = default;

    /**
     * @brief Constructor con valores X y Y inicializados.
     */

    Vector2(float X, float Y);


    /**
<<<<<<< HEAD
     * @brief Construir un Vector2 a partir de los valores X y Y de un Vector3.
     */
    explicit inline Vector2(const Vector3& V);

    /**
     * @brief Overload de operadores.
     */
  public:
=======
     * @brief Construir un Vector2 a partir de los valores X y Y de un Vector2.
     */
     //explicit inline Vector2(const Vector2& V, float w);


     /**
      * @brief Overload de operadores.
      */
   public:
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f

    /**
     * @brief Obtiene el resultado de sumar los componentes de 2 vectores.
     * @param Vec es el segundo vector que se le suma a este vector.
     * @return Regresa el resultado de la suma.
     */
    Vector2
    operator+(const Vector2& Vec) const;
<<<<<<< HEAD
  
=======

>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
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
    float
    operator|(const Vector2& Vec) const;

    /**
     * @brief Obtiene el producto cruz de este vector y otro.
     * @param Vec es el segundo vector para calcuilar el producto cruz.
     * @return Regresa el producto cruz.
     */
<<<<<<< HEAD
    float
    operator^(const Vector2& Vec) const;
=======
    Vector2
    Vector2::operator^(const Vector2& Vec)const;
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f

    /**
     * @brief Overload de operadores booleanos.
     */

<<<<<<< HEAD
  public:
=======
   public:
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f

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
     * @brief Vuelve los componentes de este vector negativos.
     * @param el mismo vector.
     * @return Regresa una copia de vector resultado.
     */
    Vector2
    operator-() const;

    /**
<<<<<<< HEAD
     * @brief Le suma un vetor secundario a este mismo vetcor.
     * @param Vec es el segundo vector que se va a sumar.
     * @return Regresa una copia de vector resultado.
     */
    Vector2
    operator+=(const Vector2& Vec);

    /**
     * @brief Le resta un vetor secundario a este mismo vetcor.
     * @param Vec es el segundo vector que se va a restar.
     * @return Regresa una copia del vector resultado.
     */
    Vector2
    operator-=(const Vector2& Vec);
=======
     * @brief Le suma un vector secundario a este mismo vetcor.
     * @param Vec es el segundo vector que se va a sumar.
     * @return Regresa una copia de vector resultado.
     */
    Vector2&
    operator+=(const Vector2& Vec);

    /**
     * @brief Le resta un vector secundario a este mismo vetcor.
     * @param Vec es el segundo vector que se va a restar.
     * @return Regresa una copia del vector resultado.
     */
    Vector2&
      operator-=(const Vector2& Vec);
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f

    /**
     * @brief Multiplica los componentes de este mismo vector por un valor
     * @param Val es el valor a multiplicar el vector.
     * @return Regresa una copia del vector resultado.
     */
<<<<<<< HEAD
    Vector2
    operator*=(float Val);
=======
    Vector2&
      operator*=(float Val);
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f

    /**
     * @brief Multiplica los componentes de este mismo vector por otro vector
     * @param Vec es el vector que multiplica este vector.
     * @return Regresa una copia del vector resultado.
     */
<<<<<<< HEAD
    Vector2
=======
    Vector2&
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
      operator*=(const Vector2& Vec);

    /**
     * @brief Divide los componentes de este mismo vector por un valor
     * @param Val es el valor a dividir el vector.
     * @return Regresa una copia del vector resultado.
     */
<<<<<<< HEAD
    Vector2
=======
    Vector2&
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
    operator/=(float Val);

    /**
     * @brief Divide los componentes de este mismo vector por otro vector
     * @param Vec es el otro vector para dividir este vector.
     * @return Regresa una copia del vector resultado.
     */
<<<<<<< HEAD
    Vector2
    operator/=(const Vector2& Vec);

    /**
    * Funciones para accesar a los componentes individuales del vector 
=======
    Vector2&
    operator/=(const Vector2& Vec);

    /**
    * Funciones para accesar a los componentes individuales del vector
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
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
<<<<<<< HEAD
      lenghtSquared() const;
=======
    lenghtSquared() const;
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f

    /**
     * @brief Obtiene el cuadrado del tamaño o magnitud de un vector.
     * @return Regresa el tamaño del vector.
     */
    static float
    dot(Vector2& V1, Vector2& V2);

    /**
     * @brief Obtiene el cuadrado del tamaño o magnitud de un vector.
     * @return Regresa el tamaño del vector.
     */
<<<<<<< HEAD
    static float
    cross(Vector2& V1, Vector2& V2);
   
=======
    static Vector2
    cross(Vector2& V1, Vector2& V2);

>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
    /**
     * @brief Obtiene la distancia enrtre 2 vectores.
     * @param Los dos vectores.
     * @return Regresa la distancia entre esos dos vectores.
     */
    float
    distance(const Vector2& V1, const Vector2& V2);

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

<<<<<<< HEAD
  public:
=======
   public:
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
    /**
     * @brief Componente X.
     */
    float x;
    /**
     * @brief Componente Y.
     */
    float y;
<<<<<<< HEAD

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

  float
  Vector2::operator|(const Vector2& Vec)const {
    
    float escalar = (x * Vec.x) + (y * Vec.y);

    return escalar;
  }

  float
  Vector2::operator^(const Vector2& Vec)const {

    //Sacando eje de rotación 2D en un espacio 3D http://allenchou.net/2013/07/cross-product-of-2d-vectors/
    float escalar = (x * Vec.y) - (y * Vec.x);

    return escalar;
  
  }

  bool
  Vector2::operator==(const Vector2& Vec) const {
    
    return x == Vec.x && y == Vec.y;
  
  }

  bool
  Vector2::operator!=(const Vector2& Vec) const {
      return x != Vec.x || y != Vec.y;
  }

  bool
  Vector2::operator<(const Vector2& Vec) const {
    
      return x < Vec.x && y < Vec.y;
    
  }

  bool
  Vector2::operator>(const Vector2& Vec) const {
    return x > Vec.x && y > Vec.y;
  }

  bool
  Vector2::operator<=(const Vector2& Vec) const {
    
    return x <= Vec.x && y <= Vec.y;
  
  }

  bool
  Vector2::operator>=(const Vector2& Vec) const {

    return x >= Vec.x && y >= Vec.y;

  }

  Vector2
  Vector2::operator-() const {
    
    return Vector2(-x, -y);

  }

  Vector2
  Vector2::operator+=(const Vector2& Vec) {
    x += Vec.x;
    y += Vec.y;
    return *this;
  }

  Vector2
  Vector2::operator-=(const Vector2& Vec) {
    x -= Vec.x;
    y -= Vec.y;
    return *this;
  }

  Vector2
  Vector2::operator*=(float Val) {
    x *= Val;
    y *= Val;
    return *this;
  }

  Vector2
  Vector2::operator*=(const Vector2& Vec) {
    x *= Vec.x;
    y *= Vec.y;
    return *this;
  }

  Vector2
  Vector2::operator/=(float Val) {
    x /= Val;
    y /= Val;
    return *this;
  }

  Vector2
  Vector2::operator/=(const Vector2& Vec) {
    x /= Vec.x;
    y /= Vec.y;
    return *this;
  }

  float
  Vector2::lenght() const {
    
    return kraMath::sqrt(x*x + y * y);

  }

  float
  Vector2::lenghtSquared() const {
    
    return kraMath::powf(kraMath::sqrt(x*x + y * y), 2.0f);
  
  }

  float
  Vector2::dot(Vector2& V1, Vector2& V2) {
    return V1 | V2;
  }

  float
  Vector2::cross(Vector2& V1, Vector2& V2) {
    return V1^V2;
  }

  float
  Vector2::distance(const Vector2& V1, const Vector2& V2) {
    return kraMath::sqrt(kraMath::pow((V1.x - V2.x), 2.0f) + kraMath::pow((V1.y - V2.y), 2.0f));
  }

  void
  Vector2::normalize() {
    float vec = kraMath::sqrt(x*x + y*y);
    x /= vec;
    y /= vec;
  }

  void
  Vector2::floor() {
    kraMath::floor(x);
    kraMath::floor(y);
  }

  void
  Vector2::ceil() {
    kraMath::ceil(x);
    kraMath::ceil(y);
  }

  float&
  Vector2::operator[](uint32 Index) {
    
    if (Index == 0) {
      return x;
    }
    else if (Index == 1){
      return y;
    }
  }

  float
  Vector2::operator[](uint32 Index) const {
    
    if (Index == 0) {
      return x;
    }
    else if (Index == 1) {
      return y;
    }
  }

  float&
  Vector2::component(uint32 Index) {
    
    if (Index == 0) {
      return x;
    }
    else if (Index == 1) {
      return y;
    }
  }

  float
  Vector2::component(uint32 Index) const {
    
    if (Index == 0) {
      return x;
    }
    else if (Index == 1) {
      return y;
    }
  }

}
=======
  };
}
 
>>>>>>> ccfd12573612010e6cc01d913baf0799a23a4e3f
