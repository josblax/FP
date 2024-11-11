# Definición de un ciclo finito

* Se usa cuando se necesita ejecutar un bloque de código por un número finito de veces.
* Es una estructura de control que permite ejecutar el código a través de un contador de forma que este, se incrementa o decrementa, es decir sumando o restando.


![image](https://github.com/user-attachments/assets/c945429b-d591-4956-9917-7ded4c096263)


## Ejemplo:

Imprimir números naturales: 

Ejercicio uno. Se le pide crear una secuencia de los números naturales de 0 a 9, esto a través de una instrucción “for”.

Requerimientos:
* Un contador que pueda incrementar los números de {0 a 9}
* Un limite para saber que hemos llegado a 9 y detener el ciclo.
* Imprimir el contador con la instrucción cout

Que necesito?
* Una variable que me sirva para incrementar los números naturales, desde cero hasta 9. En este caso será un número entero que llamaremos “contador”.
* Una variable o una constante que valide a través de una comparación lógica que hemos alcanzado nuestra meta.
* En cada interacción, es decir,  en cada incremento de una unidad; imprimir el contador.

![image](https://github.com/user-attachments/assets/ba600b99-ea73-4cff-ac71-3de460ed57a9)


¿Que está pasando? paso a paso.
* Cuando se declara una instrucción “for”, su primer parámetro es declarar a nuestra variable que en este caso se llama “contador” e inicia en cero.
* Inmediatamente válida si el contador, satisface la condición lógica, en este caso pregunta si el contador es menor o igual a cero. La primera vez es verdadero (true). Ya que cero es menor o igual a nueve. NOTA, el nueve viene de la declaración de la variable limite que se inicializa en 9.
* Ejecutará todas las instrucciones entre las llaves que en este caso imprimirá cero. Que es la instrucción Console.Write(“ “+contador+”, “);
* Incrementa el contador++ y este cambiará de cero a uno, ya que:
	contador = contador + 1.
* Todas las instrucciones fuera del “for” se ejecutarán una sola vez.

Ejercicios:

1. Generar el código necesario en C++ para contar los números naturales de manera regresiva de nueve a cero. Tip : en lugar de sumar ++, necesitas restar --
2. Generar el código necesario en C++ para contar los números de cero a 99. Tip : Necesitas inicializar el contador en uno y cambiar el limite a 99.
3. Generar el código necesario en C++ para contar los números del uno al cien pero solo imprimir los números pares. Tip : usa un “if” y usa la operación residuo “%” para determinar que sea número par, y si es par, entonces imprime el número. Tip : revisa la solución del examen o las clases, cuando un número era múltiplo de 3 o de 2.
4. Generar el código necesario en C++ solicitando el rango uno mínimo y uno máximo para generar la impresión de los números de manera secuencial de uno en uno, si ingresa 1 como mínimo y 10 como máximo, deberá imprimir 1,2,3,4,5,6,7,8,9,10 Tip: Declara dos variables enteras (int) e insertalas en la instrucción for.
5. Generar el código necesario en C++ solicitando el rango uno máximo y uno mínimo para generar la impresión de los números de manera secuencial regresiva de uno en uno, si ingresa 1 como mínimo y 10 como máximo, deberá imprimir 10,9,8,7,6,5,4,3,2,1 Tip: Declara dos variables enteras (int) e insertalas en la instrucción for.
