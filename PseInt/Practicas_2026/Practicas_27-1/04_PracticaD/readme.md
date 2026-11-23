# Ejercicios de C++: Estructura `do ... while`

**Nombre:** ______________________________  **Matrícula:** ______________

**Instrucciones:** Resuelve cada ejercicio en C++ usando la estructura `do ... while`. Compila y prueba tu programa con los datos del ejemplo de ejecución y verifica que obtienes la misma salida.

## Repaso rápido

La estructura **`do ... while`** ejecuta un bloque de instrucciones **al menos una vez** y lo sigue repitiendo **mientras** la condición sea verdadera. La condición se evalúa **al final** de cada ciclo.

```cpp
do {
    // instrucciones
} while (condicion);   // ¡no olvides el punto y coma!
```

**Diferencia clave con `while`:** en `while` la condición se revisa antes de entrar (puede no ejecutarse nunca); en `do ... while` se revisa después (siempre se ejecuta al menos una vez). Por eso `do ... while` es ideal para **validar datos**, **menús** y **preguntas de "¿desea continuar?"**.

**⚠ Cuidado si vienes de PSeInt:** `Repetir ... Hasta Que` termina cuando la condición se vuelve **verdadera**; `do ... while` termina cuando la condición se vuelve **falsa**. Al traducir, la condición se **niega**:

| PSeInt | C++ |
|--------|-----|
| `Hasta Que num > 0` | `while (num <= 0);` |
| `Hasta Que opcion = 4` | `while (opcion != 4);` |
| `Hasta Que resp = "N" O resp = "n"` | `while (resp != 'N' && resp != 'n');` |

**Equivalencias útiles:**

| PSeInt | C++ |
|--------|-----|
| `Escribir` / `Leer` | `cout << ...` / `cin >> ...` (con `#include <iostream>`) |
| `MOD` | `%` |
| División entera `trunc(a/b)` | `a / b` (si ambos son `int`) |
| `Segun ... Hacer` | `switch ... case ... break;` |
| `Para i <- 1 Hasta 10` | `for (int i = 1; i <= 10; i++)` |
| `Azar(100) + 1` | `rand() % 100 + 1` (con `#include <cstdlib>` y `#include <ctime>`) |
| `Y` / `O` / `NO` | `&&` / `\|\|` / `!` |
| `Cadena` | `string` (con `#include <string>`) |

---

## Ejercicio 1. Validar un número positivo

**Enunciado:** Pide al usuario un número entero positivo. Si escribe un número menor o igual a cero, muestra un mensaje de error y vuelve a pedirlo. Al final, muestra el número válido.

**Ejemplo de ejecución:**
```
Ingresa un número positivo: -5
Error: el número debe ser mayor que cero.
Ingresa un número positivo: 0
Error: el número debe ser mayor que cero.
Ingresa un número positivo: 12
Número válido: 12
```
---

## Ejercicio 2. Sumar números hasta ingresar cero

**Enunciado:** Lee números enteros y ve acumulando su suma. El proceso termina cuando el usuario ingresa `0`. Muestra la suma total y cuántos números se ingresaron (sin contar el cero).

**Ejemplo de ejecución:**
```
Número (0 para terminar): 5
Número (0 para terminar): 8
Número (0 para terminar): -2
Número (0 para terminar): 0
Suma total: 11
Cantidad de números: 3
```
---

## Ejercicio 3. Menú de operaciones

**Enunciado:** Muestra un menú con las opciones: 1) Sumar, 2) Restar, 3) Multiplicar, 4) Salir. Si el usuario elige 1, 2 o 3, pide dos números y muestra el resultado. El menú se repite hasta que el usuario elija la opción 4. Si escribe una opción inexistente, indica que no es válida. Usa `switch` para atender cada opción.

**Ejemplo de ejecución:**
```
--- MENÚ ---
1) Sumar  2) Restar  3) Multiplicar  4) Salir
Opción: 1
Primer número: 4
Segundo número: 6
Resultado: 10
--- MENÚ ---
1) Sumar  2) Restar  3) Multiplicar  4) Salir
Opción: 4
¡Hasta luego!
```
---

## Ejercicio 4. Contraseña con tres intentos

**Enunciado:** La contraseña correcta es `"unitec2026"`. Pide al usuario la contraseña; tiene como máximo **3 intentos**. Si acierta, muestra "Acceso concedido". Si agota los intentos, muestra "Cuenta bloqueada".

> Pista: guarda la contraseña en una variable de tipo `string`; en C++ puedes compararla directamente con `==`.

**Ejemplo de ejecución:**
```
Contraseña: hola
Incorrecta. Te quedan 2 intentos.
Contraseña: 1234
Incorrecta. Te quedan 1 intentos.
Contraseña: unitec2026
Acceso concedido
```
---

## Ejercicio 5. Adivina el número

**Enunciado:** La computadora genera un número aleatorio entre 1 y 100. El usuario intenta adivinarlo; después de cada intento, el programa indica si el número secreto es **mayor** o **menor**. Al acertar, muestra cuántos intentos necesitó.

> Pista: escribe `srand(time(0));` una sola vez al inicio de `main` y después usa `rand() % 100 + 1` para obtener un número entre 1 y 100. Sin `srand`, el número secreto será el mismo en cada ejecución.

**Ejemplo de ejecución:**
```
Adivina el número (1-100): 50
El número es menor.
Adivina el número (1-100): 25
El número es mayor.
Adivina el número (1-100): 37
¡Correcto! Lo lograste en 3 intentos.
```
---

## Ejercicio 6. Contar los dígitos de un número

**Enunciado:** Lee un número entero positivo y cuenta cuántos dígitos tiene, dividiéndolo entre 10 repetidamente. Observa que el número `0` debe reportar **1 dígito**: aquí `do ... while` resulta más natural que `while`.

> Pista: si `num` es `int`, la expresión `num / 10` ya es una división entera (`45872 / 10` da `4587`).

**Ejemplo de ejecución:**
```
Ingresa un número: 45872
El número tiene 5 dígitos.
```
---

## Ejercicio 7. Invertir un número

**Enunciado:** Lee un número entero positivo y construye el número invertido. Por ejemplo, `1234` se convierte en `4321`.

> Pista: el último dígito se obtiene con `num % 10`.

**Ejemplo de ejecución:**
```
Ingresa un número: 1234
Número invertido: 4321
```
---

## Ejercicio 8. Tablas de multiplicar con "¿desea continuar?"

**Enunciado:** Pide un número y muestra su tabla de multiplicar del 1 al 10 usando un ciclo `for`. Después pregunta "¿Deseas ver otra tabla? (S/N)". El programa se repite mientras el usuario responda `S` o `s`, y termina con `N` o `n`.

> Pista: guarda la respuesta en una variable `char`. Recuerda que los caracteres van entre comillas simples: `'S'`.

**Ejemplo de ejecución:**
```
¿Qué tabla deseas ver? 3
3 x 1 = 3
3 x 2 = 6
...
3 x 10 = 30
¿Deseas ver otra tabla? (S/N): n
Fin del programa.
```
---

## Ejercicio 9. Promedio de calificaciones validadas

**Enunciado:** Lee calificaciones de alumnos (valores de 0 a 10). Cada calificación debe validarse con su propio `do ... while`: si está fuera de rango, se vuelve a pedir. El usuario indica que terminó ingresando `-1`. Al final muestra el promedio, la calificación más alta y la más baja. Si no se ingresó ninguna calificación, indícalo.

> Pista: usa variables `double` para la suma y el promedio. Si divides dos `int`, C++ descarta los decimales.

**Ejemplo de ejecución:**
```
Calificación (-1 para terminar): 8
Calificación (-1 para terminar): 15
Fuera de rango. Debe estar entre 0 y 10.
Calificación (-1 para terminar): 6
Calificación (-1 para terminar): -1
Promedio: 7
Más alta: 8
Más baja: 6
```
---

## Ejercicio 10. Simulador de cajero automático

**Enunciado:** El usuario inicia con un saldo de `$5,000`. Muestra un menú: 1) Consultar saldo, 2) Depositar, 3) Retirar, 4) Salir.
- Al **depositar**, la cantidad debe ser mayor que cero (valídala con `do ... while`).
- Al **retirar**, la cantidad debe ser mayor que cero y no superar el saldo disponible.
- El menú se repite hasta elegir **Salir**, y entonces se muestra el número total de operaciones realizadas (depósitos y retiros exitosos).

**Ejemplo de ejecución:**
```
1) Saldo  2) Depositar  3) Retirar  4) Salir
Opción: 3
Cantidad a retirar: 7000
Fondos insuficientes o cantidad inválida.
Cantidad a retirar: 1500
Retiro exitoso.
1) Saldo  2) Depositar  3) Retirar  4) Salir
Opción: 1
Saldo actual: $3500
1) Saldo  2) Depositar  3) Retirar  4) Salir
Opción: 4
Operaciones realizadas: 1. ¡Gracias por usar el cajero!
```

---

## Resumen de ejercicios

| # | Ejercicio | Concepto principal | Dificultad |
|---|-----------|-------------------|------------|
| 1 | Validar número positivo | Validación de entrada | Básica |
| 2 | Sumar hasta cero | Acumulador y contador con centinela | Básica |
| 3 | Menú de operaciones | Menú repetitivo con `switch` | Básica |
| 4 | Contraseña con tres intentos | Condición compuesta de salida (`&&`) | Intermedia |
| 5 | Adivina el número | Números aleatorios (`rand`, `srand`) y contador | Intermedia |
| 6 | Contar dígitos | División entera repetida | Intermedia |
| 7 | Invertir un número | `%` y construcción de números | Intermedia |
| 8 | Tablas con "¿desea continuar?" | `do ... while` combinado con `for` | Intermedia |
| 9 | Promedio de calificaciones | `do ... while` anidado, máximo y mínimo | Avanzada |
| 10 | Cajero automático | Menú + validaciones anidadas | Avanzada |

## Plantilla base

Todos los ejercicios pueden partir de esta estructura:

```cpp
#include <iostream>
#include <string>    // ejercicio 4
#include <cstdlib>   // ejercicio 5: rand, srand
#include <ctime>     // ejercicio 5: time
using namespace std;

int main() {
    // tu código aquí

    return 0;
}
```

> **Nota sobre acentos:** si en la consola de Windows los acentos y la `ñ` aparecen como símbolos extraños, agrega `#include <windows.h>` y escribe `SetConsoleOutputCP(65001);` al inicio de `main`, o bien escribe los mensajes sin acentos.
