# Hoja de trabajo: ciclo while en C++

**Nombre:** ______________________________  **Matrícula:** ______________  **Fecha:** ____________

**Instrucciones:** responde cada ejercicio en el espacio indicado. Puedes compilar y ejecutar en tu IDE para comprobar tus respuestas **después** de contestarlas. El depurador (punto de interrupción + ejecución paso a paso) te ayudará mucho en este tema.

**Recordatorio de sintaxis**

```cpp
while (condicion) {
    // instrucciones que se repiten
}
```

Todos los programas de esta hoja van dentro de esta estructura:

```cpp
#include <iostream>
using namespace std;

int main() {
    // aquí va el código
    return 0;
}
```

---

## Ejercicio 1. ¿Qué hace un while?

Marca con una **X** la opción correcta.

- [ ] a) Elige entre dos caminos y ejecuta solo uno de ellos, una vez.
- [ ] b) Repite un bloque de instrucciones mientras la condición sea verdadera.
- [ ] c) Repite un bloque exactamente 10 veces, siempre.
- [ ] d) Repite un bloque mientras la condición sea falsa.

---

## Ejercicio 2. Verdadero o falso

Escribe **V** o **F** en cada línea.

| # | Afirmación | V / F |
|---|------------|-------|
| 1 | La condición se revisa **antes** de cada vuelta. | |
| 2 | Las instrucciones de un `while` se ejecutan al menos una vez, siempre. | |
| 3 | Si la condición nunca se vuelve falsa, el ciclo no termina (ciclo infinito). | |
| 4 | Si el `while` repite más de una instrucción, estas deben ir entre llaves `{ }`. | |
| 5 | Dentro del ciclo debe cambiar algo que, tarde o temprano, haga falsa la condición. | |
| 6 | Escribir `while (i <= 5);` (con punto y coma al final) no causa ningún problema. | |

---

## Ejercicio 3. Relaciona los conceptos

Escribe en la columna del centro la letra de la definición correcta.

| Concepto | Letra | | Definición |
|----------|-------|-|------------|
| Iteración | ___ | | a) Variable que suma valores en cada vuelta: `suma = suma + x;` (o `suma += x;`) |
| Contador | ___ | | b) Ciclo que nunca termina porque su condición siempre es verdadera |
| Acumulador | ___ | | c) Cada una de las vueltas que da el ciclo |
| Condición | ___ | | d) Variable que aumenta de uno en uno: `i = i + 1;` (o `i++;`) |
| Ciclo infinito | ___ | | e) Expresión entre paréntesis que decide si el ciclo da otra vuelta |

---

## Ejercicio 4. ¿Cuántas vueltas da?

Para cada caso, el ciclo es:

```cpp
int i = (valor inicial);
while (condición) {
    cout << i << endl;
    i++;
}
```

Escribe cuántas veces se ejecuta el `cout`.

| Valor inicial | Condición | Número de vueltas |
|---------------|-----------|-------------------|
| `int i = 1;`  | `i <= 5` | |
| `int i = 1;`  | `i < 5`  | |
| `int i = 0;`  | `i < 5`  | |
| `int i = 10;` | `i <= 5` | |

**Pregunta:** ¿por qué en el último caso el resultado es ese?

> Respuesta: ______________________________________________________________

---

## Ejercicio 5. Predice la salida

Escribe exactamente lo que mostrará la pantalla.

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        cout << i << endl;
        i = i + 3;
    }
    cout << "Fin" << endl;
    return 0;
}
```

```
(escribe aquí la salida)






```

**Pregunta:** ¿qué valor tiene `i` cuando el ciclo termina? ________

---

## Ejercicio 6. Prueba de escritorio

Completa la tabla siguiendo el programa vuelta por vuelta.

```cpp
#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int i = 1;
    while (i <= 4) {
        suma = suma + i;
        i++;
    }
    cout << "Suma: " << suma << endl;
    return 0;
}
```

| Momento | `i <= 4` ¿V o F? | `suma` | `i` |
|---------|------------------|--------|-----|
| Antes del ciclo | — | 0 | 1 |
| Después de la vuelta 1 | | | |
| Después de la vuelta 2 | | | |
| Después de la vuelta 3 | | | |
| Después de la vuelta 4 | | | |
| Revisión final | | | |

**¿Qué muestra la pantalla?** ______________________

---

## Ejercicio 7. Completa el código

El programa debe hacer una cuenta regresiva del 10 al 1 y después mostrar `¡Despegue!`. Completa los espacios.

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = ______;
    while (i ______ 1) ____
        cout << i << endl;
        i______;
    ____
    cout << "¡Despegue!" << endl;
    return 0;
}
```

---

## Ejercicio 8. Encuentra el error

Este programa debería mostrar los números del 1 al 5, pero al ejecutarlo **nunca termina**.

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << i << endl;
    }
    return 0;
}
```

> ¿Qué muestra la pantalla?: ______________________________________________
> ¿Cuál es el error?: _____________________________________________________
> ¿Qué línea agregarías y dónde?: _________________________________________
> ¿Cómo detienes un programa que no termina? ______________________________
> ¿Qué herramienta de tu IDE te ayudó a verlo? ____________________________

---

## Ejercicio 9. De la vida real al código

Convierte esta situación en un programa con `while`. La contraseña correcta es `"1234"` (guárdala en una variable de tipo `string`; recuerda `#include <string>`).

> *Pide la contraseña. Mientras sea incorrecta, muestra «Incorrecta, intenta de nuevo» y vuelve a pedirla. Cuando sea correcta, muestra «Bienvenido».*

```cpp
(escribe aquí tu programa)














```

**Pregunta:** si el usuario escribe `1234` a la primera, ¿cuántas veces se ejecuta el ciclo? ________

---

## Ejercicio 10. Ahora tú

Escribe un programa que pida un número y muestre su **tabla de multiplicar del 1 al 10**, con el formato `5 x 1 = 5`.

```cpp
(escribe aquí tu programa)














```

Después, dibuja su **diagrama de flujo** a mano. Fíjate en la flecha que **regresa** a la condición.

```
(espacio para el diagrama)












```

**Prueba tu programa** con el número `7` y completa:

| Pregunta | Respuesta |
|----------|-----------|
| Primera línea que aparece | |
| Última línea que aparece | |
| Número total de líneas de la tabla | |
| Valor de tu contador al terminar el ciclo | |
