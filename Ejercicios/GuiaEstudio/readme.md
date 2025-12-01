# 100 Ejercicios de Programación en C++: Fundamentos

## PARTE II: Fundamentos de Programación

### Salida y Estructura Básica
1. **Hola Mundo:** Escribe un programa que incluya las librerías necesarias (`iostream`) y la función `main` para imprimir "Hola Mundo" usando `cout`.
2. **Palabras Reservadas:** Escribe un comentario de bloque en tu código listando 5 palabras reservadas de C++ y explica brevemente por qué no pueden usarse como nombres de variables.
3. **Salto de Línea:** Imprime tu nombre en una línea y tu apellido en la siguiente usando una sola instrucción `cout` y el carácter de escape `\n`.
4. **Endl:** Imprime tres nombres de frutas diferentes en líneas separadas utilizando `std::endl` para generar los saltos.
5. **Formato ASCII:** Imprime una letra "V" grande hecha con asteriscos `*` usando múltiples instrucciones `cout` para dibujar la forma.

### Variables Enteras (Signed/Unsigned)
6. **Declaración Básica:** Declara una variable de tipo `int` llamada `edad` con valor 20 e imprímela en consola.
7. **Asignación por Consola:** Declara una variable `int`, pide al usuario que ingrese un valor usando `cin` e imprime el doble de ese valor.
8. **Short:** Declara una variable `short` con el valor 32000. Súmale 1000 e imprime el resultado. ¿Qué sucede (overflow)?
9. **Long Long:** Calcula el factorial de 15. Declara la variable resultado como `long long` para almacenar el valor correctamente e imprímelo.
10. **Unsigned:** Declara una variable `unsigned int` con valor 0. Réstale 1 e imprime el resultado para demostrar qué pasa con los números sin signo al volverse negativos.
11. **Sizeof:** Crea un programa que imprima el tamaño en bytes (`sizeof`) de un `short`, un `int` y un `long long` en tu arquitectura.
12. **Suma de Enteros:** Pide dos números enteros al usuario, guárdalos en variables, realiza la suma e imprime el resultado.
13. **Intercambio (Swap):** Declara `a=5` y `b=10`. Intercambia sus valores usando una variable temporal (auxiliar) e imprime los nuevos valores.
14. **Constantes:** Declara una constante `const int` para el número de meses del año (12) e intenta modificarla en la siguiente línea. Comenta el error que genera el compilador.
15. **Inicialización:** Declara tres variables enteras en una sola línea (`int a, b, c;`), asignándoles valor solo a la primera y última. Imprime las tres para observar el valor "basura" de la variable no inicializada.

### Fraccionarios (Float/Double)
16. **Float vs Double:** Declara un `float` y un `double`. Asigna el valor `3.14159265359` a ambos. Imprime ambos con alta precisión (`setprecision`) para ver dónde pierde precisión el float.
17. **Entrada Decimal:** Pide al usuario su estatura en metros (ej. 1.75), guárdala en un `double` e imprímela con un mensaje.
18. **Casteo Explícito:** Declara un `double` con valor 9.99. Conviértelo explícitamente a `int` usando `(int)` o `static_cast` e imprime el resultado para mostrar el truncamiento.
19. **Notación Científica:** Asigna el valor $1.5 \times 10^6$ a una variable `double` usando notación científica en código (`1.5e6`) e imprímelo.
20. **Precisión:** Usa `cout.precision()` y `fixed` para imprimir el resultado de la división `10.0/3.0` mostrando exactamente 2 decimales.
21. **División Entera vs Real:** Imprime el resultado de `5/2` y luego el de `5.0/2.0`. Explica en un comentario la diferencia en los resultados.
22. **Promedio:** Pide 3 calificaciones (pueden tener decimales), guárdalas en variables tipo `float` y calcula el promedio.

### Booleanos
23. **Declaración Bool:** Declara una variable `bool` llamada `esEstudiante` con valor `true` e imprímela directamente (debería salir 1).
24. **Boolalpha:** Usa `std::boolalpha` antes de imprimir la misma variable del ejercicio anterior, de modo que la salida en consola sea "true" en lugar de "1".
25. **Lógica Simple:** Asigna a una variable booleana el resultado de la comparación `5 > 10`. Imprime el valor resultante.
26. **Toggle (Inversión):** Declara un booleano en `false`. Asígnale su propio valor negado (`variable = !variable`) e imprímelo.
27. **Entrada Lógica:** Pide al usuario que ingrese 0 o 1 para un booleano. Imprime "Encendido" si es true o "Apagado" si es false.

### Textos y Caracteres
28. **Char:** Declara una variable `char` con la letra 'A'. Imprime su valor numérico ASCII haciendo un cast a `int`.
29. **String Básico:** Declara un `string` con tu nombre completo y otro con tu saludo favorito. Concaténalos con un espacio en medio e imprímelos.
30. **Entrada getline:** Usa `cin >>` para leer una palabra. Luego limpia el buffer y usa `getline(cin, variable)` para leer una frase completa con espacios. Comenta la diferencia.
31. **Acceso a Char:** Declara el string "Hola". Imprime solamente la letra 'o' accediendo por su índice (`str[1]`).
32. **String a Entero (stoi):** Declara un string `s = "1234"`. Usa `stoi` para convertirlo a entero, súmale 6 e imprime el resultado.
33. **String a Double (stod):** Declara un string `pre = "19.99"`. Conviértelo a double, calcula el IVA (16%) e imprime el total.
34. **Longitud:** Pide una palabra al usuario e imprime cuántas letras tiene usando el método `.length()` o `.size()`.
35. **Concatenación Mixta:** Intenta sumar un string "Numero: " con un entero 5 usando el operador `+`. Corrige el código convirtiendo el entero a string usando `to_string()`.

### Contenedores (Arreglos y Vectores)
36. **Arreglo Estático:** Declara un arreglo de enteros de tamaño 5 (`int arr[5]`). Llénalo manualmente con los valores 10, 20, 30, 40, 50.
37. **Lectura de Arreglo:** Crea un arreglo de 3 `floats`. Pide al usuario que ingrese los valores uno por uno.
38. **Clase Array:** Usa la librería `<array>` para declarar un `std::array<int, 4>`, inicialízalo con valores e imprime el primer elemento.
39. **Vector Básico:** Incluye `<vector>`. Declara un `vector<int>` vacío. Usa `push_back` para agregar los números 5 y 10.
40. **Iteradores:** Crea un vector con 5 números. Usa un iterador (`vector<int>::iterator`) en un ciclo for para recorrer e imprimir los valores.
41. **Modificadores (Pop):** Del vector anterior, usa `pop_back` para eliminar el último elemento e imprime el nuevo tamaño (`.size()`).
42. **Acceso Seguro:** Intenta acceder a la posición 10 de un vector de tamaño 3 usando `.at(10)` y captura/observa la excepción (o explica qué pasa vs usar `[]`).
43. **Suma Vector:** Crea un vector, llénalo con los números del 1 al 10 y calcula la suma total de sus elementos acumulando en una variable.
44. **Copia de Vectores:** Copia el contenido de un vector A a un vector B (`vector<int> B = A;`). Modifica B y demuestra que A no cambia.
45. **Arreglo de Strings:** Crea un arreglo que contenga los nombres de 3 colores. Imprime el color almacenado en el índice 1.

### Clases y Objetos
46. **Struct Simple:** Define una estructura `struct Punto` con miembros `x` e `y` (enteros). Crea una instancia, asigna valores e imprímelos.
47. **Clase Básica:** Crea una clase `Coche` con atributos públicos `marca` y `modelo`. Instancia un objeto y asigna valores directamente.
48. **Encapsulación (Private):** Modifica la clase `Coche` para que los atributos sean `private`. Intenta acceder a ellos desde el main y verifica que da error.
49. **Getters y Setters:** Agrega métodos públicos `setMarca` y `getMarca` a la clase anterior para acceder a los datos privados correctamente.
50. **Constructor:** Agrega un constructor a la clase `Coche` que reciba marca y modelo como parámetros al momento de crear el objeto.
51. **Métodos de Clase:** Agrega un método `void arrancar()` a la clase que imprima "El auto [marca] está arrancando".
52. **Herencia Básica:** Crea una clase `Vehiculo` (padre) y una clase `Moto` (hija) que herede de `Vehiculo`.
53. **Acceso Heredado:** Agrega un atributo `velocidad` en `Vehiculo` y demuestra que un objeto de tipo `Moto` puede acceder a él (asegura que sea `public` o `protected`).
54. **Polimorfismo (Intro):** Crea un método `hacerRuido` en `Vehiculo` (virtual) y sobreescríbelo en `Moto`.
55. **Struct vs Class:** Escribe un ejemplo breve donde demuestres que los miembros de un `struct` son públicos por defecto y los de una `class` son privados por defecto.

## PARTE III: Operadores

### Asignación y Comparación
56. **Asignación Compuesta:** Declara `x = 10`. Usa `+=` para sumarle 5, `*=` para multiplicarlo por 2. Imprime el resultado final.
57. **Mayor Que:** Pide dos edades al usuario. Imprime `true` (o 1) si la primera edad es mayor que la segunda.
58. **Igualdad:** Pide una clave numérica al usuario. Compara si es igual a `1234` usando el operador `==`.
59. **Diferente:** Escribe un programa que pida un número y diga "Diferente de cero" si el número ingresado es `!= 0`.
60. **Rangos:** Verifica si un número `x` es mayor o igual a 18 (`x >= 18`) para determinar mayoría de edad.

### Lógicos
61. **AND:** Pide un número. Verifica si es mayor que 10 **Y** menor que 20 (`x > 10 && x < 20`).
62. **OR:** Verifica si un carácter ingresado es 's' **O** 'S' (`c == 's' || c == 'S'`).
63. **NOT:** Usa el operador `!` para invertir el valor de verdad de una comparación (ej. `!(x == 0)`).
64. **Lógica Compleja:** Evalúa si un año es bisiesto. (Divisible entre 4 AND (NO divisible entre 100 OR divisible entre 400)).
65. **Cortocircuito:** Escribe una expresión `if (A && B)` donde A sea falso. Coloca un `cout` dentro de una función que represente B para demostrar que B nunca se ejecuta.

### Aritméticos
66. **Calculadora Básica:** Pide dos números y muestra su suma, resta, multiplicación y división en líneas separadas.
67. **Módulo (Residuo):** Pide un número y determina si es par o impar usando el operador `%` (residuo de la división entre 2).
68. **Orden de Operaciones:** Calcula `5 + 10 * 2` y `(5 + 10) * 2`. Imprime ambos y explica la diferencia.
69. **Incremento:** Muestra la diferencia entre `x++` (post-incremento) y `++x` (pre-incremento) imprimiendo el valor dentro de la misma instrucción de salida.
70. **Fórmula:** Programa la fórmula de conversión de grados Fahrenheit a Celsius: $C = (F - 32) \times 5/9$.

## PARTE IV: Instrucciones de Decisión

71. **If Simple:** Pide una calificación. Si es mayor o igual a 60, imprime "Aprobado".
72. **If-Else:** Pide un número. Si es positivo (>0) imprime "Positivo", si no, imprime "No positivo".
73. **If Anidado:** Pide la edad. Si es mayor de 18, pregunta (dentro del if) si tiene identificación. Si tiene ambas, imprime "Puede entrar".
74. **Else If:** Pide un número del 1 al 10. Clasifícalo como "Bajo" (1-3), "Medio" (4-6), o "Alto" (7-10) usando `else if`.
75. **Switch (Enteros):** Crea un menú simple (1. Saludar, 2. Despedirse, 3. Salir) usando `switch`.
76. **Switch (Char):** Pide una calificación por letra (A, B, C). Usa `switch` para imprimir el mensaje correspondiente ("Excelente", "Bien", "Regular").
77. **Switch Default:** Agrega un caso `default` al ejercicio anterior para manejar letras inválidas.
78. **Operador Ternario:** Reescribe un `if-else` que asigne el mayor de dos números a una variable usando el operador `? :`.
79. **Validación de División:** Usa un `if` para verificar que el denominador de una división no sea cero antes de realizar la operación.
80. **Switch Fall-through:** (Avanzado) Escribe un switch sin `break` en un caso para mostrar cómo la ejecución pasa al siguiente caso automáticamente.

## PARTE V: Instrucciones Cíclicas

81. **For Simple:** Imprime los números del 1 al 100 en la consola.
82. **For Decremental:** Imprime una cuenta regresiva del 10 al 0.
83. **For con Salto:** Imprime los números pares del 0 al 20 (incrementando el contador de 2 en 2).
84. **While:** Pide números al usuario y súmalos en una variable acumuladora. El ciclo termina cuando el usuario ingresa 0.
85. **Do-While:** Crea un menú que se repita al menos una vez y termine solo si el usuario elige la opción "Salir".
86. **Acumulador:** Usa un ciclo `for` para calcular la suma de los primeros `N` números naturales (donde N lo da el usuario).
87. **Factorial:** Calcula el factorial de un número dado usando un ciclo `while`.
88. **Break:** Busca un número específico en un ciclo del 1 al 100. Si lo encuentras, usa `break` para detener el ciclo inmediatamente.
89. **Continue:** Imprime los números del 1 al 10, pero usa `continue` para saltarte la impresión del número 5.
90. **Ciclos Anidados:** Imprime las tablas de multiplicar del 1 al 10 usando dos ciclos `for` anidados.

## PARTE VII: Estructuras de Datos y Random (Adaptado a C++)

91. **Random (rand):** Genera y muestra un número aleatorio entre 0 y 100 usando `rand()` y la semilla `srand(time(NULL))`.
92. **Adivina el número:** Crea un juego donde la computadora "piensa" un número (random) y el usuario trata de adivinarlo en un ciclo `do-while`, recibiendo pistas de "más alto" o "más bajo".
93. **Llenar Arreglo Random:** Declara un arreglo de 10 enteros y llénalo automáticamente con números aleatorios entre 1 y 50 usando un ciclo.
94. **Arreglo 2D (Matriz):** Declara una matriz de 3x3 enteros. Inicialízala manualmente con valores del 1 al 9 e imprímela en formato de cuadrícula.
95. **Llenado Matriz:** Usa dos ciclos anidados para llenar una matriz de 5x5 con el valor 1 en todas las celdas.
96. **Diagonal Principal:** Dada una matriz cuadrada de 4x4 llena de números aleatorios, imprime solo los elementos de la diagonal principal.
97. **Suma de Matrices:** Declara dos matrices de 2x2. Súmalas elemento a elemento y guarda el resultado en una tercera matriz.
98. **Búsqueda Lineal:** Genera un arreglo de 100 números aleatorios. Pide al usuario un número y recorre el arreglo para ver si existe.
99. **Matriz Identidad:** Genera por código una matriz identidad de 4x4 (1s en la diagonal principal, 0s en el resto).
100. **Ordenamiento Burbuja (Intro):** Crea un arreglo desordenado de 5 números y usa dos ciclos anidados para ordenarlo de menor a mayor e imprimir el resultado final.
