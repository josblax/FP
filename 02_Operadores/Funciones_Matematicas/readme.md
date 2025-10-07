## Funciones de la Librería `<cmath>` en C++

La librería `<cmath>` en C++ ofrece un conjunto completo de funciones matemáticas para realizar operaciones comunes y avanzadas. A continuación, se presenta un listado de las funciones más utilizadas, organizadas por categoría, con una breve explicación de lo que hace cada una.

---

### Funciones de Potencia y Raíces

| Función | Tipo de Retorno | Descripción |
| :--- | :--- | :--- |
| `std::sqrt(arg)` | `double`, `float`, `long double` | **Calcula la raíz cuadrada** del argumento `arg`. Si `arg` es negativo, retorna NaN (Not a Number). |
| `std::cbrt(arg)` | `double`, `float`, `long double` | **Calcula la raíz cúbica** del argumento `arg`. |
| `std::hypot(x, y)` | `double`, `float`, `long double` | **Calcula la hipotenusa** de un triángulo rectángulo o la distancia desde el origen al punto `(x, y)`. Es más preciso que `sqrt(x*x + y*y)`. |
| `std::pow(base, exp)` | `double`, `float`, `long double` | **Calcula `base` elevado a la potencia `exp`**. |
| `std::exp(arg)` | `double`, `float`, `long double` | **Calcula la función exponencial** (e^arg). |
| `std::log(arg)` | `double`, `float`, `long double` | **Calcula el logaritmo natural** (en base e) de `arg`. |
| `std::log10(arg)` | `double`, `float`, `long double` | **Calcula el logaritmo en base 10** de `arg`. |

---

### Funciones Trigonometricas

| Función | Tipo de Retorno | Descripción |
| :--- | :--- | :--- |
| `std::sin(arg)` | `double`, `float`, `long double` | **Calcula el seno** del ángulo `arg` (en radianes). |
| `std::cos(arg)` | `double`, `float`, `long double` | **Calcula el coseno** del ángulo `arg` (en radianes). |
| `std::tan(arg)` | `double`, `float`, `long double` | **Calcula la tangente** del ángulo `arg` (en radianes). |
| `std::asin(arg)` | `double`, `float`, `long double` | **Calcula el arco seno** de `arg`. El valor retornado está en el rango `[-π/2, π/2]` radianes. |
| `std::acos(arg)` | `double`, `float`, `long double` | **Calcula el arco coseno** de `arg`. El valor retornado está en el rango `[0, π]` radianes. |
| `std::atan(arg)` | `double`, `float`, `long double` | **Calcula el arco tangente** de `arg`. El valor retornado está en el rango `[-π/2, π/2]` radianes. |
| `std::atan2(y, x)` | `double`, `float`, `long double` | **Calcula el arco tangente de `y/x`**, utilizando los signos de `x` y `y` para determinar el cuadrante. El valor retornado está en el rango `[-π, π]` radianes. |

---

### Funciones de Redondeo

| Función | Tipo de Retorno | Descripción |
| :--- | :--- | :--- |
| `std::abs(arg)` | `integral`, `double`, `float`, `long double` | **Calcula el valor absoluto** del argumento. |
| `std::floor(arg)` | `double`, `float`, `long double` | **Redondea hacia el entero más cercano hacia abajo** (hacia el infinito negativo). |
| `std::ceil(arg)` | `double`, `float`, `long double` | **Redondea hacia el entero más cercano hacia arriba** (hacia el infinito positivo). |
| `std::round(arg)` | `double`, `float`, `long double` | **Redondea al entero más cercano**. Si el valor es equidistante entre dos enteros (ej. `2.5`), redondea hacia el más lejano del cero. |
| `std::trunc(arg)` | `double`, `float`, `long double` | **Trunca la parte decimal** del argumento. |

---

### Otras Funciones

| Función | Tipo de Retorno | Descripción |
| :--- | :--- | :--- |
| `std::fmod(num, den)` | `double`, `float`, `long double` | **Calcula el residuo de la división** de `num` entre `den`. |
| `std::isinf(arg)` | `bool` | **Devuelve `true` si el argumento es infinito** (positivo o negativo), de lo contrario, `false`. |
| `std::isnan(arg)` | `bool` | **Devuelve `true` si el argumento no es un número** (NaN), de lo contrario, `false`. |
| `std::copysign(val, sign)` | `double`, `float`, `long double` | **Retorna el valor de `val` con el signo de `sign`**. |
