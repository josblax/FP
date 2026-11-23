# Ejercicios de C++: Estructura `for`

**Nombre:** ______________________________  **Matrícula:** ______________

**Instrucciones:** Resuelve cada ejercicio en C++ usando la estructura `for`. Compila y prueba tu programa con los datos del ejemplo de ejecución y verifica que obtienes la misma salida.

## Repaso rápido

La estructura **`for`** repite un bloque de instrucciones un **número conocido de veces**. En una sola línea reúne las tres partes que controlan el ciclo:

```cpp
for (inicialización; condición; incremento) {
    // instrucciones
}
```

1. **Inicialización:** se ejecuta una sola vez, al inicio (`int i = 1`).
2. **Condición:** se revisa **antes** de cada vuelta; si es falsa, el ciclo termina (`i <= 10`).
3. **Incremento:** se ejecuta **al final** de cada vuelta (`i++`).

**¿Cuándo usar `for`?** Cuando sabes **cuántas veces** se repetirá algo (de 1 a N, los 7 días de la semana, cada letra de una palabra). Si no lo sabes de antemano (validar datos, menús, "¿desea continuar?"), usa `while` o `do ... while`.

**Equivalencias con PSeInt:**

| PSeInt | C++ |
|--------|-----|
| `Para i <- 1 Hasta 10 Hacer` | `for (int i = 1; i <= 10; i++)` |
| `Para i <- 2 Hasta 20 Con Paso 2 Hacer` | `for (int i = 2; i <= 20; i += 2)` |
| `Para i <- 10 Hasta 1 Con Paso -1 Hacer` | `for (int i = 10; i >= 1; i--)` |

**⚠ Errores comunes:**
- Poner `;` después del paréntesis: `for (int i = 1; i <= 10; i++);` ejecuta un ciclo **vacío** y el bloque se ejecuta una sola vez.
- Confundir `<` con `<=`: `i < 10` llega hasta 9; `i <= 10` llega hasta 10.
- Usar la variable `i` fuera del ciclo: si la declaraste dentro del `for`, solo existe ahí.

---

## Ejercicio 1. Contar del 1 al N

**Enunciado:** Pide al usuario un número entero `N` y muestra en una sola línea todos los números del 1 al N, separados por un espacio.

**Ejemplo de ejecución:**
```
¿Hasta qué número quieres contar? 7
1 2 3 4 5 6 7
```
---

## Ejercicio 2. Números pares y su suma

**Enunciado:** Pide un número `N` y muestra todos los números pares desde 2 hasta N. Al final, muestra la suma de esos pares. No uses `%`: haz que el `for` avance **de 2 en 2**.

**Ejemplo de ejecución:**
```
Ingresa N: 10
Pares: 2 4 6 8 10
Suma: 30
```
---

## Ejercicio 3. Cuenta regresiva

**Enunciado:** Pide un número `N` y muestra una cuenta regresiva desde N hasta 1. Al terminar, muestra `¡Despegue!`. El `for` debe ir **en reversa** (decremento).

**Ejemplo de ejecución:**
```
¿Desde qué número inicia la cuenta? 5
5... 4... 3... 2... 1... ¡Despegue!
```
---

## Ejercicio 4. Factorial de un número

**Enunciado:** Pide un número entero `N` (0 o mayor) y calcula su factorial: `N! = 1 × 2 × 3 × ... × N`. Por definición, `0! = 1`.

> Pista: el acumulador de una multiplicación inicia en `1`, no en `0`. Usa `long long` para el resultado, porque el factorial crece muy rápido. Observa que con `N = 0` el `for` no se ejecuta ni una vez y el resultado sigue siendo correcto.

**Ejemplo de ejecución:**
```
Ingresa un número: 5
5! = 120
```
---

## Ejercicio 5. Serie de Fibonacci

**Enunciado:** Pide cuántos términos de la serie de Fibonacci quiere ver el usuario y muéstralos. La serie inicia con `0` y `1`, y cada término siguiente es la suma de los dos anteriores.

> Pista: necesitas dos variables para los dos últimos términos y una tercera para calcular el siguiente.

**Ejemplo de ejecución:**
```
¿Cuántos términos quieres? 10
0 1 1 2 3 5 8 13 21 34
```
---

## Ejercicio 6. Ventas de la semana

**Enunciado:** Una tienda registra sus ventas durante los 7 días de la semana. Con un `for`, pide la venta de cada día. Al final, muestra el total de la semana, el promedio diario (con 2 decimales) y el día con la venta más alta.

> Pista: para mostrar 2 decimales usa `#include <iomanip>` y `cout << fixed << setprecision(2) << promedio;`.

**Ejemplo de ejecución:**
```
Venta del día 1: 1200
Venta del día 2: 800
Venta del día 3: 1500
Venta del día 4: 950
Venta del día 5: 2000
Venta del día 6: 3100
Venta del día 7: 1700
Total de la semana: $11250
Promedio diario: $1607.14
Mejor día: día 6 con $3100
```
---

## Ejercicio 7. Contar vocales de una palabra

**Enunciado:** Pide una palabra (sin acentos) y cuenta cuántas vocales tiene. Recorre la palabra letra por letra con un `for`. Deben contarse tanto mayúsculas como minúsculas.

> Pista: si la palabra está en una variable `string palabra`, su longitud es `palabra.length()` y la letra en la posición `i` es `palabra[i]`. Las posiciones inician en `0`.

**Ejemplo de ejecución:**
```
Escribe una palabra: Programacion
La palabra tiene 5 vocales.
```
---

## Ejercicio 8. Divisores y números primos

**Enunciado:** Pide un número entero positivo, muestra todos sus divisores y cuántos son. Después indica si el número es **primo** (un número primo tiene exactamente 2 divisores: el 1 y él mismo).

**Ejemplo de ejecución 1:**
```
Ingresa un número: 12
Divisores: 1 2 3 4 6 12
Total de divisores: 6
12 NO es primo.
```

**Ejemplo de ejecución 2:**
```
Ingresa un número: 13
Divisores: 1 13
Total de divisores: 2
13 es primo.
```
---

## Ejercicio 9. Triángulo de asteriscos

**Enunciado:** Pide la altura del triángulo y dibújalo con asteriscos: la fila 1 tiene un asterisco, la fila 2 tiene dos, y así sucesivamente. Necesitas **dos `for` anidados**: uno para las filas y otro, dentro, para los asteriscos de cada fila.

**Ejemplo de ejecución:**
```
Altura del triángulo: 5
*
**
***
****
*****
```

> **Reto opcional:** dibuja una pirámide centrada. Agrega un tercer `for` que imprima espacios antes de los asteriscos.
> ```
>     *
>    ***
>   *****
>  *******
> *********
> ```
---

## Ejercicio 10. Números perfectos

**Enunciado:** Un número es **perfecto** si es igual a la suma de sus divisores sin contarse a sí mismo. Por ejemplo, `6` es perfecto porque `1 + 2 + 3 = 6`. Pide un límite `N` y muestra todos los números perfectos entre 1 y N, junto con cuántos se encontraron.

> Pista: usa un `for` externo para recorrer cada número del 1 al N y un `for` interno para sumar sus divisores. Reutiliza la idea del ejercicio 8.

**Ejemplo de ejecución:**
```
Buscar números perfectos hasta: 1000
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248
Se encontraron 3 números perfectos.
```

---

## Resumen de ejercicios

| # | Ejercicio | Concepto principal | Dificultad |
|---|-----------|-------------------|------------|
| 1 | Contar del 1 al N | Estructura básica del `for` | Básica |
| 2 | Pares y su suma | Incremento distinto de 1 (`i += 2`) y acumulador | Básica |
| 3 | Cuenta regresiva | Ciclo en reversa (`i--`) | Básica |
| 4 | Factorial | Acumulador multiplicativo y `long long` | Intermedia |
| 5 | Serie de Fibonacci | Variables que se actualizan en cada vuelta | Intermedia |
| 6 | Ventas de la semana | Lectura de datos, total, promedio y máximo | Intermedia |
| 7 | Contar vocales | Recorrer un `string` con `for` | Intermedia |
| 8 | Divisores y primos | `%` dentro de un `for` y contador | Intermedia |
| 9 | Triángulo de asteriscos | `for` anidados | Avanzada |
| 10 | Números perfectos | `for` anidados con acumulador | Avanzada |

## Plantilla base

Todos los ejercicios pueden partir de esta estructura:

```cpp
#include <iostream>
#include <string>    // ejercicio 7
#include <iomanip>   // ejercicio 6: fixed, setprecision
using namespace std;

int main() {
    // tu código aquí

    return 0;
}
```

> **Nota sobre acentos:** si en la consola de Windows los acentos y la `ñ` aparecen como símbolos extraños, agrega `#include <windows.h>` y escribe `SetConsoleOutputCP(65001);` al inicio de `main`, o bien escribe los mensajes sin acentos.
