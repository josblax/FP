# Ciencia de Datos

1. Limpieza de Datos (Valores Nulos)
Enunciado: Solicita el porcentaje de valores vacíos (NaN) de una columna en un DataFrame. Si es mayor al 60%, indica "Descartar columna (Dropping feature)". SiNo, "Imputar valores nulos con el promedio".
Mini-Rúbrica: Manejo de porcentaje (20%) | Lógica relacional (40%) | Vocabulario de Preprocessing (20%) | DFD e imágenes completas (20%).

2. Detección de Valores Atípicos (Outliers)
Enunciado: Lee el puntaje Z (Z-Score) calculado para un dato ingresado. Si el valor absoluto es mayor a 3, alerta "Registro catalogado como anomalía/outlier". SiNo, "Registro dentro de la distribución normal".
Mini-Rúbrica: Uso analítico del número (20%) | Condicional > (40%) | Estadística descriptiva (20%) | DFD e imágenes completas (20%).

3. División Entrenamiento/Prueba (Split)
Enunciado: Pide la cantidad total de registros en el dataset. Si es menor a 100, advierte "Dataset muy pequeño para Machine Learning, riesgo de Overfitting". SiNo, "Dividir en 80% Train y 20% Test".
Mini-Rúbrica: Cantidad de filas (20%) | Lógica < (40%) | Lógica de Machine Learning (20%) | DFD e imágenes completas (20%).

4. Validación de Precisión (Accuracy)
Enunciado: Solicita el Accuracy o precisión del modelo entrenado (del 0 al 100). Si es menor a 75, imprime "El modelo requiere mejor ajuste de hiperparámetros". SiNo, "Modelo listo para ambiente de producción".
Mini-Rúbrica: Lectura de métrica (20%) | Condicional Si..Entonces (40%) | Vocabulario de evaluación (20%) | DFD e imágenes completas (20%).

5. Límite de Peticiones de API
Enunciado: Pregunta el número de extracciones (Requests) enviadas al servidor durante el web scraping. Si supera las 500, indica "Límite excedido, pausar el script (Sleep) por 5 min". SiNo, "Continuar extrayendo JSON".
Mini-Rúbrica: Control de iteraciones teóricas (20%) | Uso del operador > (40%) | Extracción de datos (20%) | DFD e imágenes completas (20%).

6. Descarte por Multicolinealidad
Enunciado: Lee la correlación de Pearson calculada entre dos variables predictoras. Si es mayor a 0.85, advierte "Alta correlación: Eliminar una de las variables". SiNo, "Ambas variables aportan información única".
Mini-Rúbrica: Uso de decimales (30%) | Condición relacional (30%) | Estadística inferencial (20%) | DFD e imágenes completas (20%).

7. Significancia Estadística (P-Valor)
Enunciado: Solicita el P-valor obtenido tras realizar una prueba de hipótesis (A/B testing). Si es menor a 0.05, imprime "Rechazamos la hipótesis nula, el cambio es estadísticamente significativo". SiNo, "No hay evidencia suficiente para cambiar el modelo actual".
Mini-Rúbrica: Formato con decimales bajos (30%) | Operador < (30%) | Lógica A/B Test (20%) | DFD e imágenes completas (20%).

8. Límite de RAM de Pandas
Enunciado: Pide el peso del archivo CSV en Gigabytes. Si pesa más de 16 GB, advierte "Memoria RAM insuficiente. Usar librería Dask o Apache Spark". SiNo, "Cargar archivo usando librería Pandas".
Mini-Rúbrica: Lectura de peso (20%) | Lógica SiNo (40%) | Manejo de Big Data (20%) | DFD e imágenes completas (20%).

9. Sesgo del Modelo (Bias)
Enunciado: Pregunta si la variable objetivo está desbalanceada (ej. 90% fraude, 10% no fraude). Ingresar 1 para Sí, 0 para No. Si es 1, muestra "Aplicar técnicas de remuestreo (SMOTE)". SiNo, "Entrenar sin modificaciones".
Mini-Rúbrica: Lógica booleana (30%) | Uso de Si..Entonces (30%) | Técnicas de datos (20%) | DFD e imágenes completas (20%).

10. Calidad de Clusterización
Enunciado: Lee el "Silhouette Score" de un modelo de K-Means (valor entre -1 y 1). Si es menor a 0.5, advierte "Clústeres sobrepuestos, revisar número de agrupaciones (K)". SiNo, "Clústeres bien definidos".
Mini-Rúbrica: Manejo de negativos/reales (30%) | Lógica condicional (30%) | Modelos no supervisados (20%) | DFD e imágenes completas (20%).
