# C# 

## Tipos de variable
Son básicamente los mismos tipos de variable que **C++**

### Ejemplos de tipos de variable primitivas:
```C#
// Enteros
int numero1 = 5; // Variable de tipo entero
Console.WriteLine(numero1); 
// Double, Float, Decimal
double numero2 = 3.14; // Variable de tipo doble
Console.WriteLine(numero1);
// char
char letra = 'A'; // Variable de tipo carácter
Console.WriteLine(letra);
// bool
bool esVerdad = true;
Console.WriteLine(esVerdad);
//long
long numeroGrande = 9223372036854775807; // Máximo valor de long
Console.WriteLine(numeroGrande);
// short
short numeroPequeno = 32767; // Máximo valor de short
Console.WriteLine(numeroPequeno);
//byte
byte numeroByte = 255; // Máximo valor de byte
Console.WriteLine(numeroByte);

```

### Ejemplo de tipo de variable string
```C#
string texto = "Hola, mundo!"; // Variable de tipo cadena de caracteres
```
### Ejemplo de variables tipo comodin
```C#
var numero = 10;               // C# inferirá que es un int
var texto = "Hola";            // C# inferirá que es un string
```


### Ejemplo de declaración de constantes
```C#
const int velocidadLuz = 300_000;     // Variable constante, no se puede cambiar
```
___

## Estructuras de salida.

Método: Console.WriteLine

Namespace: System

**Salida**, escribe los datos especificados, seguido de un retorno, a la salida estándar del lenguaje. La variante es Console.Write si no se quiere el retorno.

Formatos: Console.WriteLine(string). 
```C#
//Ejemplos:
Console.WriteLine(“Esto es un string”);
Console.WriteLine(“Hola Mundo”);
```

Formatos: Console.WriteLine(string+object). 
```C#
int numero = 5;
Console.WriteLine("Tu numero es : "+numero);
```
___

## Estructuras de entrada.

Método: Console.ReadLine

Namespace: System

Formatos:
```C#
Console.WriteLine(string). 
//Ejemplos:
Console.WriteLine(“Esto es un string”);
Console.WriteLine(“Hola Mundo”);
```
___

### Conversión de string a número

Puedes convertir un string a un número llamando al método Parse, que se encuentra en los tipos de variable numéricos (int, long, double, short, float, decimal, etc) o usando los métodos de la clase System.Convert. Es más eficiente usar el método Parse.

```C#
int edad;
Console.Write("Ingresa tu edad : ");
edad = int.Parse(Console.ReadLine());
Console.WriteLine();
Console.WriteLine("Tu edad es : "+edad);
```

___

## Operaciones aritméticas Sqrt, Pow

La operación raíz cuadrada, usa el formato Math.Sqrt(). Esta operación produce como resultado la raíz cuadrada de un número especifico.

Formatos:
Math.Sqrt(numero).
Ejemplos:
```C#
double num = 2;
num = Math.Sqrt(num);
Console.WriteLine(num);
```
Formatos:
Math.Pow(numero,potencia).
```C#
double num = 2;
num = Math.Pow(num,2);
Console.WriteLine(num);
```
___

## Ciclo while
Se usa cuando se necesita ejecutar un bloque de instrucciones por un número específico de veces. Hasta que se cumpla una condición.


```C#
while (condición)
{
  instrucción1;
  instrucción2;
}
```
___

## Ciclo do..while

Se usa cuando se necesita ejecutar un bloque de instrucciones por un número específico de veces. Hasta que se cumpla una condición.
A diferencia del while, este código se ejecuta al menos una vez.

```C#
do
{
  instrucción1;
  instrucción2;
} while (condición);
```
___

## Clase Random

Método: Random
Namespace: System

Representa un generador de números aleatorios, que es un algoritmo que produce una secuencia de números que cumplen ciertos requerimientos estadísticos de aleatoriedad.

```C#

var rand = new Random();
Console.WriteLine("Random.Next : "+rand.Next());
Console.WriteLine("Random.Next rango : "+rand.Next(0,2));
Console.WriteLine("Random.Next double : "+rand.NextDouble());
```
___
## Declaración, inicialización e impresión de arreglos de 1 dimensión

Formato:
```C#
//<tipo_variable>[] nombre_arreglo = new  <tipo_variable>[# de elementos]
//Ejemplo:
int[] naturales = new naturales[10]{ 0 ,1, 2, 3, 4, 5, 6, 7, 8, 9 };
// declaración sin inicializar el numero de elementos
int[] numeros = { 1, 2, 3, 4, 5 }; // Declaración e inicialización de un arreglo de enteros
string[] nombres = { "Ana", "Luis", "Carlos" }; // Declaración e inicialización de un arreglo de strings
// imprimir arreglos
for (int i=0; i <=9; i++)
{
   Console.Write(naturales[i]+" ,");
}
Console.WriteLine();
// formato de impresión con foreach
foreach (var elemento in naturales)
{
   Console.Write(elemento+" ,");
}
```
___
## Declaración, inicialización e impresión de arreglos de 2 dimensiones

Formato:
```C#
//<tipo_variable>[,] nombre_arreglo = new  <tipo_variable>[# de renglones][# de columnas]
//Ejemplo:
int[,] matriz = new int[2,2]{{1,2},{3,4}}; // Declaración e inicialización de un arreglo bidimensional

for (int i=0; i<=1; i++)
{
   for (int j=0; j<=1; j++)
    {
       Console.Write(matriz[i,j]+" ,");
    }
    Console.WriteLine();
}

// Acceder a los elementos del arreglo bidimensional
Console.WriteLine(matriz[1, 1]); // Imprime: 4
Console.WriteLine(tablero[0, 1]); // Imprime: 3

