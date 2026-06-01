## 1. Condición Simple

### La condición simple es una expresión lógica. Se ejecutarán las acciones por verdadero, si y solo si, la condición es verdadera.

NOTA: Solo válida una instrucción.


```
Si expresion_logica Entonces
   acciones_por_verdadero
Fin Si
```

## Ejercicios Categoría 1: Condicional Simple (Si..Entonces)
*Nota: En estos ejercicios solo debes ejecutar una acción si la condición se cumple. Si no se cumple, el programa simplemente termina sin hacer nada extra.*

1. **Alerta de Temperatura:** Solicita al usuario la temperatura de una máquina en grados. Si la temperatura es mayor a 100, muestra un mensaje que diga "Alerta: Sobrecalentamiento detectado".
2. **Bono de Ventas:** Pide al usuario que ingrese su total de ventas mensuales. Si el total supera los $5000, muestra un mensaje de felicitación indicando "¡Felicidades! Has ganado un bono de productividad".
3. **Mayoría de Edad Internacional:** Lee la edad de una persona. Si la edad es igual o mayor a 21, imprime "Tienes permitido el consumo de alcohol en zonas internacionales".
4. **Descuento de la Tercera Edad:** Pregunta el año de nacimiento del cliente y calcula su edad actual (asumiendo el año en curso). Si tiene 65 años o más, muestra el mensaje "Aplica descuento del 20% en su compra".
5. **Velocidad de Autopista:** Solicita la velocidad a la que viaja un vehículo en km/h. Si la velocidad excede los 120 km/h, imprime en pantalla "Infracción: Ha superado el límite de velocidad".


## 2. Condicion Completa o Doble

### La condición doble es una expresión lógica, Se ejecutaran las acciones por verdadero, si y solo si, la condición es verdadera. Si no es así, ejecutará las acciones por falso.

NOTA: Solo válida una instrucción.

```
Si expresion_logica Entonces
  acciones_por_verdadero
SiNo
   acciones por falso
Fin Si
```

## Ejercicios Categoría 2: Condicional Doble (Si..Entonces..SiNo)
*Nota: Estos ejercicios requieren tomar una ruta si la condición es verdadera, y otra ruta distinta si es falsa.*

1. **Aprobado o Reprobado:** Pide al usuario su calificación final (de 0 a 100). Si la calificación es mayor o igual a 60, muestra "Aprobado". De lo contrario, muestra "Reprobado".
2. **Paridad Numérica:** Solicita un número entero al usuario. Determina y muestra si el número ingresado es "Par" o "Impar" (puedes usar el operador Modulo/Resto).
3. **Acceso de Seguridad:** Solicita al usuario que ingrese una contraseña. Si la contraseña ingresada es "Admin123", muestra "Acceso Concedido". Si ingresa cualquier otra cosa, muestra "Acceso Denegado".
4. **Estado del Clima:** Pregunta al usuario el porcentaje de probabilidad de lluvia (0 a 100). Si es mayor al 50%, imprime "Lleva paraguas, es probable que llueva". Si no, imprime "Disfruta tu día, clima despejado".
5. **Balance de Cuenta:** Lee el saldo actual de una cuenta bancaria. Si el saldo es menor a 0, imprime "Estado crítico: Cuenta en números rojos". Si es 0 o mayor, imprime "Cuenta con saldo positivo".

## 3. Condicion Multiple o Si's anidados

### Existen múltiples expresiones lógicas. (expresión_lógica1, expresión_lógica2, …, expresión_lógican).

Ejecutará aquellas acciones, donde la expresión lógica sea verdadera, sea la primera, la segunda o la enésima expresión lógica.


```
Si expresion_logica1 Entonces
  acciones_por_verdadero1
SiNo
   Si expresion_logica2 Entonces
      acciones_por_verdadero2
     SiNo
      Si expresion_logican Entonces
      acciones_por_verdaderon
      Fin Si 
  Fin Si
Fin Si
```
## Ejercicios Categoría 3: Condicional Múltiple / If Anidados
*Nota: Estos ejercicios evalúan más de dos posibles escenarios encadenando estructuras condicionales.*

1. **Categorías de Edad:** Solicita la edad de una persona e imprime su categoría: Si es menor de 12 años, "Niño". Si tiene entre 12 y 17, "Adolescente". Si tiene entre 18 y 64, "Adulto". Si tiene 65 o más, "Adulto Mayor".
2. **Clasificación de Calificaciones:** Pide una calificación del 1 al 10 y asigna una letra: Si es 10 o 9, "A". Si es 8, "B". Si es 7, "C". Si es 6, "D". Si es menor a 6, "F".
3. **Índice de Masa Corporal (IMC):** Solicita el valor del IMC calculado de un paciente. Clasifícalo de la siguiente manera: Menos de 18.5 es "Bajo peso". De 18.5 a 24.9 es "Peso normal". De 25 a 29.9 es "Sobrepeso". De 30 en adelante es "Obesidad".
4. **Tipos de Triángulo:** Solicita la longitud de los tres lados de un triángulo. Si los tres lados son iguales, muestra "Equilátero". Si solo dos lados son iguales, muestra "Isósceles". Si todos los lados son diferentes, muestra "Escaleno".
5. **Niveles de Batería:** Lee el porcentaje de batería de un dispositivo móvil (0-100). Si es mayor a 80, muestra "Batería Alta". Si está entre 21 y 80, "Batería Media". Si está entre 10 y 20, "Batería Baja". Si es menor a 10, "Nivel Crítico: Conecte el cargador inmediatamente".

## 4. Multiples casos una instruccion

### Existe una opción, este es un valor donde es comparado caso por caso, y donde el valor coincide, entonces se ejecutaran esas acciones

```
Segun variable_númerica Hacer
  opcion_1:
      secuencia_de_acciones1
  opcion_2:
      secuencia_de_acciones2
  opcion_3:
       secuencia_de_acciones3
   De otro modo:
       secuencia_de_acccionesdom
Fin Segun
```
## Ejercicios Categoría 4: Condicional Múltiple-Casos (Según..Hacer)
*Nota: Estos ejercicios utilizan un menú de opciones donde una variable numérica se compara caso por caso. Si encuentra una coincidencia, ejecuta las acciones de esa opción.*

1. **Calculadora Básica (Menú de Operaciones):** Muestra al usuario un menú con 3 opciones matemáticas (1. Sumar, 2. Restar, 3. Multiplicar). Solicita que elija una opción. Dependiendo de su elección, pídele dos números, realiza la operación correspondiente y muestra el resultado. Si ingresa una opción fuera del menú, muestra un mensaje de "Opción no válida".
2. **Sistema de Conversiones Rápidas:** Crea un programa que muestre el siguiente menú: "1. Metros a Centímetros", "2. Horas a Minutos", "3. Dólares a Pesos (Tasa fija 20.0)". Pide al usuario que elija una opción, luego solicita el valor a convertir, realiza el cálculo directo según el caso seleccionado y muestra el resultado en pantalla.
3. **Selección de Clase (Videojuego):** Muestra un menú de creación de personaje con 3 clases disponibles: 1 para Guerrero, 2 para Mago, y 3 para Arquero. Según el número ingresado por el jugador, imprime en pantalla un mensaje confirmando la clase elegida y sus estadísticas iniciales (Salud, Magia y Ataque). Si ingresa un número distinto, muestra una advertencia indicando que se le asignará la clase "Aldeano" por defecto.
