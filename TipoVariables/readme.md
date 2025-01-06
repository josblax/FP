# Funciones principales de un lenguaje de programación.

* 1\. **Comunicación con una computadora.** Usando instrucciones permite crear programas, funciones que cumplen un propósito específico.
* 2\. **Creación de Software.** El software cumple objetivos de solucionar problemas o satisfacer necesidades específicas en una área especpifica de aplicación.
* 3\. **Automatización.** Se usan en procesos repetitivos optimizando o substituyendo interacción humana, desde procesos sencillos, hasta muy complejos.
* 4\. **Resolución de problemas.** Usando algoritmos y estructuras de datos.
* 5\. **Interacción usuario-máquina.** Usando interfaces que permiten satisfacer necesidades de aquellos que lo usan.

[Información adicional Unidad de Apoyo de Aprendizaje UNAM](https://programas.cuaed.unam.mx/repositorio/moodle/pluginfile.php/1023/mod_resource/content/1/contenido/index.html)

___

# Palabra Reservada.

Son palabras usadas para escribir una gramática correcta que puede ser interpretada o compilada por la computadora para producir un resultado.

## Variables y Nombres de Variables

Los nombres de variables deben de reflejar el uso para el que es usado la variable, y para que posteriores programadores puedan comprender el código.


1. Los nombres de variables pueden ser de cualquier longitud
3. Los nombres son diferenciables en mayúsculas o minúsculas.
4. Se pueden separar las asignaciones en la misma línea mediante punto y coma.
5. Puedes usar guión bajo "_" como separador o iniciador de un nombre de una variable.
6. Todas las variables deben llevar un tipo de variable.

## No debes...

1. No iniciar el nombre con un número.
2. No usar caracteres especiales como #,!,%,$ etc...
3. No existen espacios en ningun punto del nombre de una variable.
4. No uses mayúsculas y minúsculas, asumiendo que es la misma variable.

___

# Estructuras de Salida

## Instrucción de salida cout

**cout:** Se utiliza para imprimir texto o valores de consola. Pertenece a la biblioteca "Estandar" (std) de entrada y salida (iostream) se usa en combinación con el operador de inserción (<<).

Ejemplo:

```cplusplus

// Como se imprime?

cout << "Mi nombre es : " << "Alumno" << endl;

```
___

# Tipos de Variable

Los tipos de variable se asocian a la identidad del valor de dicha variable a lo largo del problema estas identidades se dividen en cuatro tipos básicos: numérico, texto o alfabético, lógico, carácter
___

## Enteros. Representa un número entero, son valores simples, que representan un valor numérico.

--- 

### short. Variable entera corta.

> Limite: Rango -32,768 a 32,767.

Ejemplo: 

```cplusplus
short a = 100;
// Como se asignan valores desde consola?

```
---

### int. Variable entera normal.

> Limite: Rango -2,147,483,648 a 2,147,483,647.

Ejemplo:

```cplusplus
int b = 1000; 
```
---

### long. Variable entera larga.

> Limite: Rango -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807.

Ejemplo:

```cplusplus
long long d = 555688722;
```
---

### unsigned. Variable que solo registra números positivos.

> Limite: Rango de una variable int 0 a 4,294,967,295

Ejemplo:

```cplusplus
unsigned int e = 2000;
```
---
## Números fraccionarios/con decimales

### float. Variable decimal con precisión simple. 

> Limite: Rango de una variable float Aproximadamente 1.2E-38 a 3.4E+38
> Precisión: 6-7 digitos

Ejemplo:

```cplusplus
float f = 3.14f;
```
---

### double. Variable decimal con precisión doble.

> Limite: Rango de una variable float Aproximadamente 2.3E-308 a 1.7E+308
> Precisión 15-16 digitos

Ejemplo:

```cplusplus
double g = 3.1415926535;
```
---

### long double. Variable decimal con precisión extendida.

> Limite: Varía según el compilador, pero generalmente más grande que double.
> Precisión: 19-21 digitos

Ejemplo:

```cplusplus
long double h = 3.141592653589793238L;
```
> NOTA: Usa al final del número f o L para especificar el número que quieres manejar.

---

## bool. Variable booleana que puede tener solo dos valores {0,1} o {falso,verdadero}.

> Por que solo usa 1 o 0?

* Las variables booleanas en C++ solo usan 1 y 0 porque representan los dos estados posibles de un valor booleano: verdadero (true) y falso (false). En los sistemas de computación, estos valores se representan internamente como 1 para true y 0 para false debido a la simplicidad y eficiencia en la operación binaria.

* El uso de 1 y 0 tiene varias ventajas:

1. Simplicidad: Es fácil trabajar con valores binarios en el nivel más bajo de hardware.

2. Eficiencia: Las operaciones lógicas y de control se pueden realizar rápidamente utilizando estos dos valores.

3. Compatibilidad: La representación binaria es estándar en casi todos los sistemas de programación y hardware.

Ejemplo:

```cplusplus
bool llueve = true; // Esto internamente es 1
bool tiene_sombrilla = false; // Esto internamente es 0
```

### La función boolalpha en C++ 

Se utiliza para imprimir valores booleanos como true o false en lugar de 1 o 0. Esto puede ser útil para hacer que la salida de tu programa sea más legible y comprensible.

Ejemplo:

```cplusplus
bool soleado = true;
bool lloviendo = false;
// Imprimir sin boolalpha
cout << "Sin boolalpha:" << endl;
cout << "es soleado? : " << soleado << endl;
cout << "esta lloviendo? : " << lloviendo << endl;
// Imprimir con boolalpha
cout << boolalpha;
// Activa boolalpha
cout << "Con boolalpha:" << endl;
cout << "es soleado? : " << soleado << endl;
cout << "esta lloviendo?: " << lloviendo << endl;
```

---

## Textos y Caracteres

### string. Es una representación de cadenas de caracteres que proporciona muchas funcionalidades útiles para manipular cadenas.

En C++, puedes trabajar con cadenas de caracteres (strings) utilizando la clase std::string de la biblioteca estándar (Standard Template Library, STL)

> Limite: El límite máximo de una std::string depende de la memoria disponible en el sistema.

Ejemplo:

```cplusplus
string saludo = "Hola, mundo!";
cout << saludo << endl;

// Otro ejemplo
string nombre;
cout << "¿Cómo te llamas? ";
getline(cin, nombre);
cout << "Encantado de conocerte, " << nombre << "!" << endl;

```

---

### char. Variable que almacena un solo caracter.

> Limite: uede representar caracteres desde -128 a 127 o desde 0 a 255, dependiendo de si se considera signo o no.

Ejemplo:

```cplusplus
char letra = 'a';
char digito = '2';
char simbolo = '%';

```

---
