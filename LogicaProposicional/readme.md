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
