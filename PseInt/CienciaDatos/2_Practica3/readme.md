# Ejercicios para Ciencia de Datos

## Nivel Sencillo (Preprocesamiento y Lógica)

### 1. Limpieza de Datos (Valores Nulos)
Tienes una variable nulos_encontrados = 5. Crea un ciclo while que corra mientras haya nulos. En cada iteración, pide al usuario cómo desea imputar el valor nulo actual. Si ingresa "promedio", imprime "Imputando con la media"; elif ingresa "mediana", imprime "Imputando con la mediana"; elif ingresa "eliminar", imprime "Fila descartada"; else, advierte "Estrategia no reconocida, intenta de nuevo" y no restes nulos. Si es exitoso, resta 1 a los nulos.

### 2. Simulador de Rate Limit (Web Scraping)
Estás extrayendo datos de una API. Usa un ciclo while para intentar hacer 10 peticiones (peticiones = 0). Simula el código de respuesta HTTP pidiéndole al usuario que teclee el código (200, 429, 500). Si es 200, imprime "Datos extraídos" y suma 1 a peticiones; elif es 429 (Too Many Requests), imprime "Límite alcanzado, esperando 5 segundos..." (no sumas peticiones); else (ej. 404 o 500), imprime "Error de servidor, abortando script" y usa break para salir.

### 3. Filtro de Anomalías (Outliers)
Pide al usuario ingresar valores numéricos continuos en un ciclo while True para alimentar un array (puedes simularlo con una suma temporal). Teclear "parar" rompe el ciclo. Usa condicionales: si el valor tecleado es > 100, imprime "Outlier extremo superior detectado y descartado"; elif es < 0, imprime "Outlier extremo inferior detectado y descartado"; else, acepta el valor y confirma "Dato válido registrado".

### 4. Paginación de Datasets
Estás descargando un dataset dividido en páginas. Usa un ciclo while que inicie en pagina = 1 y termine en max_paginas = 5. Pide al usuario el "estado" de la página ("llena", "vacia", "error"). Si es "llena", imprime "Página X guardada" y avanza de página; elif es "vacia", asume que se acabaron los datos, imprime "Fin de los datos" y usa break; else, asume que hubo un error de red y vuelve a intentar descargar la misma página sin avanzar el contador.

### 5. Ciclo de Entrenamiento (Dummy Epochs)
Crea un ciclo while para simular las épocas de entrenamiento de un modelo de Machine Learning (epoca = 1, max_epocas = 10). Pide al usuario que ingrese la "pérdida" (loss) actual. Si la pérdida es <= 0.05, imprime "Convergencia alcanzada" y termina el ciclo prematuramente; elif la pérdida aumentó respecto a un valor anterior (necesitarás guardar la pérdida previa), advierte "¡Atención! La pérdida está subiendo"; else, avanza a la siguiente época imprimiendo el progreso.

## Nivel Intermedio (Algoritmos y Estructuras)

### 6. Simulador de Descenso de Gradiente (Step Size)
Simula la búsqueda de un mínimo. Tienes error = 10.0 y learning_rate = 1.0. Usa un ciclo while que corra mientras el error sea > 0.1. Pide al usuario si en este paso el gradiente fue "muy pronunciado", "suave" o "plano". Si es "muy pronunciado", disminuye el learning_rate a la mitad y reduce el error poco; elif es "suave", mantén el learning_rate y reduce el error bastante; elif es "plano", imprime "Atrapado en un mínimo local" y rompe el ciclo (break); else advierte entrada inválida. Imprime el error actual.

### 7. Procesador de Batches (Lotes de Datos)
Tienes un dataset de 1052 imágenes por procesar en una red neuronal. Usa un tamaño de lote (batch_size = 100). Crea un ciclo while mientras queden imágenes. Si las imágenes restantes son > batch_size, resta el lote entero e imprime "Procesando lote de 100. Quedan X"; elif las imágenes restantes son < batch_size pero > 0, procesa el remanente exacto, imprime "Procesando lote final de X imágenes" y deja el contador en 0; else, advierte un error en la cuenta.

### 8. Menú de Feature Engineering
Crea un script interactivo con while True para transformar una columna "Ciudad". Menú: 1) One-Hot Encoding, 2) Label Encoding, 3) Frecuencia, 4) Salir. Si el usuario elige 1, imprime "Creando N columnas binarias nuevas"; elif elige 2, imprime "Sustituyendo nombres por enteros (0, 1, 2...)"; elif elige 3, imprime "Reemplazando ciudad por su % de aparición"; else si elige 4, sal del ciclo. Cualquier otra entrada debe atrapar un error e imprimir "Técnica no disponible".

### 9. Tokenizador Básico de Texto NLP
El usuario ingresa una frase larga. El ciclo while evaluará palabra por palabra (puedes simular pidiendo al usuario ingresar palabra por palabra, escribiendo "EOF" para terminar). Usa condicionales lógicos para NLP: si la palabra está en una lista de stopwords imaginaria (ej. "el", "la", "de"), imprímela con el tag "[DESCARTADA]"; elif la palabra contiene números (ej. usando .isdigit()), imprímela como "[NUMERO]"; else, acéptala y conviértela a minúsculas imprimiendo "[TOKEN REGISTRADO]".

### 10. Balanceo de Clases (Undersampling/Oversampling)
Estás entrenando un modelo de fraude. Tienes clase_mayoritaria = 1000 (transacciones normales) y clase_minoritaria = 100 (fraudes). Usa un ciclo while que se ejecute mientras haya un desbalance (diferencia > 10). Pide al usuario elegir acción: "smote" o "recortar". Si escribe "smote" (oversampling), suma 50 a la clase minoritaria; elif escribe "recortar" (undersampling), resta 100 a la mayoritaria; elif escribe "info", muestra el estatus actual de ambas clases; else, pide una técnica válida. Imprime un mensaje cuando las clases estén balanceadas.
