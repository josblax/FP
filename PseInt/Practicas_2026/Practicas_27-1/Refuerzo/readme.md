# Ejercicios de retroalimentación · Examen Bimestral PSeInt

Fundamentos de Programación · 2026

## Cómo encontrar tus ejercicios

1. Tu docente te envió por mensaje privado tu **llave personal**, con el formato `FP26-XXXX-XXXXX`.
2. Busca tu llave en esta página (`Ctrl + F` en Windows o `Cmd + F` en Mac).
3. Resuelve **todos** los ejercicios donde aparezca tu llave.

> No compartas tu llave. Es la única forma de identificar tus ejercicios.

## Instrucciones para resolver

- Resuelve cada ejercicio **a mano, con pluma de tinta azul**, en hoja blanca o de cuadrícula. No se aceptan lápiz, otros colores ni impresiones.
- Escribe en la parte superior de cada hoja tu **llave** y el **ID del ejercicio** (por ejemplo, `M04`).
- Trabaja en el **perfil flexible** de PSeInt: no es necesario declarar variables ni su tipo con `Definir`.
- Escribe el algoritmo completo en pseudocódigo de PSeInt, desde `Algoritmo` hasta `FinAlgoritmo`, con letra legible y la sangría de cada bloque.
- Debajo del algoritmo, haz la **prueba de escritorio** o **tabla de seguimiento** que se indica en cada ejercicio.
- No borres con corrector: si te equivocas, tacha con una sola línea y escribe al lado.
- Entrega en la fecha y por el medio que indique tu docente.

## Índice

| ID | Ejercicio | Estructura |
| --- | --- | --- |
| [S01](#s01) | Intercambio con auxiliar | Secuencial |
| [S02](#s02) | Salario semanal con nombre | Secuencial |
| [S03](#s03) | Subtotal, IVA y total | Secuencial |
| [S04](#s04) | Área y perímetro del círculo | Secuencial |
| [S05](#s05) | Área del rectángulo | Secuencial |
| [S06](#s06) | Promedio de 3 calificaciones | Secuencial |
| [S07](#s07) | Minutos a horas | Secuencial |
| [S08](#s08) | Pesos a dólares | Secuencial |
| [S09](#s09) | Celsius a Fahrenheit | Secuencial |
| [S10](#s10) | Saludo con nombre y edad | Secuencial |
| [C01](#c01) | Mayor de dos números | Si…Entonces |
| [C02](#c02) | Descuento por compra | Si…Entonces |
| [C03](#c03) | Retiro con saldo | Si…Entonces |
| [C04](#c04) | Aprobado o reprobado | Si…Entonces |
| [C05](#c05) | Mayor de edad | Si…Entonces |
| [C06](#c06) | Hace calor | Si…Entonces |
| [C07](#c07) | Multa por velocidad | Si…Entonces |
| [C08](#c08) | Salario con horas extra | Si…Entonces |
| [C09](#c09) | Par o impar | Si…Entonces |
| [C10](#c10) | Contraseña | Si…Entonces |
| [M01](#m01) | Promedio de N calificaciones | Mientras |
| [M02](#m02) | Validar edad no negativa | Mientras |
| [M03](#m03) | Suma hasta 0 | Mientras |
| [M04](#m04) | Suma de 1 a N | Mientras |
| [M05](#m05) | Factorial | Mientras |
| [M06](#m06) | Números de 1 a N | Mientras |
| [M07](#m07) | Cuenta regresiva y Despegue | Mientras |
| [M08](#m08) | Contar dígitos | Mientras |
| [M09](#m09) | Tabla de multiplicar | Mientras |
| [M10](#m10) | Meses para meta de ahorro | Mientras |
| [R01](#r01) | Adivinar número secreto | Repetir…Hasta Que |
| [R02](#r02) | Duplicar inversión | Repetir…Hasta Que |
| [R03](#r03) | Suma hasta 0 | Repetir…Hasta Que |
| [R04](#r04) | Cuenta regresiva N a 0 | Repetir…Hasta Que |
| [R05](#r05) | Pares de 2 a N | Repetir…Hasta Que |
| [R06](#r06) | Tabla de multiplicar | Repetir…Hasta Que |
| [R07](#r07) | Potencia por multiplicaciones | Repetir…Hasta Que |
| [R08](#r08) | Números del 1 al 10 | Repetir…Hasta Que |
| [R09](#r09) | Pedir número positivo | Repetir…Hasta Que |
| [R10](#r10) | Contraseña con intentos | Repetir…Hasta Que |

---

## Estructura: Secuencial

### S01

**Intercambio con auxiliar**

**Llaves (20):** `FP26-2AWH-ERKQ5`, `FP26-3PD4-JH2RA`, `FP26-4F5W-HDV4S`, `FP26-53DK-X9SQE`, `FP26-5N9G-E5Z6D`, `FP26-5X5T-R4FSN`, `FP26-7H89-K3MKG`, `FP26-BFWN-BJCAG`, `FP26-D4TY-G7VJ4`, `FP26-H3CM-943MK`, `FP26-N63Z-EHKYB`, `FP26-Q4H8-HCXN2`, `FP26-QCAM-535QK`, `FP26-QKYP-VRN4V`, `FP26-QZX6-6BYBA`, `FP26-RGPM-738G9`, `FP26-TYEN-AQW4J`, `FP26-VFWW-3NQEV`, `FP26-WDZK-76J7G`, `FP26-ZFK6-2NYJP`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea dos números en las variables a y b, intercambie sus valores usando una variable auxiliar y muestre los valores antes y después del intercambio.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S02

**Salario semanal con nombre**

**Llaves (4):** `FP26-3PD4-JH2RA`, `FP26-MXCE-J9AWW`, `FP26-R82V-RZPGC`, `FP26-VBE7-FG2NC`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea el nombre de un empleado, las horas que trabajó en la semana y el pago por hora, y muestre su salario semanal junto con su nombre.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S03

**Subtotal, IVA y total**

**Llaves (12):** `FP26-2AWH-ERKQ5`, `FP26-4F5W-HDV4S`, `FP26-4Y9B-RRGBK`, `FP26-53DK-X9SQE`, `FP26-B9DA-5NXPW`, `FP26-DZA4-F9MVT`, `FP26-GNX9-VV9W5`, `FP26-N63Z-EHKYB`, `FP26-NT4K-CEZTY`, `FP26-RGPM-738G9`, `FP26-VFWW-3NQEV`, `FP26-WN2W-NPXD2`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea el precio unitario de un producto y la cantidad comprada, y muestre el subtotal, el IVA (16%) y el total a pagar.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S04

**Área y perímetro del círculo**

**Llaves (4):** `FP26-DZA4-F9MVT`, `FP26-GNX9-VV9W5`, `FP26-VFWW-3NQEV`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea el radio de un círculo y muestre su área y su perímetro. La formula de area de un circulo es π×radio2El cuadrado calcúlalo multiplicando radio x radio.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S05

**Área del rectángulo**

**Llaves (14):** `FP26-2AWH-ERKQ5`, `FP26-4Y9B-RRGBK`, `FP26-53DK-X9SQE`, `FP26-5N9G-E5Z6D`, `FP26-B9DA-5NXPW`, `FP26-BFWN-BJCAG`, `FP26-D4TY-G7VJ4`, `FP26-EAW8-KBCVZ`, `FP26-G2X9-69HB4`, `FP26-M9GE-NWXNT`, `FP26-N63Z-EHKYB`, `FP26-NKDS-GKS7D`, `FP26-NT4K-CEZTY`, `FP26-WDZK-76J7G`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea la base y la altura de un rectángulo y muestre su área. La formula de área es base x altura.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S06

**Promedio de 3 calificaciones**

**Llaves (8):** `FP26-53DK-X9SQE`, `FP26-5X5T-R4FSN`, `FP26-G2X9-69HB4`, `FP26-H3CM-943MK`, `FP26-M9GE-NWXNT`, `FP26-N63Z-EHKYB`, `FP26-NT4K-CEZTY`, `FP26-ZFK6-2NYJP`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea tres calificaciones de un alumno y muestre su promedio.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S07

**Minutos a horas**

**Llaves (15):** `FP26-3PD4-JH2RA`, `FP26-4F5W-HDV4S`, `FP26-7H89-K3MKG`, `FP26-BFWN-BJCAG`, `FP26-D4TY-G7VJ4`, `FP26-G2X9-69HB4`, `FP26-GNX9-VV9W5`, `FP26-M9GE-NWXNT`, `FP26-NT4K-CEZTY`, `FP26-Q4H8-HCXN2`, `FP26-QCAM-535QK`, `FP26-RGPM-738G9`, `FP26-VFWW-3NQEV`, `FP26-WN2W-NPXD2`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea una cantidad de minutos y la muestre expresada en horas y minutos (por ejemplo, 135 minutos son 2 horas y 15 minutos). Usa la formula trunc() para obtener la parte entera de la division de minutos entre 60. Usa la formula % para obtener el residuo que seran los minutos.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S08

**Pesos a dólares**

**Llaves (13):** `FP26-3PD4-JH2RA`, `FP26-4F5W-HDV4S`, `FP26-4Y9B-RRGBK`, `FP26-5X5T-R4FSN`, `FP26-7H89-K3MKG`, `FP26-B9DA-5NXPW`, `FP26-D4TY-G7VJ4`, `FP26-EAW8-KBCVZ`, `FP26-F4X8-YWRYJ`, `FP26-H3CM-943MK`, `FP26-MXCE-J9AWW`, `FP26-RGPM-738G9`, `FP26-WDZK-76J7G`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea una cantidad en pesos mexicanos y el tipo de cambio del día, y muestre su equivalente en dólares.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S09

**Celsius a Fahrenheit**

**Llaves (10):** `FP26-2AWH-ERKQ5`, `FP26-5X5T-R4FSN`, `FP26-7H89-K3MKG`, `FP26-G2X9-69HB4`, `FP26-GNX9-VV9W5`, `FP26-Q4H8-HCXN2`, `FP26-R82V-RZPGC`, `FP26-TYEN-AQW4J`, `FP26-WDZK-76J7G`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea una temperatura en grados Celsius y la muestre convertida a grados Fahrenheit (F = C * 9 / 5 + 32).

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

### S10

**Saludo con nombre y edad**

**Llaves (2):** `FP26-NKDS-GKS7D`, `FP26-QKYP-VRN4V`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que pida al usuario su nombre y su edad, y después muestre un mensaje de saludo que incluya ambos datos, por ejemplo: Hola Ana, tienes 20 años.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica en el enunciado los datos que se leen (entradas) y lo que se muestra (salidas).
2. Elige un nombre claro para cada dato (`base`, `altura`, `area`) y úsalo siempre escrito igual.
3. Escribe las instrucciones en orden: `Leer` → cálculo con `<-` → `Escribir`.
4. Haz una prueba de escritorio con un ejemplo numérico y anota el resultado esperado.

[↑ Volver al índice](#índice)

---

## Estructura: Si…Entonces

### C01

**Mayor de dos números**

**Llaves (1):** `FP26-G2X9-69HB4`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea dos números diferentes y muestre cuál es el mayor.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C02

**Descuento por compra**

**Llaves (7):** `FP26-5X5T-R4FSN`, `FP26-ASWV-5FX4P`, `FP26-BFWN-BJCAG`, `FP26-F4X8-YWRYJ`, `FP26-NKDS-GKS7D`, `FP26-QZX6-6BYBA`, `FP26-TP8C-NKJPQ`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea el monto de una compra; si es mayor a 1000 pesos aplique un descuento del 10%, en caso contrario no aplique descuento. Muestre el total a pagar.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C03

**Retiro con saldo**

**Llaves (9):** `FP26-53DK-X9SQE`, `FP26-5X5T-R4FSN`, `FP26-7H89-K3MKG`, `FP26-ASWV-5FX4P`, `FP26-DZA4-F9MVT`, `FP26-NKDS-GKS7D`, `FP26-QZX6-6BYBA`, `FP26-TP8C-NKJPQ`, `FP26-WDZK-76J7G`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea el saldo de una cuenta y la cantidad que el cliente desea retirar; si el saldo alcanza, realice el retiro y muestre el saldo restante, en caso contrario muestre Saldo insuficiente.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C04

**Aprobado o reprobado**

**Llaves (4):** `FP26-ASWV-5FX4P`, `FP26-JFZV-X9K43`, `FP26-MXCE-J9AWW`, `FP26-R82V-RZPGC`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea la calificación final de un alumno (escala de 0 a 10) e indique si aprobó (6 o más) o reprobó.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C05

**Mayor de edad**

**Llaves (5):** `FP26-53DK-X9SQE`, `FP26-DZA4-F9MVT`, `FP26-NKDS-GKS7D`, `FP26-VBE7-FG2NC`, `FP26-WDZK-76J7G`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea la edad de una persona e indique si es mayor de edad (18 años o más) o menor de edad.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C06

**Hace calor**

**Llaves (1):** `FP26-TP8C-NKJPQ`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea la temperatura del día en grados Celsius; si es mayor a 30 muestre el mensaje Hace calor, en caso contrario muestre No hace calor.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C07

**Multa por velocidad**

**Llaves:** ninguna asignada · práctica libre opcional

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea la velocidad de un automóvil en km/h e indique si recibe multa (velocidad mayor a 100) o si circula a velocidad permitida.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C08

**Salario con horas extra**

**Llaves (10):** `FP26-53DK-X9SQE`, `FP26-7H89-K3MKG`, `FP26-BFWN-BJCAG`, `FP26-F4X8-YWRYJ`, `FP26-JFZV-X9K43`, `FP26-MXCE-J9AWW`, `FP26-R82V-RZPGC`, `FP26-VBE7-FG2NC`, `FP26-WDZK-76J7G`, `FP26-WN2W-NPXD2`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea las horas trabajadas en la semana y el pago por hora de un empleado; las horas que excedan de 40 se pagan al doble. Muestre el salario semanal.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C09

**Par o impar**

**Llaves (9):** `FP26-5X5T-R4FSN`, `FP26-7H89-K3MKG`, `FP26-BFWN-BJCAG`, `FP26-DZA4-F9MVT`, `FP26-F4X8-YWRYJ`, `FP26-GNX9-VV9W5`, `FP26-JFZV-X9K43`, `FP26-QZX6-6BYBA`, `FP26-R82V-RZPGC`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número entero e indique si es par o impar.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

### C10

**Contraseña**

**Llaves:** ninguna asignada · práctica libre opcional

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea una contraseña y muestre Acceso concedido si es igual a unitec2026, o Acceso denegado en caso contrario.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica entradas, salidas y la condición que decide el resultado.
2. Escribe la condición con un operador relacional (`>`, `>=`, `<`, `<=`, `=`, `<>`).
3. Usa la estructura completa: `Si condición Entonces` … `SiNo` … `FinSi`.
4. Prueba con tres valores: uno que cumple, uno que no cumple y el valor límite exacto.

[↑ Volver al índice](#índice)

---

## Estructura: Mientras

### M01

**Promedio de N calificaciones**

**Llaves (23):** `FP26-3MSP-24FGD`, `FP26-3PD4-JH2RA`, `FP26-4F5W-HDV4S`, `FP26-53DK-X9SQE`, `FP26-5X5T-R4FSN`, `FP26-6GWD-AGSPZ`, `FP26-738B-H7464`, `FP26-7H89-K3MKG`, `FP26-B7PP-R88NN`, `FP26-B9DA-5NXPW`, `FP26-FRM4-ARZ42`, `FP26-GE78-S62YP`, `FP26-H3CM-943MK`, `FP26-JED9-Y5JWB`, `FP26-PTW9-8ME7J`, `FP26-QZX6-6BYBA`, `FP26-R82V-RZPGC`, `FP26-TM6M-FEH8G`, `FP26-TYEN-AQW4J`, `FP26-VBE7-FG2NC`, `FP26-YV6C-X6CE7`, `FP26-YZSK-YZVNT`, `FP26-ZFK6-2NYJP`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea cuántas calificaciones se van a capturar (N), después lea las N calificaciones y muestre su promedio. Usa la estructura Mientras.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M02

**Validar edad no negativa**

**Llaves (5):** `FP26-3PD4-JH2RA`, `FP26-F4X8-YWRYJ`, `FP26-GNX9-VV9W5`, `FP26-RGPM-738G9`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea la edad de una persona y, mientras el valor ingresado sea negativo, muestre un mensaje de error y la vuelva a pedir. Al final muestre la edad válida.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M03

**Suma hasta 0**

**Llaves (2):** `FP26-6GWD-AGSPZ`, `FP26-G2X9-69HB4`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea números uno por uno hasta que el usuario ingrese 0, y al final muestre la suma de todos los números ingresados. Usa la estructura Mientras.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M04

**Suma de 1 a N**

**Llaves (21):** `FP26-2AWH-ERKQ5`, `FP26-3MSP-24FGD`, `FP26-7H89-K3MKG`, `FP26-97BK-JMJ32`, `FP26-G2X9-69HB4`, `FP26-GNX9-VV9W5`, `FP26-H3CM-943MK`, `FP26-JFZV-X9K43`, `FP26-N63Z-EHKYB`, `FP26-NKDS-GKS7D`, `FP26-NRA9-2JEE3`, `FP26-NT4K-CEZTY`, `FP26-PTW9-8ME7J`, `FP26-R82V-RZPGC`, `FP26-S2B3-PRGRP`, `FP26-VBE7-FG2NC`, `FP26-WDZK-76J7G`, `FP26-YEQ3-5WE7T`, `FP26-YZSK-YZVNT`, `FP26-ZFK6-2NYJP`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número entero N y calcule la suma de los números del 1 al N usando la estructura Mientras. Tip. Recuerda ir acumulando en una variable diferente para sumar los números que se van incrementando en 1.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M05

**Factorial**

**Llaves (20):** `FP26-4Y9B-RRGBK`, `FP26-53DK-X9SQE`, `FP26-B7PP-R88NN`, `FP26-B9DA-5NXPW`, `FP26-EAW8-KBCVZ`, `FP26-F4X8-YWRYJ`, `FP26-FCTX-3RNW3`, `FP26-FSZ5-6PGZY`, `FP26-G2X9-69HB4`, `FP26-GE78-S62YP`, `FP26-H3CM-943MK`, `FP26-JFZV-X9K43`, `FP26-N63Z-EHKYB`, `FP26-NKDS-GKS7D`, `FP26-QCAM-535QK`, `FP26-QZX6-6BYBA`, `FP26-RGPM-738G9`, `FP26-TYEN-AQW4J`, `FP26-WN2W-NPXD2`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número entero N y calcule su factorial usando la estructura Mientras. Tip. Para calcular el factorial, debes acumular la multiplicación de una variable llamada factorial por el numero que vas acumulando.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M06

**Números de 1 a N**

**Llaves (3):** `FP26-EAW8-KBCVZ`, `FP26-N63Z-EHKYB`, `FP26-QCAM-535QK`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número entero N y muestre los números del 1 al N usando la estructura Mientras.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M07

**Cuenta regresiva y Despegue**

**Llaves (16):** `FP26-2AWH-ERKQ5`, `FP26-35YE-S9QRN`, `FP26-3PD4-JH2RA`, `FP26-5X5T-R4FSN`, `FP26-6GWD-AGSPZ`, `FP26-EAW8-KBCVZ`, `FP26-F4X8-YWRYJ`, `FP26-GNX9-VV9W5`, `FP26-JED9-Y5JWB`, `FP26-NT4K-CEZTY`, `FP26-PTW9-8ME7J`, `FP26-QCAM-535QK`, `FP26-WDZK-76J7G`, `FP26-WN2W-NPXD2`, `FP26-YEQ3-5WE7T`, `FP26-YZSK-YZVNT`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número entero N y muestre una cuenta regresiva desde N hasta 1; al terminar muestre el mensaje Despegue. Usa la estructura Mientras.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M08

**Contar dígitos**

**Llaves (2):** `FP26-GE78-S62YP`, `FP26-WN2W-NPXD2`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número entero positivo y muestre cuántos dígitos tiene, usando la estructura Mientras y divisiones entre 10. Tip. Para ir dividiendo el número ocupa la formula num=trunc(num/10). Y ve acumulando cada iteración para contar los digitos.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M09

**Tabla de multiplicar**

**Llaves (13):** `FP26-35YE-S9QRN`, `FP26-4F5W-HDV4S`, `FP26-4Y9B-RRGBK`, `FP26-53DK-X9SQE`, `FP26-5X5T-R4FSN`, `FP26-7H89-K3MKG`, `FP26-B7PP-R88NN`, `FP26-NT4K-CEZTY`, `FP26-R82V-RZPGC`, `FP26-S2B3-PRGRP`, `FP26-TYEN-AQW4J`, `FP26-YV6C-X6CE7`, `FP26-ZFK6-2NYJP`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número y muestre su tabla de multiplicar del 1 al 10 usando la estructura Mientras.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### M10

**Meses para meta de ahorro**

**Llaves (17):** `FP26-2AWH-ERKQ5`, `FP26-35YE-S9QRN`, `FP26-3MSP-24FGD`, `FP26-4F5W-HDV4S`, `FP26-4Y9B-RRGBK`, `FP26-B9DA-5NXPW`, `FP26-FVS6-EKCCC`, `FP26-JED9-Y5JWB`, `FP26-JFZV-X9K43`, `FP26-NKDS-GKS7D`, `FP26-QZX6-6BYBA`, `FP26-RGPM-738G9`, `FP26-S2B3-PRGRP`, `FP26-VBE7-FG2NC`, `FP26-WDZK-76J7G`, `FP26-YEQ3-5WE7T`, `FP26-YV6C-X6CE7`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea una meta de ahorro y la cantidad que se depositará cada mes, y calcule cuántos meses se necesitan para alcanzar la meta. Usa la estructura Mientras.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica las tres piezas del ciclo: valor inicial, condición y cambio en cada vuelta.
2. Inicializa contadores y acumuladores **antes** del ciclo (suma en 0, producto en 1).
3. Escribe `Mientras condición Hacer` … `FinMientras` y verifica que dentro cambie la variable de la condición.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

---

## Estructura: Repetir…Hasta Que

### R01

**Adivinar número secreto**

**Llaves (18):** `FP26-3PD4-JH2RA`, `FP26-4F5W-HDV4S`, `FP26-ASWV-5FX4P`, `FP26-B9DA-5NXPW`, `FP26-BFWN-BJCAG`, `FP26-F4X8-YWRYJ`, `FP26-FCTX-3RNW3`, `FP26-G2X9-69HB4`, `FP26-GE78-S62YP`, `FP26-GNX9-VV9W5`, `FP26-JFZV-X9K43`, `FP26-NKDS-GKS7D`, `FP26-NT4K-CEZTY`, `FP26-QCAM-535QK`, `FP26-QZX6-6BYBA`, `FP26-TP8C-NKJPQ`, `FP26-ZFK6-2NYJP`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que genere un número secreto al azar entre 1 y 10 y pida al usuario que lo adivine hasta acertar; al final muestre cuántos intentos necesitó. Usa la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R02

**Duplicar inversión**

**Llaves (17):** `FP26-4F5W-HDV4S`, `FP26-738B-H7464`, `FP26-BFWN-BJCAG`, `FP26-FVS6-EKCCC`, `FP26-G2X9-69HB4`, `FP26-GE78-S62YP`, `FP26-GNX9-VV9W5`, `FP26-M9GE-NWXNT`, `FP26-NT4K-CEZTY`, `FP26-R82V-RZPGC`, `FP26-S2B3-PRGRP`, `FP26-TP8C-NKJPQ`, `FP26-TYEN-AQW4J`, `FP26-VBE7-FG2NC`, `FP26-YZSK-YZVNT`, `FP26-ZFK6-2NYJP`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea el monto inicial de una inversión que gana 10% anual y calcule cuántos años tarda en duplicarse, usando la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R03

**Suma hasta 0**

**Llaves (18):** `FP26-3PD4-JH2RA`, `FP26-53M7-5AJV6`, `FP26-5N9G-E5Z6D`, `FP26-5X5T-R4FSN`, `FP26-6GWD-AGSPZ`, `FP26-B9DA-5NXPW`, `FP26-FSZ5-6PGZY`, `FP26-GNX9-VV9W5`, `FP26-NKDS-GKS7D`, `FP26-PTW9-8ME7J`, `FP26-QCAM-535QK`, `FP26-TP8C-NKJPQ`, `FP26-VBE7-FG2NC`, `FP26-VFWW-3NQEV`, `FP26-WN2W-NPXD2`, `FP26-YV6C-X6CE7`, `FP26-YZSK-YZVNT`, `FP26-ZFK6-2NYJP`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea números uno por uno hasta que el usuario ingrese 0, y al final muestre la suma de todos los números ingresados. Usa la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R04

**Cuenta regresiva N a 0**

**Llaves (12):** `FP26-53M7-5AJV6`, `FP26-6GWD-AGSPZ`, `FP26-ASWV-5FX4P`, `FP26-BFWN-BJCAG`, `FP26-D4TY-G7VJ4`, `FP26-F4X8-YWRYJ`, `FP26-M9GE-NWXNT`, `FP26-N63Z-EHKYB`, `FP26-QCAM-535QK`, `FP26-S2B3-PRGRP`, `FP26-WN2W-NPXD2`, `FP26-YV6C-X6CE7`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número entero N (0 o mayor) y muestre una cuenta regresiva desde N hasta 0 usando la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R05

**Pares de 2 a N**

**Llaves (15):** `FP26-97BK-JMJ32`, `FP26-ASWV-5FX4P`, `FP26-D4TY-G7VJ4`, `FP26-JFZV-X9K43`, `FP26-M9GE-NWXNT`, `FP26-N63Z-EHKYB`, `FP26-NKDS-GKS7D`, `FP26-NRA9-2JEE3`, `FP26-R82V-RZPGC`, `FP26-S2B3-PRGRP`, `FP26-S7BT-WFBR5`, `FP26-TYEN-AQW4J`, `FP26-VBE7-FG2NC`, `FP26-WN2W-NPXD2`, `FP26-YV6C-X6CE7`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número entero N (2 o mayor) y muestre los números pares desde 2 hasta N usando la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R06

**Tabla de multiplicar**

**Llaves (17):** `FP26-3PD4-JH2RA`, `FP26-4F5W-HDV4S`, `FP26-6GWD-AGSPZ`, `FP26-B9DA-5NXPW`, `FP26-D4TY-G7VJ4`, `FP26-FRM4-ARZ42`, `FP26-G2X9-69HB4`, `FP26-GE78-S62YP`, `FP26-N63Z-EHKYB`, `FP26-NT4K-CEZTY`, `FP26-QZX6-6BYBA`, `FP26-R82V-RZPGC`, `FP26-TM6M-FEH8G`, `FP26-TYEN-AQW4J`, `FP26-WDZK-76J7G`, `FP26-YZSK-YZVNT`, `FP26-ZQAY-RM9VG`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea un número y muestre su tabla de multiplicar del 1 al 10 usando la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R07

**Potencia por multiplicaciones**

**Llaves (1):** `FP26-5N9G-E5Z6D`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que lea una base y un exponente entero (mayor o igual a 1) y calcule la potencia mediante multiplicaciones sucesivas, usando la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R08

**Números del 1 al 10**

**Llaves (3):** `FP26-F4X8-YWRYJ`, `FP26-QZX6-6BYBA`, `FP26-S7BT-WFBR5`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que muestre los números del 1 al 10 usando la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R09

**Pedir número positivo**

**Llaves (2):** `FP26-7H89-K3MKG`, `FP26-VFWW-3NQEV`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que pida un número al usuario y lo vuelva a pedir hasta que sea positivo (mayor que 0). Al final muestre el número válido. Usa la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)

### R10

**Contraseña con intentos**

**Llaves (1):** `FP26-PTW9-8ME7J`

**Enunciado**

> Escribe un algoritmo en PSeInt (perfil flexible) que pida una contraseña hasta que el usuario escriba unitec2026, y al final muestre cuántos intentos realizó. Usa la estructura Repetir.. Hasta Que.

**Para resolverlo** (a mano, con pluma azul)

1. Identifica qué se repite y cuál es la condición para **salir** del ciclo.
2. Inicializa contadores y acumuladores antes de `Repetir`.
3. Escribe `Repetir` … `Hasta Que condición`; recuerda que el bloque se ejecuta al menos una vez.
4. Haz una tabla de seguimiento: una columna por variable y una fila por vuelta, hasta que el ciclo termine.

[↑ Volver al índice](#índice)
