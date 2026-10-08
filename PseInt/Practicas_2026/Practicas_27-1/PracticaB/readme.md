# Ejercicios de refuerzo: estructura Si..SiNo en PSeInt

**Curso:** Fundamentos de Programación
**Perfil de PSeInt:** Flexible
**Antecedentes:** `Escribir`, `Leer`, asignación (`<-`) y operadores relacionales.

## Recordatorio de sintaxis

```
Si condicion Entonces
    // se ejecuta si la condición es Verdadera
SiNo
    // se ejecuta si la condición es Falsa
FinSi
```

- La rama `SiNo` es opcional.
- Operadores relacionales: `=`, `<>`, `<`, `>`, `<=`, `>=`
- Operadores lógicos: `Y`, `O`, `NO`
- Residuo de una división: `MOD` (por ejemplo, `7 MOD 2` da `1`)

## Cómo trabajar cada ejercicio

- [ ] **Ejecutar (F9):** prueba con datos que hagan entrar **por cada rama** (la del `Entonces` y la del `SiNo`), y también con un valor justo en el límite (por ejemplo, exactamente `18`).
- [ ] **Diagrama de flujo (F7):** identifica el rombo de decisión y sus dos salidas (Verdadero / Falso).
- [ ] **Depurar (F5):** recorre el algoritmo paso a paso y observa qué líneas se **saltan** según la condición.

---

## Nivel 1: Decisión simple

### Ejercicio 1. ¿Mayor de edad?
**Archivo:** `si01_edad.psc`

Pide la edad del usuario. Si es 18 o más, muestra `Eres mayor de edad`; en caso contrario, muestra `Eres menor de edad`.

```
Edad: 17
Eres menor de edad
```

**Prueba obligatoria:** ejecuta con `17`, `18` y `19`. ¿Cuál de las tres comprueba que usaste bien `>=`?

---

### Ejercicio 2. Aprobado o reprobado
**Archivo:** `si02_calificacion.psc`

Pide una calificación de 0 a 10. Si es mayor o igual a 6, muestra `Aprobado`; si no, `Reprobado`.

```
Calificación: 8.5
Aprobado
```

---

### Ejercicio 3. Par o impar
**Archivo:** `si03_par.psc`

Pide un número entero e indica si es par o impar.

```
Número: 7
7 es impar
```

**Pista:** un número es par cuando el residuo de dividirlo entre 2 es 0.

---

## Nivel 2: Comparaciones y cálculos

### Ejercicio 4. El mayor de dos números
**Archivo:** `si04_mayor.psc`

Pide dos números y muestra cuál es el mayor. Si son iguales, muestra `Los números son iguales`.

```
Primer número: 12
Segundo número: 30
El mayor es: 30
```

**Pista:** necesitarás un `Si` dentro de otro `Si` (decisión anidada).

---

### Ejercicio 5. Positivo, negativo o cero
**Archivo:** `si05_signo.psc`

Pide un número e indica si es positivo, negativo o cero.

```
Número: -4
El número es negativo
```

**Diagrama de flujo:** ¿cuántos rombos tiene tu diagrama? ¿Por qué no basta con uno?

---

### Ejercicio 6. Contraseña
**Archivo:** `si06_contrasena.psc`

Guarda en una variable la contraseña `"unitec2026"`. Pide al usuario que la escriba y muestra `Acceso concedido` o `Contraseña incorrecta`.

```
Contraseña: Unitec2026
Contraseña incorrecta
```

**Pregunta de reflexión:** ¿por qué `Unitec2026` fue rechazada? Pruébalo.

---

### Ejercicio 7. Descuento en tienda
**Archivo:** `si07_descuento.psc`

Pide el total de una compra. Si es mayor a $1000, aplica un descuento del 10 %; si no, no hay descuento. Muestra el descuento y el total a pagar.

```
Total de la compra: 1500
Descuento: 150
Total a pagar: 1350
```

**Depuración:** con la prueba de escritorio, observa en qué paso cambia la variable del total a pagar en cada rama.

---

## Nivel 3: Operadores lógicos

### Ejercicio 8. Precio de boleto de cine
**Archivo:** `si08_cine.psc`

Pide la edad del cliente. Los niños menores de 12 años **o** los adultos de 60 años o más pagan $50; todos los demás pagan $90.

```
Edad: 65
Precio del boleto: $50
```

**Prueba obligatoria:** usa `11`, `12`, `59` y `60`.

---

### Ejercicio 9. Año bisiesto
**Archivo:** `si09_bisiesto.psc`

Pide un año e indica si es bisiesto. Un año es bisiesto si:
- es divisible entre 4 **y** no es divisible entre 100, **o**
- es divisible entre 400.

```
Año: 1900
1900 no es bisiesto
```

**Prueba obligatoria:** `2024` (sí), `2026` (no), `1900` (no), `2000` (sí).

---

## Nivel 4: Detectar y corregir

### Ejercicio 10. Encuentra los errores
**Archivo:** `si10_errores.psc`

Este programa debería decir si una temperatura indica fiebre (38 °C o más), pero tiene **cuatro errores**. Cópialo, ejecútalo y corrígelo.

```
Algoritmo Fiebre
    Escribir "Temperatura: " Sin Saltar
    Leer temp
    Si temp > 38
        Escribir "Tienes fiebre"
    SiNo
        Escribir "Temperatura normal"
    Si temp = 38 Entonces
        Escribir "Revisa de nuevo en una hora"
FinAlgoritmo
```

| # | Línea | Error encontrado | ¿Qué herramienta lo detectó? | Corrección |
|---|-------|------------------|------------------------------|------------|
| 1 |       |                  |                              |            |
| 2 |       |                  |                              |            |
| 3 |       |                  |                              |            |
| 4 |       |                  |                              |            |

---

## Autoevaluación

- [ ] Escribo correctamente la estructura `Si … Entonces … SiNo … FinSi`.
- [ ] Elijo el operador relacional correcto (`>` frente a `>=`).
- [ ] Pruebo cada rama y los valores límite.
- [ ] Construyo decisiones anidadas.
- [ ] Combino condiciones con `Y` y `O`.
- [ ] Identifico el rombo de decisión en el diagrama de flujo.
- [ ] Uso la ejecución paso a paso para ver qué rama se ejecuta.
