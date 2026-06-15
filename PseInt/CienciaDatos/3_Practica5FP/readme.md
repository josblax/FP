# Ciencia de Datos 

## Instrucción: Mientras (while)

### Descenso del Gradiente Simulado

Enunciado: Pide la Tasa de Error inicial (Loss). Mientras el error sea mayor a 0.01, redúcelo dividiéndolo entre 2 e imprime "Ajustando pesos de la red... Error actual: [X]". Al ser menor, "Modelo convergido".
Mini-Rúbrica: Uso flotante en la condición explícita while loss > 0.01: (50%) | División aritmética reasignada loss /= 2 (50%).

### Paginación en Web Scraping

Enunciado: Inicializa la página en 1. Pide al usuario si hay un botón de "Siguiente" en el HTML (1=Sí, 0=No). Mientras ingrese 1, suma 1 a la página e imprime "Extrayendo datos de url.com/page=[i]".
Mini-Rúbrica: Enlazado de bucle lógico validando booleanos while next_page == 1: (60%) | Lógica de recolección de datos (40%).

### Limpieza Automática de Nulos (NaN)

Enunciado: Pide el número de filas con valores vacíos en un dataset. Mientras sea mayor a 0, resta 10 filas e imprime "Imputando datos... Nulos restantes: [X]". Si queda en negativo o cero, "Dataset limpio".
Mini-Rúbrica: Sentencia iterativa decremental (50%) | Pre-procesado estadístico implementado en script puro (50%).

## Instrucción: Simulación Repetir ... Hasta Que (while True: ... break)

### Validación de Formato CSV

Enunciado: Pide al usuario la extensión del archivo a cargar (ej. "txt"). Repite mostrando "Formato no soportado" hasta que ingrese la cadena "csv". Muestra "Cargando DataFrame en Pandas".
Nota Python (Simulación Do-While): Lanza la petición del archivo a analizar en un ciclo infinito de estado while True: y fíltralo / valídalo operando el string con if ext.lower() == "csv": break para avanzar y ejecutar el DataFrame.

### Menú de Visualización Gráfica (Plotting)

Enunciado: Muestra un menú de librerías Matplotlib: "1. Histograma, 2. Scatter, 3. Barras, 4. Cerrar". Despliega el gráfico y repite hasta elegir 4.
Nota Python (Simulación Do-While): Despliega el dashboard analítico de datos manteniendo un while True: activo para visualización seriada y termínalo limpiamente disparando el cierre con if opcion == 4: break.

### Entrenamiento de un Modelo (Epochs Manuales)

Enunciado: Imprime "Entrenando modelo...". Pregunta "¿Desea correr otra época (Epoch) para mejorar? (S/N)". Repite la pregunta hasta que responda "N". Al salir, "Guardando modelo en formato .pkl".
Nota Python (Simulación Do-While): Envuelve el micro-entrenamiento de la época (epoch iterativo) en la estructura cíclica while True: y sálvalo o aborta la afinación respondiendo negativamente para accionar un if respuesta.upper() == "N": break.

## Instrucción: Para (for ... in range())

### Validación Cruzada de K-Pliegues (K-Fold)

Enunciado: Pide el número K de pliegues para entrenar. Usa un ciclo for desde 1 hasta K. Imprime "Iteración [i]: Usando pliegue [i] como Test, y demás como Train".
Mini-Rúbrica: Ejecución relacional del índice usando dinámica total range(1, k + 1) (60%) | Lógica de Machine Learning (40%).

### Cálculo de Media en Columnas

Enunciado: Un DataFrame tiene 5 columnas numéricas. Usa un ciclo iterativo de 5. Pide ingresar la suma total de esa columna e imprime "La media de la feature [i] es: [Suma / 100]".
Mini-Rúbrica: Ciclo acotado de cálculos descriptivos (40%) | Estructura en línea de script Python de operaciones analíticas (60%).

### Extracción de Variables Principales (PCA)

Enunciado: Tras un análisis, se obtienen N componentes. Pide N. Usa un for iterando esa cantidad indicando: "Guardando Componente PC[i] para el nuevo espacio vectorial".
Mini-Rúbrica: Limitación y variables concatenadas iterativamente por índice (50%) | Reducción de dimensionalidad adaptada a lógica (50%).

### Ajuste de Hiperparámetros (Grid Search 1D)

Enunciado: Usa un ciclo for variando el parámetro "max_depth" desde 2 hasta 10, avanzando de 2 en 2. Imprime "Evaluando Árbol con Profundidad Máxima = [i]...".
Mini-Rúbrica: Manejo experto de salto interno en el bucle iterativo range(2, 11, 2) (70%) | Operativa algorítmica ML (30%).
