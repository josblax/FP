## 1. Condición Simple

### La condición simple es una expresión lógica. Se ejecutarán las acciones por verdadero, si y solo si, la condición es verdadera.

NOTA: Solo válida una instrucción.


```
Si expresion_logica Entonces
   acciones_por_verdadero
Fin Si
<img width="206" height="72" alt="image" src="https://github.com/user-attachments/assets/b9e26208-eccb-4dad-9643-6bace2d2040d" />

```

## Categoría 1: Condicional Simple (Si..Entonces)
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
