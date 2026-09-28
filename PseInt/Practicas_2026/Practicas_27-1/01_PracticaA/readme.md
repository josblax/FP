# Ejercicios de refuerzo: Escribir y Leer en PSeInt

**Curso:** Fundamentos de Programación
**Perfil de PSeInt:** Flexible (Configurar → Opciones del Lenguaje (perfiles) → Flexible)
**Instrucciones permitidas:** únicamente `Escribir` y `Leer` (más `Algoritmo` / `FinAlgoritmo`).

## Cómo trabajar cada ejercicio

Para **cada** ejercicio completa estas cuatro tareas y marca la casilla al terminar:

- [ ] **Escribir el código** y guardarlo con el nombre indicado (`.psc`).
- [ ] **Ejecutar (F9)** al menos dos veces, con datos diferentes cada vez.
- [ ] **Diagrama de flujo (F7):** generarlo y comprobar que el orden de los bloques coincide con tu código.
- [ ] **Depurar (F5):** recorrerlo paso a paso con la *Prueba de Escritorio* activada y anotar en qué paso cambia cada variable.

> **Recordatorios clave**
> - El texto literal va entre comillas: `"Hola"`.
> - La coma une valores **sin agregar espacios**: `Escribir "Hola ", nombre`.
> - `Sin Saltar` mantiene el cursor en la misma línea: ideal antes de un `Leer`.
> - Antes de cada `Leer`, un `Escribir` debe indicar al usuario qué dato ingresar.

---

## Nivel 1: Solo salida

### Ejercicio 1. Hola, mundo
**Archivo:** `ej01_hola.psc`
**Objetivo:** usar `Escribir` con texto literal.

Escribe un algoritmo que muestre en pantalla el mensaje `¡Hola, mundo desde PSeInt!`.

**Salida esperada**
```
¡Hola, mundo desde PSeInt!
```

**Pregunta de reflexión:** en la vista paso a paso, ¿cuántos pasos tiene este algoritmo?

---

### Ejercicio 2. Mi horario de clases
**Archivo:** `ej02_horario.psc`
**Objetivo:** usar varios `Escribir` para dar formato en varias líneas.

Muestra un pequeño horario de tres materias, con un título y una línea separadora.

**Salida esperada** (con tus propias materias)
```
===== MI HORARIO =====
Lunes     - Programación
Miércoles - Matemáticas
Viernes   - Inglés
======================
```

**Pista:** los espacios dentro de las comillas también se imprimen; úsalos para alinear.

---

## Nivel 2: Entrada y salida básica

### Ejercicio 3. El eco
**Archivo:** `ej03_eco.psc`
**Objetivo:** leer un dato y mostrarlo tal cual.

Pide al usuario una palabra y repítela.

**Ejemplo de ejecución** (lo que escribe el usuario va después de los dos puntos)
```
Escribe una palabra:
gato
Dijiste: gato
```

**Depuración:** detén la ejecución paso a paso justo **antes** del `Leer`. ¿Qué valor tiene la variable en la prueba de escritorio? ¿Y justo después?

---

### Ejercicio 4. Saludo personalizado
**Archivo:** `ej04_saludo.psc`
**Objetivo:** combinar texto y variables con comas.

Pide el nombre y la edad del usuario, y muestra un saludo en una sola línea.

**Ejemplo de ejecución**
```
¿Cómo te llamas?
Mariana
¿Cuántos años tienes?
19
Hola Mariana, tienes 19 años.
```

**Cuidado:** si el resultado sale como `HolaMariana, tienes19años.`, revisa los espacios dentro de las comillas.

---

### Ejercicio 5. Todo en la misma línea
**Archivo:** `ej05_sin_saltar.psc`
**Objetivo:** usar `Sin Saltar` antes de `Leer`.

Pide al usuario su color favorito y su comida favorita, de modo que cada dato se escriba **en la misma línea** que su pregunta. Al final muestra un resumen.

**Ejemplo de ejecución**
```
Color favorito: azul
Comida favorita: tacos
Te gusta el azul y comer tacos.
```

**Reto extra:** ejecuta una versión sin `Sin Saltar` y compara las dos consolas. Anota la diferencia.

---

### Ejercicio 6. Fecha armada
**Archivo:** `ej06_fecha.psc`
**Objetivo:** leer **varias variables con un solo `Leer`**.

Pide día, mes y año con una única instrucción `Leer dia, mes, anio` y muestra la fecha en formato `dd/mm/aaaa`.

**Ejemplo de ejecución**
```
Escribe día, mes y año (Enter después de cada uno):
15
09
2026
La fecha es: 15/09/2026
```

**Diagrama de flujo:** ¿cuántos bloques de entrada aparecen para este `Leer`? Compáralo con un programa que use tres `Leer` separados.

---

## Nivel 3: Formato y diseño de salida

### Ejercicio 7. Ficha de alumno
**Archivo:** `ej07_ficha.psc`
**Objetivo:** capturar varios datos y presentarlos como una ficha ordenada.

Pide nombre completo, matrícula, carrera y semestre. Luego muestra una ficha con encabezado.

**Ejemplo de ejecución**
```
Nombre completo: Carlos Pérez
Matrícula: A01234
Carrera: Sistemas
Semestre: 1
------------------------------
        FICHA DEL ALUMNO
------------------------------
Nombre    : Carlos Pérez
Matrícula : A01234
Carrera   : Sistemas
Semestre  : 1
------------------------------
```

---

### Ejercicio 8. Tarjeta de presentación
**Archivo:** `ej08_tarjeta.psc`
**Objetivo:** diseñar una salida con marco de caracteres.

Pide nombre, profesión y correo electrónico, y muestra una tarjeta enmarcada con `*`.

**Ejemplo de ejecución**
```
Nombre: Laura Gómez
Profesión: Diseñadora
Correo: laura@correo.com
******************************
*  Laura Gómez
*  Diseñadora
*  laura@correo.com
******************************
```

**Depuración:** con la ejecución paso a paso, identifica la línea exacta en que se imprime el marco inferior.

---

### Ejercicio 9. Boleto de cine
**Archivo:** `ej09_boleto.psc`
**Objetivo:** integrar todo lo anterior en un programa más largo.

Pide: nombre de la película, sala, horario y asiento. Muestra el boleto con el formato de abajo.

**Ejemplo de ejecución**
```
Película: Viaje a las estrellas
Sala: 4
Horario: 18:30
Asiento: F7
==============================
         CINE CENTRAL
==============================
Película : Viaje a las estrellas
Sala 4  |  18:30  |  Asiento F7
==============================
   ¡Disfruta la función!
```

**Diagrama de flujo:** antes de presionar F7, dibuja el diagrama a mano. Luego compáralo con el que genera PSeInt y corrige el tuyo.

---

## Nivel 4: Detectar y corregir

### Ejercicio 10. Encuentra los errores
**Archivo:** `ej10_errores.psc`
**Objetivo:** usar Ejecutar y Depurar para localizar errores.

El siguiente programa debería pedir el nombre y la ciudad del usuario y mostrar `Ana vive en Puebla.`, pero tiene **cuatro errores**. Cópialo tal cual, ejecútalo y corrígelo.

```
Algoritmo Errores
    Escribir "¿Cómo te llamas?
    Leer "nombre"
    Escribir nombre, "vive en", ciudad, "."
    Escribir "¿En qué ciudad vives?"
    Leer ciudad
FinAlgoritmo
```

**Registra tu trabajo en esta tabla:**

| # | Línea | Error encontrado | ¿Qué herramienta lo detectó? | Corrección |
|---|-------|------------------|------------------------------|------------|
| 1 |       |                  |                              |            |
| 2 |       |                  |                              |            |
| 3 |       |                  |                              |            |
| 4 |       |                  |                              |            |

---

## Autoevaluación

Marca lo que ya dominas:

- [ ] Muestro texto con `Escribir` y sé por qué va entre comillas.
- [ ] Combino texto y variables con comas, cuidando los espacios.
- [ ] Uso `Sin Saltar` para pedir datos en la misma línea.
- [ ] Capturo uno o varios datos con `Leer`.
- [ ] Ejecuto un algoritmo e interpreto los errores que marca PSeInt.
- [ ] Genero e interpreto el diagrama de flujo de mi algoritmo.
- [ ] Sigo un algoritmo paso a paso y leo la prueba de escritorio.

---

