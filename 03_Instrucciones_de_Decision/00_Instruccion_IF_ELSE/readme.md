### `if...else` en Programación

La instrucción `if...else` es una estructura de control de flujo fundamental que permite a tu programa tomar decisiones. Su función es evaluar una condición y, basándose en si es verdadera o falsa, ejecutar diferentes bloques de código.

**¿Cómo funciona?**

  * **`if (condición)`**: El programa evalúa la **condición** que está entre paréntesis.
  * Si la condición resulta ser **verdadera**, se ejecuta el código dentro del bloque `if`.
  * Si la condición es **falsa**, el programa ignora el bloque `if` y ejecuta el código que está en el bloque `else`.

El uso de `else` es opcional. Si la condición es falsa y no hay un bloque `else`, el programa simplemente continúa con la siguiente instrucción.

```c++
// Ejemplo básico de if...else
if (condicion) {
    // Se ejecuta si la condición es verdadera
} else {
    // Se ejecuta si la condición es falsa
}
```

-----

### Diferencias entre Java, C\# y C++

La sintaxis del `if...else` es casi idéntica en los tres lenguajes, por lo que si entiendes uno, entiendes los demás. La principal diferencia radica en cómo manejan las condiciones.

  * **Sintaxis**: La forma de escribir `if (condición) { ... } else { ... }` es universal en estos lenguajes.
  * **Condiciones booleanas**:
      * En **Java** y **C\#**, las condiciones dentro del `if` deben ser obligatoriamente de tipo `boolean` (solo `true` o `false`). No puedes usar números enteros o cualquier otro tipo de dato.
      * En **C++**, aunque no es una buena práctica, es posible usar cualquier valor numérico. Un `0` se considera **falso**, mientras que cualquier número diferente de `0` se evalúa como **verdadero**.

**Ejemplos de diferencias:**

| Lenguaje | Ejemplo Válido | Ejemplo NO Válido |
| :--- | :--- | :--- |
| **Java / C\#** | `if (x > 5)` | `if (1)` |
| **C++** | `if (x > 5)` | `if (1)` (Es válido, pero se prefiere el uso de booleanos) |

En resumen, la lógica del `if...else` es la misma en Java, C\# y C++, pero Java y C\# son más estrictos y solo aceptan valores `booleanos` para las condiciones.

---

| Tipo de Condicional | Pseudocódigo (Original) | Implementación en Código (C++) | Descripción |
| :--- | :--- | :--- | :--- |
| **Simple (`if`)** | `Si expresion_logica Entonces` <br> `acciones por verdadero` <br> `Fin Si` | `if (expresionLogica) {` <br> `   // acciones si es verdadero ` <br> `}` | Ejecuta un bloque de código **solo si la condición es verdadera**. Si es falsa, el programa simplemente continúa. |
| **Doble (`if...else`)** | `Si expresion_logica Entonces` <br> `acciones por verdadero` <br> `SiNo` <br> `acciones por falso` <br> `Fin Si` | `if (expresionLogica) {` <br> `   // acciones si es verdadero ` <br> `} else {` <br> `   // acciones si es falso ` <br> `}` | Ofrece una bifurcación. Si la condición es **verdadera**, se ejecuta el primer bloque; de lo contrario, se ejecuta el bloque `else`. |
| **Múltiple (`if...else if`)** | `Si expresion_logica1 Entonces` <br> `acciones_por_verdadero1` <br> `SiNo Si expresion_logica2 Entonces` <br> `acciones_por_verdadero2` <br> `SiNo` <br> `acciones por falso` <br> `Fin Si` | `if (condicion1) {` <br> `   // acciones 1 ` <br> `} else if (condicion2) {` <br> `   // acciones 2 ` <br> `} else {` <br> `   // acciones por defecto ` <br> `}` | Evalúa **múltiples condiciones en secuencia**. El primer bloque cuya condición sea verdadera se ejecuta, y el resto se ignora. El bloque `else` final es opcional. |
| **Múltiples Casos (`switch`)** | `Segun variable Hacer` <br> `opcion_1: ...` <br> `opcion_2: ...` <br> `De otro modo: ...` <br> `Fin Segun` | `switch (variable) {` <br> `   case valor1: ` <br> `     // acciones ` <br> `     break; ` <br> `   case valor2: ` <br> `     // acciones ` <br> `     break; ` <br> `   default: ` <br> `     // acciones por defecto ` <br> `}` | Usado para **comparar una variable con múltiples valores fijos**. Es una alternativa más limpia al `if...else if` cuando se trata de una serie de valores específicos. |

___

### Ejercicios if - else

1.	Encontrar si un número es par o impar.
2.	Encontrar el mayor de dos números, solicita los dos números de tipo int.

Comun a todos los ejercicios:
### Ejercicios `if...else` en C++

Aquí tienes los ejercicios de `if...else` convertidos a C++. Para todos ellos, se usa la biblioteca `<iostream>` para la entrada (`std::cin`) y salida (`std::cout`) de datos.

-----

### **Ejercicio 1: Par o Impar y Mayor de Dos Números**

```cpp
#include <iostream>

int main() {
    // Mayor de dos números
    int n1, n2;
    std::cout << "Ingresa el primer numero (n1): ";
    std::cin >> n1;
    std::cout << "Ingresa el segundo numero (n2): ";
    std::cin >> n2;
    
    if (n1 > n2) {
        std::cout << "El numero mayor es n1: " << n1 << std::endl;
    } else {
        std::cout << "El numero mayor es n2: " << n2 << std::endl;
    }

    // Par o Impar
    int numero;
    std::cout << "Ingresa un numero para verificar si es par o impar: ";
    std::cin >> numero;
    
    if (numero % 2 == 0) {
        std::cout << numero << " es un numero par." << std::endl;
    } else {
        std::cout << numero << " es un numero impar." << std::endl;
    }

    return 0;
}
```

-----

### **Ejercicio 2: Mayoría de Edad**

```cpp
#include <iostream>

int main() {
    int edad;
    std::cout << "Dame tu edad: ";
    std::cin >> edad;
    
    if (edad >= 18) {
        std::cout << "Mayor de edad." << std::endl;
    } else {
        std::cout << "Menor de edad." << std::endl;
    }

    return 0;
}
```

-----

### **Ejercicio 3: Clima según la Temperatura**

```cpp
#include <iostream>

int main() {
    double temp;
    std::cout << "temperatura: ";
    std::cin >> temp;
    
    if (temp < 10) {
        std::cout << "Hace mucho frio." << std::endl;
    } else if (temp >= 10 && temp <= 17) {
        std::cout << "hace frio." << std::endl;
    } else { // temp > 17
        std::cout << "El clima es templado." << std::endl;
    }

    return 0;
}
```

-----

### **Ejercicio 4: Voto Válido**

```cpp
#include <iostream>

int main() {
    char voto;
    std::cout << "A favor de la paz s/n: ";
    std::cin >> voto;
    
    if (voto == 's' || voto == 'n' || voto == 'S' || voto == 'N') {
        std::cout << "Voto valido." << std::endl;
    } else {
        std::cout << "Voto invalido." << std::endl;
    }

    return 0;
}
```

-----

### **Ejercicio 5: Bono por Horas Extras**

```cpp
#include <iostream>

int main() {
    int horasTrabajadas;
    std::cout << "Horas trabajadas: ";
    std::cin >> horasTrabajadas;
    
    int horasBono = horasTrabajadas - 40;
    
    if (horasBono > 0) {
        int bono = horasBono * 75;
        std::cout << "Bono: " << bono << " pesos." << std::endl;
    } else {
        std::cout << "No tienes bono por horas extras." << std::endl;
    }

    return 0;
}
```

## Ejercicios

7.	Crear dos variables de tipo int, que guarden el día y mes, del cumpleaños del usuario. Si la fecha corresponde a mes 9 y día 15, escribir en pantalla, “Feliz cumpleaños”
8.	Crear una variable que se llame velocidad, pregunta por este valor, si esta es negativa, escribir en pantalla “velocidad negativa”, si la velocidad es cero, escribir en pantalla “en reposo”, y si es positiva escribir en pantalla “velocidad positiva”.
9.	Crear las siguientes variables de tipo int: huevos, mantequilla, leche, harina, levadura, azucar y sal. Asigna valores aleatorios a cada variable, entre 1 y 5. Si todos los ingredientes tienen al menos un elemento, escribir en pantalla “Puedes crear hot cakes” de lo contrario escribir en pantalla “No hay suficientes ingredientes”
10.	Crear un programa en C++ que determine cuantos hot cakes se pueden hacer basado en la pregunta anterior. 
