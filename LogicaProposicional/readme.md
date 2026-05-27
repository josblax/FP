# Reglas fundamentales de la lógica proposicional

## Estas reglas permiten simplificar expresiones complejas, facilitando la optimización de código y la depuración de condiciones.

## 1. Identidad,

Elimina comparaciones innecesarias con True o False.

   * ### P ∧ V ≡ P
   * ### P ∨ F ≡ P

```Python
# Identidad: P and True == P
if es_premium == True:
    print("Acceso total")
# En Python, no necesitas comparar contra True.
if es_premium: 
    print("Acceso total")
```
  
## 2. Dominación,

Usa esta propiedad para proteger tu código contra errores (crash).

   * ### P ∨ V ≡ V
   * ### P ∧ F ≡ F
  
```Python
# Si lista_usuarios es None, la primera parte es False y la segunda no se ejecuta.
if lista_usuarios is not None and len(lista_usuarios) > 0:
    print("Usuarios encontrados")
```

## 3. Idempotencia,
   
   * ### P ∨ P ≡ P
   * ### P ∧ P ≡ P

```Python

usuario_activo = True

# Lógica redundante (no es necesario evaluar lo mismo dos veces)
if usuario_activo and usuario_activo:
    print("Acceso permitido")

# Aplicando Idempotencia: P and P = P
if usuario_activo:
    print("Acceso permitido")

```

##### En el diseño de sistemas (APIs y Bases de Datos)

En programación real, este concepto es crítico cuando trabajamos con servicios externos o bases de datos donde una operación podría ejecutarse más de una vez (ej. debido a reintentos de red).

```Python

# Función diseñada para ser idempotente
def actualizar_estado_usuario(usuario_id, nuevo_estado):
    """
    Esta función es idempotente: puedes llamarla 1 o 100 veces
    y el resultado en la base de datos será el mismo.
    """
    # En lugar de "incrementar", usamos "establecer" (SET)
    db.execute("UPDATE usuarios SET estado = ? WHERE id = ?", (nuevo_estado, usuario_id))

# --- Uso ---
# Primera llamada: Cambia el estado a 'ACTIVO'
actualizar_estado_usuario(101, 'ACTIVO')

# Segunda llamada (reintento por error de red): 
# El estado sigue siendo 'ACTIVO', no causa errores ni cambios inesperados.
actualizar_estado_usuario(101, 'ACTIVO')

```

##### Otros ejemplos:

| Operación | ¿Es Idempotente? | Razón |
| :--- | :---: | :--- |
| `x = 5` | **Sí** | No importa cuántas veces lo hagas, `x` siempre será 5. |
| `x = x + 1` | **No** | Cada vez que lo ejecutas, el valor cambia. |
| `SET estado = 'V'` | **Sí** | El resultado final es consistente. |
| `DELETE FROM logs WHERE id = 1` | **Sí** | El registro se borra la primera vez; después, simplemente ya no existe. |


## 4. Doble Negación,

   * ### ¬(¬P) ≡ P

```Python

es_usuario_activo = True

# La doble negación: not (not es_usuario_activo)
# Es equivalente a: es_usuario_activo
if not (not es_usuario_activo):
    print("El usuario está activo.")

```
##### Ejemplo práctico: Refactorización

Imagina que recibes un código donde se hace una validación innecesaria. Eliminar la doble negación hace que tu código sea mucho más limpio y fácil de mantener

```Python
def es_mayor_de_edad(edad):
    return edad >= 18

# --- CASO A: Código confuso (Doble negación) ---
if not (not es_mayor_de_edad(20)):
    print("Puedes entrar.")

# --- CASO B: Código optimizado (Simplificado) ---
# Aplicamos la ley: not (not P) = P
if es_mayor_de_edad(20):
    print("Puedes entrar.")
```


## 5. Conmutativa

En programación, la propiedad conmutativa es útil para mejorar la legibilidad y optimización de las condiciones.

   * ### P ∨ Q ≡ Q ∨ P
   * ### P ∧ Q ≡ Q ∧ P

```Python

# Ejemplo: Validación de acceso
# La lógica es la misma, pero puedes cambiar el orden según el contexto
es_admin = True
tiene_llave_maestra = False

# Aplicando propiedad conmutativa (P and Q) == (Q and P)
if es_admin and tiene_llave_maestra:
    print("Acceso total")

if tiene_llave_maestra and es_admin:
    print("Acceso total")

```

#### Aplicación de rendimiento:

Aunque el resultado lógico es igual, en Python la evaluación es de izquierda a derecha. Puedes usar la conmutatividad para poner la validación más rápida o segura a la izquierda:

```Python

# Si 'es_admin' es una variable simple (rápida) y 'verificar_api_externa()' es lento,
# coloca la variable simple primero para aprovechar el cortocircuito.

# Si es_admin es False, Python ni siquiera llamará a la API (y viceversa).
if es_admin and verificar_api_externa():
    print("Acceso concedido")

```

#### Consideración importante: ¡Cuidado con los efectos secundarios!

Aunque la lógica sea conmutativa ($P \land Q \equiv Q \land P$), si las variables son funciones que ejecutan acciones, el orden SÍ importa debido a los efectos secundarios.

```Python

# NO es lo mismo si las funciones cambian algo en el sistema
if activar_alarma() and abrir_puerta(): 
    # Aquí se activa la alarma y luego se abre la puerta
    pass

if abrir_puerta() and activar_alarma():
    # Aquí se abre la puerta y luego se activa la alarma (¡podría ser inseguro!)
    pass

```

> Conclusión: Usa la propiedad conmutativa para limpiar tu código y optimizar el rendimiento (poniendo las condiciones más rápidas primero), pero evita cambiar el orden si una de las condiciones es una función que realiza cambios en tu base de datos o en el estado del sistema.


## 6. Asociativa,

La Ley Asociativa establece que, cuando tienes tres o más proposiciones unidas por el mismo operador (solo and o solo or), el orden en que agrupas los términos con paréntesis no altera el resultado.

   * ### (P ∨ Q)∨ R ≡ P ∨ (Q ∨ R)

#### En programación, la propiedad asociativa te permite reestructurar condiciones complejas para hacerlas más legibles o para agrupar variables relacionadas por contexto.

##### Ejemplo de refactorización por contexto

Imagina que estás validando permisos de acceso. Tienes tres condiciones: es_admin, es_editor y tiene_invitacion.

```Python

# Escenario original: agrupa todo junto
if (es_admin and es_editor) and tiene_invitacion:
    acceso_total()

# Escenario refactorizado: usando propiedad asociativa para agrupar por lógica
# Agrupamos los roles primero (es_admin o es_editor) y luego validamos la invitación
if es_admin and (es_editor and tiene_invitacion):
    acceso_total()

```

##### Ejemplo de limpieza de código

A veces, los paréntesis automáticos de los IDEs o una mala escritura crean estructuras innecesarias. La asociatividad te permite eliminar los paréntesis cuando todos los operadores son iguales:

```Python

# Lógica redundante
if (a and b) and c:
    hacer_algo()

# Aplicando asociatividad, puedes simplificar a una cadena plana
# Es mucho más legible y limpio
if a and b and c:
    hacer_algo()

```

7. Distributiva,
   * P ∨ (Q ∧ R) ≡ (P ∨ Q) ∧ (P ∨ R)
8. De Morgan (Negación de conjunción),
   * ¬(P ∧ Q) ≡ ¬P ∨ ¬Q
9. De Morgan (Negación de disyunción),
    * ¬( P ∨ Q) ≡ ¬ P ∧ ¬Q
10. Absorción,
    * P ∨ (P ∧ Q) ≡ P
    * P ∧ (P ∨ Q) ≡ P
11. Negación,
    * P ∨ ¬P ≡ V
    * P ∧ ¬P ≡ F
