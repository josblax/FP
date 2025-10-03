### `if...else` en Programación

La instrucción `if...else` es una estructura de control de flujo fundamental que permite a tu programa tomar decisiones. Su función es evaluar una condición y, basándose en si es verdadera o falsa, ejecutar diferentes bloques de código.

**¿Cómo funciona?**

  * **`if (condición)`**: El programa evalúa la **condición** que está entre paréntesis.
  * Si la condición resulta ser **verdadera**, se ejecuta el código dentro del bloque `if`.
  * Si la condición es **falsa**, el programa ignora el bloque `if` y ejecuta el código que está en el bloque `else`.

El uso de `else` es opcional. Si la condición es falsa y no hay un bloque `else`, el programa simplemente continúa con la siguiente instrucción.

```c++
// Ejemplo básico de if...else
if (condicion) {
    // Se ejecuta si la condición es verdadera
} else {
    // Se ejecuta si la condición es falsa
}
```

-----

### Diferencias entre Java, C\# y C++

La sintaxis del `if...else` es casi idéntica en los tres lenguajes, por lo que si entiendes uno, entiendes los demás. La principal diferencia radica en cómo manejan las condiciones.

  * **Sintaxis**: La forma de escribir `if (condición) { ... } else { ... }` es universal en estos lenguajes.
  * **Condiciones booleanas**:
      * En **Java** y **C\#**, las condiciones dentro del `if` deben ser obligatoriamente de tipo `boolean` (solo `true` o `false`). No puedes usar números enteros o cualquier otro tipo de dato.
      * En **C++**, aunque no es una buena práctica, es posible usar cualquier valor numérico. Un `0` se considera **falso**, mientras que cualquier número diferente de `0` se evalúa como **verdadero**.

**Ejemplos de diferencias:**

| Lenguaje | Ejemplo Válido | Ejemplo NO Válido |
| :--- | :--- | :--- |
| **Java / C\#** | `if (x > 5)` | `if (1)` |
| **C++** | `if (x > 5)` | `if (1)` (Es válido, pero se prefiere el uso de booleanos) |

En resumen, la lógica del `if...else` es la misma en Java, C\# y C++, pero Java y C\# son más estrictos y solo aceptan valores `booleanos` para las condiciones.

---

| Tipo de Condicional | Pseudocódigo (Original) | Implementación en Código (C++) | Descripción |
| :--- | :--- | :--- | :--- |
| **Simple (`if`)** | `Si expresion_logica Entonces` <br> `acciones por verdadero` <br> `Fin Si` | `if (expresionLogica) {` <br> `   // acciones si es verdadero ` <br> `}` | Ejecuta un bloque de código **solo si la condición es verdadera**. Si es falsa, el programa simplemente continúa. |
| **Doble (`if...else`)** | `Si expresion_logica Entonces` <br> `acciones por verdadero` <br> `SiNo` <br> `acciones por falso` <br> `Fin Si` | `if (expresionLogica) {` <br> `   // acciones si es verdadero ` <br> `} else {` <br> `   // acciones si es falso ` <br> `}` | Ofrece una bifurcación. Si la condición es **verdadera**, se ejecuta el primer bloque; de lo contrario, se ejecuta el bloque `else`. |
| **Múltiple (`if...else if`)** | `Si expresion_logica1 Entonces` <br> `acciones_por_verdadero1` <br> `SiNo Si expresion_logica2 Entonces` <br> `acciones_por_verdadero2` <br> `SiNo` <br> `acciones por falso` <br> `Fin Si` | `if (condicion1) {` <br> `   // acciones 1 ` <br> `} else if (condicion2) {` <br> `   // acciones 2 ` <br> `} else {` <br> `   // acciones por defecto ` <br> `}` | Evalúa **múltiples condiciones en secuencia**. El primer bloque cuya condición sea verdadera se ejecuta, y el resto se ignora. El bloque `else` final es opcional. |
| **Múltiples Casos (`switch`)** | `Segun variable Hacer` <br> `opcion_1: ...` <br> `opcion_2: ...` <br> `De otro modo: ...` <br> `Fin Segun` | `switch (variable) {` <br> `   case valor1: ` <br> `     // acciones ` <br> `     break; ` <br> `   case valor2: ` <br> `     // acciones ` <br> `     break; ` <br> `   default: ` <br> `     // acciones por defecto ` <br> `}` | Usado para **comparar una variable con múltiples valores fijos**. Es una alternativa más limpia al `if...else if` cuando se trata de una serie de valores específicos. |

___

### Ejercicios if - else

1.	Encontrar si un número es par o impar.
2.	Encontrar el mayor de dos números, solicita los dos números de tipo int.

Comun a todos los ejercicios:

```Java

Scanner scanner = new Scanner(System.in);

```


```Java

int n1, n2;
System.out.println("n1 : ");
n1 = scanner.nextInt();
System.out.println("");
System.out.println("n2 : ");
n2 = scanner.nextInt();
cout << endl;
if (n1 > n2) 
{
    System.out.println("n1 : " + n1);
}
else 
{
    System.out.println("n2 : " + n2);
}
```

___ 


2.	Solicitar la edad de la persona y si esta es mayor de edad, escribir en pantalla “Mayor de edad” de lo contrario “Menor de edad”

```Java
int edad;
System.out.println("Dame tu edad : ");
edad = scanner.nextInt();
System.out.println("");
if (edad >= 18) 
{
   System.out.println("mayor de edad ");
}
else 
{
    System.out.println("menor de edad ");
}
```

___


3.	Solicitar la temperatura si esta es menor a 10 grados, escribir en pantalla “hace mucho frío”, si la temperatura es entre mayor a 10 grados y menor a 17 grados, escribir en pantalla “hace frío” y por último si es mayor a 17 grados, escribir en pantalla “el clima es templado”.

```Java
 int temp;
 System.out.println("temperatura : ");
 temp = scanner.nextDouble();
 cout << endl;
 if (temp < 10) 
 {
     System.out.println("Hace mucho frio ");
 }
 if (temp >= 10 && temp <= 17) 
 {
     System.out.println("frio ");;
 }
 if (temp > 17) 
 {
     System.out.println("Templado");
 }
```
___

4.	Preguntar si al usuario si está a favor de la paz, guardar en una variable tipo char llamada voto, validar si el voto es ‘S’ o el voto es ‘N’ escribir en pantalla “voto valido” en caso de que sea cualquier otro carácter escribir, “voto invalido”

```Java
char voto = ' ';
System.out.println("A favor s/n : ");
voto = input.charAt(0);
cout << endl;
if (voto == 's' || voto == 'n' || voto == 'S' ||  voto == 'N')
{
    System.out.println("Voto valido ");
}
else 
{
    System.out.println("Voto invalido ");
}
```
___ 

5.	Preguntar al usuario cuantas horas ha trabajado el empleado durante la semana, si, el empleado trabajo más de 40 horas, el excedente de horas se multiplicará por 75 pesos y publicar este cálculo en pantalla que será el bono del empleado.

```Java
int horasTrabajadas = 0;
System.out.println("Horas trabajadas : ");
horasTrabajadas = scanner.nextInt();
System.out.println("");
int horasBono = horasTrabajadas - 40;
if (horasBono > 0) 
{
    horasBono = horasBono * 75;
    System.out.println("Bono : "+horasBono);
}
```
___

## Ejercicios

7.	Crear dos variables de tipo int, que guarden el día y mes, del cumpleaños del usuario. Si la fecha corresponde a mes 9 y día 15, escribir en pantalla, “Feliz cumpleaños”
8.	Crear una variable que se llame velocidad, pregunta por este valor, si esta es negativa, escribir en pantalla “velocidad negativa”, si la velocidad es cero, escribir en pantalla “en reposo”, y si es positiva escribir en pantalla “velocidad positiva”.
9.	Crear las siguientes variables de tipo int: huevos, mantequilla, leche, harina, levadura, azucar y sal. Asigna valores aleatorios a cada variable, entre 1 y 5. Si todos los ingredientes tienen al menos un elemento, escribir en pantalla “Puedes crear hot cakes” de lo contrario escribir en pantalla “No hay suficientes ingredientes”
10.	Crear un programa en C++ que determine cuantos hot cakes se pueden hacer basado en la pregunta anterior. 
