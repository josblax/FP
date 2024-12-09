# C# 

## Tipos de variable
Son básicamente los mismos tipos de variable que **C++**

Ejemplos:
```C#
int numero1 = 5; // Variable de tipo entero 
double numero2 = 3.14; // Variable de tipo doble 
char letra = 'A'; // Variable de tipo carácter 
bool esVerdad = true;
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

### Conversión de string a número

Puedes convertir un string a un número llamando al método Parse, que se encuentra en los tipos de variable numéricos (int, long, double, short, float, decimal, etc) o usando los métodos de la clase System.Convert. Es más eficiente usar el método Parse.

```C#
int edad;

```







