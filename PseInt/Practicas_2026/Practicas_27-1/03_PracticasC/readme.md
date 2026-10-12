# Hoja de trabajo: ciclo Mientras en PSeInt

**Nombre:** ______________________________  **Matrícula:** ______________  **Fecha:** ____________

**Instrucciones:** responde cada ejercicio en el espacio indicado. Puedes usar PSeInt (perfil Flexible) para comprobar tus respuestas **después** de contestarlas. La ejecución paso a paso (F5) te ayudará mucho en este tema.

**Recordatorio de sintaxis**

```
Mientras condicion Hacer
    // instrucciones que se repiten
FinMientras
```

---

## Ejercicio 1. ¿Qué hace un Mientras?

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
| 2 | Las instrucciones de un `Mientras` se ejecutan al menos una vez, siempre. | |
| 3 | Si la condición nunca se vuelve falsa, el ciclo no termina (ciclo infinito). | |
| 4 | Todo `Mientras` debe cerrarse con `FinMientras`. | |
| 5 | Dentro del ciclo debe cambiar algo que, tarde o temprano, haga falsa la condición. | |

---

## Ejercicio 3. Relaciona los conceptos

Escribe en la columna del centro la letra de la definición correcta.

| Concepto | Letra | | Definición |
|----------|-------|-|------------|
| Iteración | ___ | | a) Variable que suma valores en cada vuelta: `suma <- suma + x` |
| Contador | ___ | | b) Ciclo que nunca termina porque su condición siempre es verdadera |
| Acumulador | ___ | | c) Cada una de las vueltas que da el ciclo |
| Condición | ___ | | d) Variable que aumenta de uno en uno: `i <- i + 1` |
| Ciclo infinito | ___ | | e) Pregunta que decide si el ciclo da otra vuelta |

---

## Ejercicio 4. ¿Cuántas vueltas da?

Para cada caso, el ciclo es:

```
i <- (valor inicial)
Mientras (condición) Hacer
    Escribir i
    i <- i + 1
FinMientras
```

Escribe cuántas veces se ejecuta el `Escribir`.

| Valor inicial | Condición | Número de vueltas |
|---------------|-----------|-------------------|
| `i <- 1`  | `i <= 5` | |
| `i <- 1`  | `i < 5`  | |
| `i <- 0`  | `i < 5`  | |
| `i <- 10` | `i <= 5` | |

**Pregunta:** ¿por qué en el último caso el resultado es ese?

> Respuesta: ______________________________________________________________

---

## Ejercicio 5. Predice la salida

Escribe exactamente lo que mostrará la pantalla.

```
Algoritmo Saltos
    i <- 1
    Mientras i <= 10 Hacer
        Escribir i
        i <- i + 3
    FinMientras
    Escribir "Fin"
FinAlgoritmo
```

```
(escribe aquí la salida)






```

**Pregunta:** ¿qué valor tiene `i` cuando el ciclo termina? ________

---

## Ejercicio 6. Prueba de escritorio

Completa la tabla siguiendo el algoritmo vuelta por vuelta.

```
Algoritmo Suma
    suma <- 0
    i <- 1
    Mientras i <= 4 Hacer
        suma <- suma + i
        i <- i + 1
    FinMientras
    Escribir "Suma: ", suma
FinAlgoritmo
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

El algoritmo debe hacer una cuenta regresiva del 10 al 1 y después mostrar `¡Despegue!`. Completa los espacios.

```
Algoritmo CuentaRegresiva
    i <- ______
    Mientras i ______ 1 ____________
        Escribir i
        i <- ______________
    ______________
    Escribir "¡Despegue!"
FinAlgoritmo
```

---

## Ejercicio 8. Encuentra el error

Este programa debería mostrar los números del 1 al 5, pero al ejecutarlo **nunca termina**.

```
Algoritmo Numeros
    i <- 1
    Mientras i <= 5 Hacer
        Escribir i
    FinMientras
FinAlgoritmo
```

> ¿Qué muestra la pantalla?: ______________________________________________
> ¿Cuál es el error?: _____________________________________________________
> ¿Qué línea agregarías y dónde?: _________________________________________
> ¿Qué herramienta de PSeInt te ayudó a verlo? ____________________________

---

## Ejercicio 9. De la vida real al pseudocódigo

Convierte esta situación en un algoritmo con `Mientras`. La contraseña correcta es `"1234"`.

> *Pide la contraseña. Mientras sea incorrecta, muestra «Incorrecta, intenta de nuevo» y vuelve a pedirla. Cuando sea correcta, muestra «Bienvenido».*

```
(escribe aquí tu algoritmo)











```

**Pregunta:** si el usuario escribe `1234` a la primera, ¿cuántas veces se ejecuta el ciclo? ________

---

## Ejercicio 10. Ahora tú

Escribe un algoritmo que pida un número y muestre su **tabla de multiplicar del 1 al 10**, con el formato `5 x 1 = 5`.

```
(escribe aquí tu algoritmo)











```

Después, dibuja su **diagrama de flujo** (a mano, y luego compáralo con el que genera PSeInt con F7). Fíjate en la flecha que **regresa** a la condición.

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
