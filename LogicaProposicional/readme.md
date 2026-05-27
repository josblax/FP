# Reglas fundamentales de la lógica proposicional

## Estas reglas permiten simplificar expresiones complejas, facilitando la optimización de código y la depuración de condiciones.

1. Identidad,

Elimina comparaciones innecesarias con True o False.

   * P ∧ V ≡ P
   * P ∨ F ≡ P

```Python
# Identidad: P and True == P
if es_premium == True:
    print("Acceso total")
# En Python, no necesitas comparar contra True.
if es_premium: 
    print("Acceso total")
```
  
2. Dominación,

Usa esta propiedad para proteger tu código contra errores (crash).

   * P ∨ V ≡ V
   * P ∧ F ≡ F
  
```Python
# Si lista_usuarios es None, la primera parte es False y la segunda no se ejecuta.
if lista_usuarios is not None and len(lista_usuarios) > 0:
    print("Usuarios encontrados")
```

3. Idempotencia,
   * P ∨ P ≡ P
   * P ∧ P ≡ P

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


4. Doble Negación,
   * ¬(¬P) ≡ P
5. Conmutativa
   * P ∨ Q ≡ Q ∨ P
   * P ∧ Q ≡ Q ∧ P
6. Asociativa,
   * (P ∨ Q)∨ R ≡ P ∨ (Q ∨ R)
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
