## Ciencia de Datos

### Se enfoca en estadística, evaluación de modelos predictivos, agrupamiento espacial y reducción de dimensionalidad multidimensional.

1. **Matriz de Confusión Visual:** Clasificación médica (Falsos Positivos vs Falsos Negativos).
   * **Instrucciones:** Crea una matriz 2x2 simulada de predicciones de IA. Conviértela a imagen interactiva usando `plt.imshow` o `plt.matshow` (Añadiendo el valor de celda con un `for` anidado usando `plt.text`).
   * **Utilidad:** Herramienta estricta e indispensable en Machine Learning para auditar si una IA tiene sesgo.
2. **Curva ROC (Sensibilidad vs Especificidad):** Eficiencia de un modelo de fraude bancario.
   * **Instrucciones:** Grafica la Tasa de Verdaderos Positivos (Y) contra Falsos Positivos (X). Dibuja una línea diagonal de referencia y la curva asintótica por encima. Usa `plt.plot` con `plt.fill_between` para calcular el área (AUC).
   * **Utilidad:** Métrica de precisión principal para modelos de aprendizaje supervisado y clasificación binaria.
3. **K-Means Clustering (Agrupación Espacial):** Segmentar clientes de un supermercado (Gasto vs Visitas).
   * **Instrucciones:** Crea 3 "Nubes" distintas de datos utilizando distribuciones normales con diferentes medias. Muéstralos coloreados mediante categorías usando `plt.scatter(..., c=cluster_id, cmap='viridis')`.
   * **Utilidad:** Marketing y Aprendizaje No Supervisado. Las inteligencias descubren perfiles ocultos de consumidores automáticamente.
4. **Boxplots para Detección de Valores Atípicos (Outliers):** Limpieza de base de datos de salarios.
   * **Instrucciones:** Crea salarios normales con un par de millonarios introducidos artificialmente en el arreglo numérico. Usa el clásico gráfico de bigotes `plt.boxplot(datos)`.
   * **Utilidad:** EDA (Exploratory Data Analysis). Los algoritmos fallan si no aislas y limpias las "anomalías" de los DataFrames de Pandas.
5. **Mapa de Calor de Correlación (Feature Selection):** Encontrar variables inútiles en predicción inmobiliaria.
   * **Instrucciones:** Genera una matriz simétrica (ej. matriz de Covarianzas). Representa la fuerza de las relaciones de 1 a -1 con color: `plt.imshow(matriz, cmap='coolwarm')` + `plt.colorbar()`.
   * **Utilidad:** Ingeniería de características (Feature Engineering). Previene entrenar modelos con basura estadística (Multicolinealidad).
6. **Gráfico de Importancia de Variables (Random Forest):** Entender la "Caja Negra" algorítmica.
   * **Instrucciones:** Inventa variables (Edad, Ingreso, Deuda) y sus pesos matemáticos. Ordénalos de mayor a menor y usa gráfico horizontal de barras `plt.barh`.
   * **Utilidad:** En Ciencia de Datos, la interpretabilidad legal dicta explicar a la gerencia por qué la máquina tomó una decisión.
7. **Descenso de Gradiente (Loss vs Épocas):** Monitorear el "Entrenamiento" de Redes Neuronales Profundas (Deep Learning).
   * **Instrucciones:** Eje X = Número de Iteración (Épocas). Eje Y = Función de pérdida (Costo) que decae como `1/x` con un poco de ruido. Usa `plt.plot`.
   * **Utilidad:** Diagnosticar Overfitting (Sobreajuste). Si la curva sube en lugar de bajar, el Data Scientist debe parar y reparar la red neuronal.
8. **Regresión Lineal y Área de Confianza (Forecasting):** Proyectando la demanda de inventario.
   * **Instrucciones:** Crea datos lineales con ruido (`scatter`). Extrae la línea de tendencia (`plot` rojo) y dibuja una "sombra" de incertidumbre alrededor usando `plt.fill_between` con un margen alpha bajo.
   * **Utilidad:** Proyectar series de tiempo financieras para advertir el margen de error estadístico.
9. **Distribución Bimodal de Comportamiento:** Horarios de tráfico web o transacciones bancarias.
   * **Instrucciones:** Suma y concatena dos distribuciones normales (Una matutina, otra nocturna). Aplica densidad de Kernel suavizada (KDE) o el clásico `plt.hist(bins=30, density=True)`.
   * **Utilidad:** Identificar si hay distintas sub-poblaciones dominantes invisibles a la Media Aritmética simple.
10. **Reducción de Dimensionalidad (PCA Visualizado):** Comprimir caras a un plano 2D.
    * **Instrucciones:** Imagina tener 10 variables reducidas a dos componentes principales (PC1 en X, PC2 en Y). Dibuja los vectores de carga saliendo desde el centro simulando autovectores con `plt.quiver` o `plt.arrow`.
    * **Utilidad:** Simplificar masivamente la complejidad de bases de datos gigantes (Big Data) para visualización humana y ahorrar RAM en servidores.
