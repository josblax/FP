# Estructura Básica de un Gráfico

Todo gráfico en Matplotlib sigue una anatomía lógica muy sencilla:

Datos: Preparar los arreglos o listas que se van a graficar.

Lienzo: (Opcional pero recomendado) Crear la figura y definir su tamaño.

Ploteo: Llamar a la función del tipo de gráfico deseado (plot, scatter, bar...).

Formato: Añadir títulos, etiquetas, leyendas y cuadrículas.

Visualización: Llamar a plt.show() para renderizar el resultado.

3 Ejemplos Prácticos

## A. Gráfico de Líneas (Line Plot)
Ideal para series de tiempo, secuencias o para trazar funciones matemáticas.
```python
# 1. Datos
x = np.linspace(0, 10, 100) # 100 puntos entre 0 y 10
y = np.sin(x)               # Función seno de esos puntos

# 2. Lienzo
plt.figure(figsize=(8, 4))

# 3. Ploteo
plt.plot(x, y, color='blue', linestyle='--', linewidth=2, label='sen(x)')

# 4. Formato
plt.title('Función Seno')
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.legend()       # Muestra el cuadro con la etiqueta 'sen(x)'
plt.grid(True)     # Activa la cuadrícula

# 5. Visualización
plt.show()
```

## B. Gráfico de Dispersión (Scatter Plot)

Perfecto para encontrar relaciones, tendencias o correlaciones entre dos variables independientes.

```python
# Datos aleatorios
x = np.random.rand(50)
y = np.random.rand(50)
colores = np.random.rand(50)
tamanos = 1000 * np.random.rand(50)

plt.scatter(x, y, c=colores, s=tamanos, alpha=0.5, cmap='viridis')
plt.title('Gráfico de Dispersión (Análisis Multivariable)')
plt.xlabel('Variable Independiente')
plt.ylabel('Variable Dependiente')
plt.colorbar(label='Intensidad de color (cmap)')
plt.show()

```

## C. Gráfico de Barras (Bar Chart)

Utilizado ampliamente para comparar categorías estáticas.

```python
categorias = ['Actuaría', 'Ciencia de Datos', 'Ingeniería', 'Finanzas']
alumnos = [120, 150, 90, 80]

plt.bar(categorias, alumnos, color=['#e63946', '#2a9d8f', '#e9c46a', '#264653'])
plt.title('Alumnos por Carrera (Generación 2026)')
plt.ylabel('Cantidad de Alumnos')
plt.show()
```

## D. Histograma (Histogram)

Crucial en estadística para visualizar distribuciones de probabilidad (ej. distribución normal o sesgos).

```python
# Crear un lienzo con 1 fila y 2 columnas
fig, axs = plt.subplots(1, 2, figsize=(10, 4)) 

# Primer gráfico (izquierda)
axs[0].plot(x, y, 'g-') # 'g-' es un atajo para green line
axs[0].set_title('Gráfico de Línea')
axs[0].grid(True)

# Segundo gráfico (derecha)
axs[1].scatter(x, y, color='red', alpha=0.5)
axs[1].set_title('Gráfico de Dispersión')

plt.tight_layout() # Ajusta los espacios para que no se empalmen los títulos
plt.show()
```

## E. Gráficos Múltiples (Subplots)

Si necesitas mostrar varios gráficos en una misma ventana (dashboard básico), subplots es la solución para crear una cuadrícula.

```python
# Crear un lienzo con 1 fila y 2 columnas
fig, axs = plt.subplots(1, 2, figsize=(10, 4)) 

# Primer gráfico (izquierda)
axs[0].plot(x, y, 'g-') # 'g-' es un atajo para green line
axs[0].set_title('Gráfico de Línea')
axs[0].grid(True)

# Segundo gráfico (derecha)
axs[1].scatter(x, y, color='red', alpha=0.5)
axs[1].set_title('Gráfico de Dispersión')

plt.tight_layout() # Ajusta los espacios para que no se empalmen los títulos
plt.show()
```
