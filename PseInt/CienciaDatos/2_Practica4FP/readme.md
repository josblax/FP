## Ciencia de Datos

### Instrucción: Mientras (While) - 3 Ejercicios
Descenso del Gradiente Simulado
Enunciado: Pide la Tasa de Error inicial (Loss). Mientras el error sea mayor a 0.01, redúcelo dividiéndolo entre 2 e imprime "Ajustando pesos de la red... Error actual: [X]". Al ser menor, "Modelo convergido".
Mini-Rúbrica: Manejo de números flotantes (40%) | Condición decimal límite (30%) | Machine Learning (10%) | DFD (20%).

#### Paginación en Web Scraping
Enunciado: Inicializa la página en 1. Pide al usuario si hay un botón de "Siguiente" en el HTML simulado (1=Sí, 0=No). Mientras ingrese 1, suma 1 a la página e imprime "Extrayendo datos de url.com/page=[i]".
Mini-Rúbrica: Incremento lógico (40%) | Validaciones boleanas (30%) | Extracción de datos (10%) | DFD (20%).

#### Limpieza Automática de Nulos (NaN)
Enunciado: Pide el número de filas con valores vacíos en un dataset. Mientras sea mayor a 0, resta 10 filas e imprime "Imputando datos con la Media... Nulos restantes: [X]". Si queda en negativo o cero, "Dataset limpio".
Mini-Rúbrica: Resta y límites de cruce (40%) | Manejo de variables (30%) | Data Cleaning (10%) | DFD (20%).

### Instrucción: Repetir ... Hasta Que (Do-While) - 3 Ejercicios

#### Validación de Formato CSV
Enunciado: Pide al usuario la extensión del archivo a cargar (ej. "txt", "xlsx"). Repite mostrando "Formato no soportado en este script" hasta que el usuario ingrese la cadena "csv". Muestra "Cargando DataFrame en Pandas".
Mini-Rúbrica: Validación de Cadenas de texto (40%) | Condición de parada directa (30%) | Manejo de librerías (10%) | DFD (20%).

#### Menú de Visualización Gráfica (Plotting)
Enunciado: Muestra un menú de librerías Matplotlib: "1. Histograma, 2. Scatter Plot, 3. Gráfica de Barras, 4. Cerrar Dashboard". Despliega el nombre del gráfico seleccionado y repite hasta elegir 4.
Mini-Rúbrica: Estructura Menú UI (30%) | Lógica Segun y Repetir (40%) | Data Visualization (10%) | DFD (20%).

#### Entrenamiento de un Modelo (Epochs Manuales)
Enunciado: Imprime "Entrenando modelo... Accuracy: 60%". Pregunta "¿Desea correr otra época (Epoch) para mejorar? (S/N)". Repite la pregunta hasta que responda "N". Al salir, "Guardando modelo en formato .pkl".
Mini-Rúbrica: Ciclo iterativo condicionado por string (40%) | Manejo de prompts (30%) | MLOps (10%) | DFD (20%).

### Instrucción: Para (For) - 4 Ejercicios

#### Validación Cruzada de K-Pliegues (K-Fold)
Enunciado: Pide el número K de pliegues para entrenar. Usa un ciclo Para desde 1 hasta K. Imprime "Iteración [i]: Usando pliegue [i] como conjunto de Test (Prueba), y los demás como Train (Entrenamiento)".
Mini-Rúbrica: Iteración dinámica (40%) | Simulación de proceso lógico (30%) | Validación de Machine Learning (10%) | DFD (20%).

#### Cálculo de Media en Columnas
Enunciado: Un DataFrame tiene 5 columnas numéricas. Usa un ciclo Para (1 a 5). Pide ingresar la suma total de los datos de esa columna e imprime "La media de la feature [i] es: [Suma / 100]".
Mini-Rúbrica: Ciclo de captura y cálculo matemático (40%) | Sintaxis estructurada (30%) | Estadística descriptiva (10%) | DFD (20%).

#### Extracción de Variables Principales (PCA)
Enunciado: Tras un Análisis de Componentes Principales, se obtienen N componentes. Pide ese valor N (ej. 3). Usa un Para desde 1 hasta N indicando: "Guardando Componente Principal PC[i] para el nuevo espacio vectorial".
Mini-Rúbrica: Indexación en salida de Escribir (40%) | Control de bucle (30%) | Reducción de Dimensionalidad (10%) | DFD (20%).

Ajuste de Hiperparámetros (Grid Search 1D)
Enunciado: Usa un ciclo Para variando el parámetro "max_depth" de un árbol de decisión desde 2 hasta 10, avanzando de 2 en 2 (Paso 2). Imprime "Evaluando Árbol con Profundidad Máxima = [i]...".
Mini-Rúbrica: Ciclo con modificador de Paso (50%) | Simulación algorítmica (20%) | Algoritmos de Clasificación (10%) | DFD (20%).
