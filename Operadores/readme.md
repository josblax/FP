# Operadores

## Los operadores son de suma importancia en programación ya que permiten operaciones o acciones sobre datos, variables y valores.

### Los operadores aritméticos son importantes para realizar cálculos matemáticos básicos. Nos permiten procesamiento numérico, desde calculos que requieren resolver o contestar problemas o casos que en escencia requieren operaciones simples o complejos.

### Los operadores de comparaciones se utilizan para comparar valores. Estos nos regresaran un valor booleano, es decir, verdadero o falso.

### Los operadores lógicos nos ayudan a validar afirmaciones de nuestras proposiciones son verdaderas o falsas, o si necesito invertir el resultado de dichas afirmaciones.

### Las asignaciones de valores nos permiten asignar un valor a una variable en una cantidad específica, y en algunos casos modificar el valor mientras asignamos o reasignamos el valor.

## Evaluación de operadores lógicos y aritméticos, y precedencia

* La precedencia es la combinación de valores, variables, operadores y funciones que son expresiones que necesitan ser evaluadas y validas. Por ejemplo 5-7
* La mayor precedencia la tienen los parentesis, donde evaluará lo que se encuentre adentro antes que nada.
* La evaluación de los operadores aritméticos básicos (+,*,-,/) tienen una propiedad asociativa de izquierda a derecha.
*  La precedencia es la jerarquía con la que las expresiones son evaluadas, Por ejemplo 10-4*2, donde la multiplicación tiene una mayor prioridad que la suma.

## Numeros y matematicas


![Precedencia](https://github.com/josblax/FP/blob/main/imagenes/precedencia.png)

# Operadores Aritméticos

Los operadores aritméticos básicos en programación son fundamentales para realizar operaciones matemáticas. Aquí te los explico:

Suma (+): Adiciona dos números. Ejemplo: int suma = 5 + 3; // Resultado: 8

Resta (-): Resta un número de otro. Ejemplo: int resta = 5 - 3; // Resultado: 2

Multiplicación ()*: Multiplica dos números. Ejemplo: int multiplicacion = 5 * 3; // Resultado: 15

División (/): Divide un número entre otro. Ejemplo: int division = 6 / 3; // Resultado: 2

Módulo (%): Devuelve el residuo de una división. Ejemplo: int modulo = 5 % 3; // Resultado: 2

## Ejercicios

```C++
// Operaciones Aritméticas

// Enteros
int a = 10;
int b = 20;
int c;

//Flotantes
flotador x = 15,5;
flotación y = 5,2;
flotador z;

// 1.Adición
c = a + b; // 30
z = x + y; // 20.7

//2. Sustracción
c = a - b; // -10
z = x - y; // 10.3

//3. Multiplicación
c = a * b; // 200
z = x * y; // 80.6

//4. División
c = b / a; // 2
z = x / y; // 2.98077

//5. Módulo (resto de la división)
c = b % a; // 0

//6. Operaciones mixtas
z = a + x; // 25.5
z = b - y; // 14.8
z = a * y; // 52.0
z = b / x; // 1.29032
z = (a + b) * x / y; // 86.5385

//7. Más ejemplos con flotadores
z = x + 10,3; // 25.8
z = y * 2,5; // 13.0
z = x / 2,0; // 7.75
z = y - 3,2; // 2.0

//8. Combinación de números enteros y flotantes
z = a + x - b / 2,0 + y * 1,5; // 23.8

//9. Combinaciones más complejas
z = (a + x) * (b - y) / (a * y); // 1.12308

//10. Operaciones aritméticas de tipo mixto
doble d = 7,4;
z = a + d; // 17.4
z = b - d; // 12.6
z = d * y; // 38.48
z = d / x; // 0.477419

//11. Números negativos
int negInt = -25;
float negFloat = -12.3;

c = a + negInt; // -15
c = b + negFloat; // 7.7
z = negFloat - y; // -17.5
z = negInt * b; // -500

//12. Incremento y decremento
A++; // 11
b--; // 19
x += 2,5; // 18.0
y -= 1,2; // 4.0

```

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

# Operadores comparativos

* Son usados para comparar valores. Y solo regresan un valor de verdadero o falso. De acuerdo a la expresión evaluada.

* ">" Mayor a - Verdadero si el operando izquierdo es mayor al derecho, x >  y.

* "<" Menor a - Verdadero si el operando izquierdo es menor al de la derecha, x < y.

* "==" Igual a - Verdadero si ambos operandos son iguales, x==y.

* "!=" Diferente a - Verdadero si ambos operadores son diferentes, x!= y.

*  ">=" Mayor o igual - Verdadero si el operando izquierdo es mayor o igual al derecho, x >= y.

* "<=" Menor o igual - Verdadero si el operando izquierdo es menor o igual al derecho, x <= y.

# Los operadores lógicos

* Los operadores lógicos son operaciones usadas con valores y variables. Y siempre regresan como resultado Verdadero ó Falso.

* "and", "Y" lógico - Verdadero si ambos operadores son verdaderos, x and y.

* "or", "O" lógico - Verdadero si alguno o ambos operadores son verdaderos, x or y.

* "not", "NO" lógico - Verdadero si el operando es Falso, not(x).
