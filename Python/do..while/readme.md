# Operadores de asignación

* Los operadores de asignación son usados en Python para asignar valores a varibles.
* Por ejemplo a = 5, es una asignación simple, en el que asigna el valor de 5 a la variable "a" en la izquierda.
* Existen varios operadores de asignación, por ejemplo a += 5, que suma el valor de 5 al valor que ya tenga a en el momento, y es equivalente a a = a + 5.
* "=", x = 5, equivalente a la asignación de la variable x, el valor de 5.
* "+=", x +=5 - equivalente a x = x + 5
* "-=", x -=5 - equivalente a x = x - 5
* "*=", x *=5 - equivalente a x = x * 5
* "/=", x /=5 - equivalente a x = x / 5
* "%=", x %=5 - equivalente a x = x % 5
* "//=", x //5 - equivalente a x = x // 5


# Operandos de Identidad
* "is" y "is not", son operadores de identidad en Python. Estos son usados para checar si dos valores (o variables) estan presentes en la parte izquierda y la parte derecha de los operandos.
* "is" - Verdadero si los valores o variables estan presentes en la parte izquierda y derecha de los operandos.
* "is not" - Verdaderos si los valores o variables no estan presentes en ambas partes de los operandos.



## Enunciado del Ejercicio

### Objetivo: Explorar y comprender el uso del método .format() en Python para la interpolación de cadenas de texto (strings).

En este ejercicio, se utilizará una única plantilla de texto con espacios reservados ({}) para insertar de manera dinámica múltiples valores. A través del código, observarás cómo este método es capaz de procesar e imprimir automáticamente diferentes tipos de datos (números enteros, cadenas de texto y valores booleanos), además de manejar caracteres especiales como saltos de línea (\n) dentro de citas célebres. Finalmente, deberás resolver un pequeño reto práctico basado en lo aprendido.

Explicación del Código paso a paso
El script que has compartido es un excelente ejemplo de cómo Python maneja el formateo de texto de manera limpia y estructurada. Aquí tienes el desglose de lo que sucede en cada sección:

Definición de la plantilla: 
```python
formato = "{} {} {} {}"
```
Aquí se crea una variable llamada `formato` que contiene un *string* con cuatro llaves `{}`. Estas llaves actúan como "contenedores" vacíos. Al llamar al método `.format()` sobre esta variable, Python esperará recibir exactamente cuatro elementos para llenar esos espacios en orden de izquierda a derecha.

```python
print(formato.format(1,2,3,4))
print(formato.format("uno","dos","tres","cuatro"))
print(formato.format(True, False, False, True))
```

El método .format() es muy versátil; no importa si le pasas enteros (int), texto (str) o valores lógicos (bool). Internamente, Python convierte todos estos valores a cadenas de texto y los inserta en la plantilla.


### El manejo de errores (Línea comentada):

```python
#print(formato.format(1,2,3))
```

Esta línea está comentada por una buena razón: generaría un error. Como tu variable formato tiene cuatro llaves {}, requiere obligatoriamente al menos cuatro argumentos. Si le pasas solo tres, Python lanzará un IndexError: tuple index out of range.

### **Ejercicio: Calculadora de Índice de Masa Corporal (IMC)**

**Objetivo:** Crear un programa que solicite datos físicos al usuario, realice un cálculo matemático y clasifique el resultado utilizando una estructura condicional múltiple.

**Enunciado:**
Escribe un programa en Python que calcule el Índice de Masa Corporal (IMC) de una persona. El programa debe seguir las siguientes instrucciones:
1. Solicitar al usuario que ingrese su **estatura** (en metros) y su **peso** (en kilogramos), asegurándose de convertir estos valores a números con decimales (`float`).
2. Calcular la masa corporal utilizando la fórmula: $IMC = \frac{peso}{estatura^2}$
3. Imprimir el valor del IMC calculado.
4. Evaluar el IMC obtenido y mostrar un mensaje con su clasificación de acuerdo a las siguientes reglas:
  * Si es **menor a 18.5**: Imprimir "Y tu clasificación es peso insuficiente."
  * Si está **entre 18.5 y 24.9** (incluyéndolos): Imprimir "Y tu clasificación es peso normal."
  * Si es **mayor a 24.9 y hasta 26.9** (incluyéndolo): Imprimir "Y tu clasificación es sobrepeso grado I"
  * Para **cualquier otro caso** (mayor a 26.9): Imprimir "Ve con un nutriologo"

---

### **Explicación del Código (El poder del `elif`)**

El código utiliza una cadena de condicionales múltiples (`if` -> `elif` -> `else`). 

* **Exclusividad (Solo una respuesta):** Al usar `elif` (else if), le decimos a Python que todas estas condiciones son parte de **una sola pregunta**. En el momento en que encuentra una condición verdadera, ejecuta ese bloque y **salta automáticamente el resto**.
* **Evitar conflictos lógicos:** Si usáramos puros `if` separados, un mismo número podría cumplir varias condiciones a la vez (imprimiendo dos resultados). El `elif` garantiza que la condición actual solo se evalúe si la condición de arriba fue falsa.
* **El `else` final (La red de seguridad):** No necesita condición. Simplemente atrapa cualquier valor que no haya cumplido con ninguno de los límites anteriores (en este caso, por descarte matemático, cualquier IMC mayor a 26.9).


## Ejercicios de Introducción a Python

### 1. Imprime los meses del año en una línea nueva cada vez usando .format().
Aquí tienes los enunciados adaptados para el entorno de Python. Como vimos anteriormente, Python no tiene una instrucción do-while, por lo que los ejercicios han sido reescritos para emplear el ciclo while (y el patrón while True: con break para simular el comportamiento deseado).
### 2. Crear el código de un programa en Python que pregunte si el usuario quiere salir del ciclo utilizando un ciclo infinito while True: (simulando la lógica de "hacer y luego evaluar"). 

El programa debe pedir una entrada de texto (string) donde el usuario tiene solo dos opciones para contestar. Si el usuario contesta "SI", entonces debe salir del ciclo usando la instrucción break; si contesta "NO", entonces debe volver a imprimir la pregunta: "¿Quieres salir del ciclo? [SI/NO]". Ojo: la contestación debe evaluarse estrictamente en mayúsculas.

### 3. Hacer un programa interactivo que muestre un menú de opciones para ejecutar las operaciones aritméticas básicas: suma (+), resta (-), multiplicación (*), división (/) y residuo (%). 

Deberá usar un ciclo while True: para mantener el menú activo. El programa leerá un carácter ingresado por el usuario y, con base en esa opción, ejecutará la operación correspondiente.

Los dos operandos deberán ser preguntados al usuario, convertidos a enteros usando int() y guardados en dos variables llamadas numero1 y numero2.

El resultado de la operación debe ser guardado en una variable llamada total y debe ser impreso en la consola.

Una vez que termine la operación, inicialice las variables numero1, numero2 y total en cero. El ciclo permitirá al usuario hacer la siguiente operación hasta que presione "s" para salir, momento en el cual un break terminará el programa.

### 4. Crear un programa en Python que "simule" las operaciones básicas de un cajero automático: retiro y consulta de saldo.

El proceso debe simular la validación de una tarjeta. Si la tarjeta es inválida, terminar el proceso usando la instrucción break. De lo contrario, usar un ciclo while para pedir un PIN, validando que el ingreso sea de exactamente 4 dígitos. El único PIN correcto será "1234"; de lo contrario, imprimirá "PIN inválido" y volverá a pedirlo.

Una vez autenticado, se entrará a un menú principal usando otro ciclo while. Las opciones serán: Retiro, Consulta y Salir.

El saldo inicial de la cuenta será de 3450.00. En la opción de retiro, deberá validar si la cantidad solicitada es mayor al saldo; si es así, desplegará "Fondos insuficientes". De tener fondos suficientes, se restará del saldo y se mostrará el saldo remanente.

Para la consulta, solo deberá mostrar el saldo actual.

Si el usuario selecciona salir, se usará break para terminar la ejecución del cajero.

### 5. Hacer un programa que simule un juego al estilo "Temple Run". El corredor siempre avanza por una pista infinita. 

El jugador comienza con tiempo = 12 unidades. Utiliza un ciclo while cuya condición sea que el tiempo sea mayor a 0 (es decir, el juego continúa mientras haya vida).

En cada iteración (paso) del ciclo, el corredor se enfrentará aleatoriamente a modificadores (puedes usar el módulo random de Python).

Obstáculos (Castigos): Generar un valor aleatorio True o False. Si es True (obstáculo grave), se restarán 3 unidades de tiempo al corredor. Si es False (obstáculo leve), solo se restará 1 unidad.

Premios: Generar un valor aleatorio True o False. Si es True (premio grande), se sumarán 3 unidades de tiempo al corredor. Si es False (premio pequeño), solo se sumará 1 unidad.

El ciclo se repetirá y el corredor continuará jugando. Cuando el tiempo alcance 0 o un número negativo, el ciclo while concluirá y se deberá imprimir que el juego ha terminado.

### 6. ### **Ejercicio: Aventura Interactiva en Texto (Condicionales Anidados)**

**Objetivo:** Crear un mini-juego de aventura conversacional para practicar el uso de la función `input()`, la interpolación de texto (f-strings) y, sobre todo, el manejo de **condicionales anidados** (`if`, `elif`, `else`).

**Instrucciones:**
Escribe un programa en Python que guíe al usuario a través de una historia interactiva tomando decisiones. El programa debe seguir el siguiente flujo:

a. **El Inicio:** Imprime el mensaje: *"Entras a un cuarto oscuro con dos habitaciones. ¿En qué puertas entras 1 o 2?"* y guarda la respuesta del usuario.
b. **Camino de la Puerta 1:** Si el usuario elige "1":
  * Imprime que encuentra a un oso comiendo miel y ofrécele 3 opciones:
   1. Tomar la miel.
   2. Gritarle al oso.
   3. Asustarlo con una antorcha.
  * Si elige 1: *"El oso te come las manos, :( !"*
  * Si elige 2: *"El oso te come las piernas :S !"*
  * **(Caso por defecto)** Si teclea cualquier otra cosa, usa un *f-string* para imprimir que esa acción seguramente es la mejor y que el oso correrá.
c. **Camino de la Puerta 2:** Si el usuario elige "2":
  * Imprime que observa a una preciosa princesa y a una anciana vendiendo flores. Ofrécele 3 opciones:
   1. Le compras una flor a la anciana.
   2. Observas a la princesa con gran admiración!
   3. Le compras todas las flores a la anciana.
  * Si elige 1: *"No pasa nada..., sigues con tu vida y le das la flor a un ser querido... Buen trabajo!"*
  * Si elige 2: *"La princesa ni te voltea a ver. Pero tu te sientes feliz!"*
  * **(Caso por defecto)** Si elige cualquier otra cosa, imprime: *"La anciana en realidad es un hada madrina que te ayudará a conocer al amor de tu vida!"*
d. **El final indeciso:** Si al inicio no ingresa ni "1" ni "2", imprime: *"Eres una persona indecisa, sin duda!"*
