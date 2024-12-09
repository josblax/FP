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

### Conversión de string a número

Puedes convertir un string a un número llamando al método Parse, que se encuentra en los tipos de variable numéricos (int, long, double, short, float, decimal, etc) o usando los métodos de la clase System.Convert. Es más eficiente usar el método Parse.

```C#
int edad;
Console.Write("Ingresa tu edad : ");
edad = int.Parse(Console.ReadLine());
Console.WriteLine();
Console.WriteLine("Tu edad es : "+edad);
```







