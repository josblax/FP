## Condición Simple

### La condición simple es una expresión lógica. Se ejecutarán las acciones por verdadero, si y solo si, la condición es verdadera.

NOTA: Solo válida una instrucción.


```
Si expresion_logica Entonces
   acciones_por_verdadero
Fin Si
<img width="206" height="72" alt="image" src="https://github.com/user-attachments/assets/b9e26208-eccb-4dad-9643-6bace2d2040d" />

```
## Condicion Completa o Doble

### La condición doble es una expresión lógica, Se ejecutaran las acciones por verdadero, si y solo si, la condición es verdadera. Si no es así, ejecutará las acciones por falso.

NOTA: Solo válida una instrucción.

```
Si expresion_logica Entonces
  acciones_por_verdadero
SiNo
   acciones por falso
Fin Si
```


## Condicion Multiple o Si's anidados

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


## Multiples casos una instruccion

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
