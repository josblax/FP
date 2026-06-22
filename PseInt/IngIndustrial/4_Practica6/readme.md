## Ingeniería Industrial

### Ejercicios centrados en optimización, control estadístico, logística y análisis de tiempos y movimientos.

1. **Gráfico de Control de Calidad (SPC):** Evaluar si el diámetro de tuercas está bajo control.
   * **Instrucciones:** Genera 50 diámetros con `np.random.normal`. Usa `plt.plot` con `marker='o'` para los datos, y añade 3 líneas horizontales con `plt.axhline` para la Media, Límite Superior e Inferior.
   * **Utilidad:** Es la técnica estándar en Six Sigma para detectar anomalías en la línea de producción antes de generar piezas defectuosas.
2. **Diagrama de Pareto de Defectos:** Identificar los problemas principales en una línea de ensamble.
   * **Instrucciones:** Crea categorías ("Rayones", "Roturas", etc.) y conteos. Ordena los datos. Usa `plt.bar` para las fallas y `plt.plot` en un eje secundario (`ax.twinx()`) para el porcentaje acumulado.
   * **Utilidad:** Visualizar la regla del 80/20: atacar el 20% de las causas que generan el 80% de las pérdidas.
3. **Histograma de Tiempos de Ciclo:** Analizar el tiempo que tarda un operario en ensamblar un motor.
   * **Instrucciones:** Crea un arreglo de 200 tiempos usando `np.random.normal`. Muestra la distribución usando `plt.hist(bins=20)`.
   * **Utilidad:** Identificar cuellos de botella y evaluar si el proceso cumple con el tiempo *Takt* del cliente.
4. **Curva de Aprendizaje Operativo:** Modelar la reducción de tiempo de ensamblaje por repetición.
   * **Instrucciones:** Genera un eje X (número de repeticiones). Eje Y = `a * X**(-b)`. Usa `plt.plot`.
   * **Utilidad:** Útil para presupuestar costos de mano de obra en el lanzamiento de un nuevo producto.
5. **Costo de Inventario (EOQ - Cantidad Económica de Pedido):** Balancear costo de ordenar vs costo de almacenar.
   * **Instrucciones:** Usa un `np.linspace` para la cantidad de pedido. Grafica el Costo de Ordenar (curva descendente `1/x`) y el Costo de Mantenimiento (línea recta). Añade la Suma de ambos. Usa `plt.plot`.
   * **Utilidad:** Encontrar el punto mínimo de la curva total representa la cantidad perfecta de materia prima a pedir en logística.
6. **Mantenimiento Preventivo (Bañera):** Visualizar la curva de la bañera (Tasa de fallos vs Tiempo).
   * **Instrucciones:** Concatena tres secciones: caída exponencial (mortalidad infantil), línea plana (vida útil) y crecimiento exponencial (desgaste). Usa `plt.plot`.
   * **Utilidad:** Dicta la estrategia de Mantenimiento Productivo Total (TPM) en la planta.
7. **Diagrama de Gantt Simulado:** Mostrar la secuencia de 4 máquinas trabajando.
   * **Instrucciones:** Usa `plt.barh` (barras horizontales) especificando el inicio de la barra con el parámetro `left`.
   * **Utilidad:** Es la visualización por excelencia para planificar y programar proyectos o corridas de manufactura.
8. **Matriz de Riesgos y Seguridad (Heatmap):** Frecuencia vs Severidad de accidentes.
   * **Instrucciones:** Crea una matriz 2D pequeña (ej. 3x3) con niveles de riesgo usando `np.array`. Muéstrala con `plt.imshow` y `cmap='Reds'`.
   * **Utilidad:** Priorizar inversiones de salud y seguridad ocupacional en la planta.
9. **Eficiencia General de los Equipos (OEE) por Turno:** Comparar desempeño de 3 turnos (Mañana, Tarde, Noche).
   * **Instrucciones:** Genera tres arreglos de datos aleatorios. Grafica lado a lado usando un gráfico de caja: `plt.boxplot([T1, T2, T3])`.
   * **Utilidad:** El Boxplot ayuda al ingeniero a ver no solo el promedio, sino la varianza y estabilidad del personal.
10. **Costos Fijos vs Variables (Punto de Equilibrio):** Determinar cuántas unidades vender para ser rentable.
    * **Instrucciones:** Traza Costos Fijos (línea horizontal), Costos Totales (recta con pendiente) y Ventas (recta con mayor pendiente). Usa `plt.plot` e identifica la intersección.
    * **Utilidad:** Fundamento de la ingeniería económica para evaluar la viabilidad de una línea de producción.
