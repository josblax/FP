# Estructuras de Datos en Python

## En Python, la forma en que agrupamos y almacenamos nuestros datos define qué tan rápido y eficiente será nuestro código. Las cuatro estructuras principales (conocidas como colecciones) son: Listas, Tuplas, Diccionarios y Conjuntos.

Cuándo usarlas: Cuando tienes una colección de elementos que necesitas recorrer secuencialmente, modificar, agregar o eliminar elementos sobre la marcha.

### 1. Listas (Lists)
Las listas son secuencias ordenadas y mutables (modificables). Pueden contener diferentes tipos de datos e incluso listas dentro de listas (anidadas). Al tener un orden específico, cada elemento tiene un índice asignado empezando por el 0.

#### Funciones más comunes:

* **append(item):** Añade un elemento al final.

* **extend(iterable):** Añade múltiples elementos al final.

* **insert(index, item):** Inserta un elemento en una posición específica.

* **pop([index]):** Elimina y devuelve el elemento en el índice dado (o el último si no se especifica).

* **remove(item):** Elimina la primera aparición del elemento.

* **sort():** Ordena la lista (modifica la original).

* **len(lista):** Devuelve la cantidad de elementos.


#### Ejercicios

##### Actuarios

###### Ejemplo 1: Registro dinámico de siniestros

"Eres el actuario responsable del ramo de automóviles. A lo largo del mes, la cabina de atención te reporta siniestros de forma secuencial. Crea un programa que registre estos montos iniciales, permita agregar un nuevo reporte que acaba de llegar en tiempo real y, finalmente, calcule la suma del costo total de indemnizaciones del mes."

```python
# ---------------------------------------------------------
# Ejemplo 1: Registro dinámico de siniestros
# ---------------------------------------------------------
print("\n--- Ejercicio 1: Siniestros Automotrices ---")
# Generamos una lista inicial de 10 siniestros aleatorios (entre $5,000 y $50,000)
siniestros_mes = [round(random.uniform(5000, 50000), 2) for _ in range(10)]
print(f"1. Montos registrados al inicio del día: \n{siniestros_mes}")

# Llega un reporte en tiempo real (Generamos el monto aleatorio)
nuevo_reporte = round(random.uniform(5000, 50000), 2)
print(f"2. [ALERTA] Nuevo siniestro reportado en cabina: ${nuevo_reporte:,.2f}")

# Usamos append() para meterlo al final de la lista
siniestros_mes.append(nuevo_reporte)
```

###### Ejemplo 2: Proyección de tasas de interés

"El comité de inversiones ha proyectado las tasas de interés macroeconómicas para los próximos 5 años y las ha guardado en orden cronológico. Sin embargo, tras un sorpresivo anuncio del Banco Central, la proyección del año 3 debe ser ajustada a la baja. Escribe el código para actualizar específicamente ese valor manteniendo la estructura y el orden de los demás años."

```python
# ---------------------------------------------------------
# Ejemplo 2: Proyección de tasas de interés
# ---------------------------------------------------------
print("\n--- Ejercicio 2: Ajuste de Tasas ---")
# Generamos 5 años de tasas base (entre 4% y 8%)
tasas_proyectadas = [round(random.uniform(4.0, 8.0), 2) for _ in range(5)]
print(f"1. Proyección macroeconómica original (Años 1 a 5): \n{tasas_proyectadas}")

# Calculamos un ajuste aleatorio a la baja para el Año 3
baja_sorpresa = round(random.uniform(0.5, 1.5), 2)

# El "Año 3" corresponde al índice 2 de la lista (0, 1, 2)
# Reasignamos el valor modificando la lista original
tasas_proyectadas[2] = round(tasas_proyectadas[2] - baja_sorpresa, 2)

print(f"2. El Banco Central anunció una baja de {baja_sorpresa}% para el Año 3.")
print(f"3. Proyección actualizada conservando el orden cronológico: \n{tasas_proyectadas}")
```

##### Ciencia de Datos

###### Ejemplo 1: Limpieza de una columna de datos (Feature Engineering)

"Como científico de datos, recibes de ingeniería de datos una columna con las edades de los usuarios. Lamentablemente, los datos están 'sucios': mezclan edades en texto con frases como 'No disponible'. Utiliza una estructura dinámica para extraer y convertir únicamente los valores numéricos, construyendo un vector de datos limpio y listo para el modelo."

```python
# ---------------------------------------------------------
# Ejemplo 1: Limpieza de una columna de datos
# ---------------------------------------------------------
print("\n--- Ejercicio 1: Feature Engineering (Limpieza) ---")
# Generamos 15 registros "sucios": 80% números y 20% texto
columna_edades_sucia = [random.randint(18, 65) if random.random() > 0.2 else random.choice(["No disponible", "Error", "NaN"]) for _ in range(15)]
print(f"1. Datos crudos recibidos desde Ingeniería de Datos: \n{columna_edades_sucia}")

# Creamos una nueva lista vacía para almacenar los datos limpios
edades_limpias = []

# Iteramos y usamos type() para filtrar solo los números enteros (int)
for valor in columna_edades_sucia:
    if type(valor) == int:
        edades_limpias.append(valor)

print(f"2. Vector limpio listo para el modelo de ML: \n{edades_limpias}")
```

###### Ejemplo 2: Almacenamiento de la función de pérdida (Loss Function)

"Durante el entrenamiento de tu modelo de Machine Learning, necesitas monitorear si la inteligencia artificial realmente está aprendiendo. Crea un historial que almacene el error de predicción de cada iteración (época). Al finalizar una nueva iteración, añade el nuevo error y verifica mediante código si este último resultado fue mejor (menor) que el anterior."

```python
# ---------------------------------------------------------
# Ejemplo 2: Almacenamiento de la función de pérdida (Loss)
# ---------------------------------------------------------
print("\n--- Ejercicio 2: Monitoreo del Modelo (Loss Function) ---")
# Simulamos un historial de pérdida que ha ido bajando durante 5 épocas
historial_loss = [round(random.uniform(0.8, 1.0) / (i+1), 4) for i in range(5)]
print(f"1. Historial de Error (Épocas 1 a 5): \n{historial_loss}")

# Simulamos la Época 6 (añadiendo ruido aleatorio, a veces sube, a veces baja)
nuevo_error = round(historial_loss[-1] - random.uniform(-0.02, 0.05), 4)
historial_loss.append(nuevo_error)
print(f"2. Época 6 finalizada. Nuevo error calculado: {nuevo_error}")

# Verificamos consultando el último [-1] y penúltimo [-2] elemento de la lista
if historial_loss[-1] < historial_loss[-2]:
    print("3. Diagnóstico: ¡Excelente! La Inteligencia Artificial sigue aprendiendo (El error bajó).")
else:
    print("3. Diagnóstico: ¡Alerta! El modelo se estancó o está sobreajustando (Overfitting). El error aumentó.")
```

### Tuplas (Tuples)
Las tuplas son secuencias ordenadas pero inmutables (no se pueden modificar después de crearse). Se definen con paréntesis (). Al ser inmutables, son más seguras y ligeramente más rápidas que las listas en términos de memoria y procesamiento.

Cuándo usarlas: Para proteger datos que "no deben cambiar" bajo ninguna circunstancia (constantes, configuraciones, coordenadas) o para devolver múltiples valores desde una función.

Funciones más comunes:
(Son muy pocas debido a su inmutabilidad)

* **count(item):** Cuenta cuántas veces aparece un elemento.

**index(item):** Devuelve el índice de la primera aparición del elemento.

**len(tupla):** Tamaño de la tupla.

##### Actuarios
###### 1. Parámetros fijos de una Tabla de Mortalidad:

"Para garantizar la integridad y auditoría de un modelo de valuación de seguros de vida, necesitas almacenar la 'Edad' y su 'Probabilidad de Muerte ($q_x$)' asociada. Usa una estructura de datos que proteja esta información como de 'solo lectura', garantizando que ningún otro proceso o programador pueda modificar accidentalmente la probabilidad durante la ejecución."

```python
import random

print("--- TUPLAS: ACTUARÍA ---")
# 1. Parámetros fijos de una Tabla de Mortalidad
edad_simulada = random.randint(20, 80)
qx_simulado = round(random.uniform(0.001, 0.05), 5)

tabla_mortalidad_tupla = (edad_simulada, qx_simulado)
print(f"1. Datos Inmutables: Edad {tabla_mortalidad_tupla[0]}, Probabilidad de Muerte {tabla_mortalidad_tupla[1]}")
# Intentar reasignar tabla_mortalidad_tupla[1] = 0.5 daría un TypeError, lo cual asegura la auditoría.
```


###### 2: Coordenadas de un escenario de estrés

"En las pruebas de solvencia del trimestre (Stress Testing), se define un escenario catastrófico estático compuesto por dos valores inamovibles: la Severidad (Costo) y la Frecuencia (Probabilidad). Guarda este escenario en una estructura inmutable y calcula la esperanza matemática del riesgo."

```python
# 2. Coordenadas de un escenario de estrés
severidad = round(random.uniform(500000, 5000000), 2) # Costo entre 500k y 5M
frecuencia = round(random.uniform(0.01, 0.15), 4) # Probabilidad entre 1% y 15%

escenario_estres = (severidad, frecuencia)
esperanza_matematica = escenario_estres[0] * escenario_estres[1]
print(f"2. Escenario Estático: {escenario_estres} -> Esperanza del Riesgo: ${esperanza_matematica:,.2f}")
```

##### Ciencia de Datos

###### Coordenadas Geoespaciales

"Estás programando un algoritmo para optimizar rutas de entrega. Las coordenadas geográficas (Latitud y Longitud) del almacén matriz son el centro de gravedad de tu modelo y son fijas. Almacena este par de valores en una estructura de datos segura y protegida contra modificaciones accidentales."


```python
# 1. Coordenadas Geoespaciales
latitud = round(random.uniform(-90.0, 90.0), 6)
longitud = round(random.uniform(-180.0, 180.0), 6)

almacen_matriz = (latitud, longitud)
print(f"3. Coordenadas fijas del almacén: {almacen_matriz}")
```
###### Dimensiones de un Tensor (Shape)

"Al procesar un lote de imágenes médicas para una red neuronal, la matriz de píxeles exige una arquitectura estricta de cuatro dimensiones: (cantidad de imágenes, alto, ancho, canales de color). Define estas dimensiones (Shape) de forma estructurada para calcular el total de píxeles a procesar."

```python
# 2. Dimensiones de un Tensor (Shape)
lote_imagenes = random.randint(16, 128)
shape_tensor = (lote_imagenes, 256, 256, 3) # (imagenes, alto, ancho, canales RGB)

total_pixeles = shape_tensor[0] * shape_tensor[1] * shape_tensor[2] * shape_tensor[3]
print(f"4. Shape del Tensor: {shape_tensor} -> Total de píxeles a procesar: {total_pixeles:,}")
```

### Diccionarios (Dictionaries)

Los diccionarios almacenan información en pares de clave: valor (key: value). Son mutables y (desde Python 3.7) mantienen el orden de inserción. Las claves deben ser únicas e inmutables (como textos, números o tuplas), pero los valores pueden ser cualquier cosa. Son la base del formato JSON.

Cuándo usarlos: Cuando necesitas relacionar identificadores únicos con atributos (como una base de datos pequeña) y necesitas buscar información extremadamente rápido por su "nombre" o "ID" sin importar su posición.

#### Funciones más comunes:

* **keys():** Devuelve una vista con todas las claves.

* **values():** Devuelve una vista con todos los valores.

* **items():** Devuelve pares (clave, valor).

* **get(key, [default]):** Obtiene un valor sin dar error si la clave no existe.

**update(dict2):** Actualiza o añade múltiples pares desde otro diccionario.

##### Actuarios

###### Perfil de Póliza de un Cliente

"Para alimentar el motor automatizado de cotizaciones, necesitas empaquetar toda la información de un solicitante (ID de póliza, edad, estatus de fumador y suma asegurada) en un solo objeto donde cada dato sea consultable por su 'etiqueta' o 'nombre'. Además, debes programar una regla que consulte este perfil e incremente la prima base un 20% si el cliente es fumador."

```python
# 1. Perfil de Póliza de un Cliente
perfil_cliente = {
    "ID_Poliza": f"POL-{random.randint(1000, 9999)}",
    "edad": random.randint(18, 70),
    "fumador": random.choice([True, False]),
    "suma_asegurada": random.choice([500000, 1000000, 2000000]),
    "prima_base": 5000.0
}

# Regla de recargo por tabaquismo
if perfil_cliente["fumador"]:
    perfil_cliente["prima_base"] *= 1.20 # Aumento del 20%
    
print(f"1. Perfil Cliente: {perfil_cliente['ID_Poliza']} | Fumador: {perfil_cliente['fumador']} | Prima Final: ${perfil_cliente['prima_base']:,.2f}")
```

###### Reservas Técnicas por Ramo

"El departamento de contabilidad te solicita un reporte de las reservas técnicas actuales. Crea una estructura que asocie el nombre de cada ramo (Auto, Vida, Gastos Médicos) con su monto en reservas. Acto seguido, la Comisión Nacional de Seguros aprueba la operación de un nuevo ramo ('Daños'), así que debes incorporarlo dinámicamente al portafolio existente."

```python
# 2. Reservas Técnicas por Ramo
reservas_tecnicas = {
    "Auto": round(random.uniform(1e6, 5e6), 2),
    "Vida": round(random.uniform(10e6, 50e6), 2),
    "Gastos Médicos": round(random.uniform(5e6, 15e6), 2)
}

# Incorporación dinámica del nuevo ramo
reservas_tecnicas["Daños"] = round(random.uniform(2e6, 8e6), 2)
print(f"2. Portafolio de Reservas Actualizado: {reservas_tecnicas}")
```

##### Ciencia de Datos

##### Construcción rápida de un DataFrame

"Antes de importar librerías avanzadas como Pandas, necesitas simular la estructura tabular de una base de datos relacional. Crea un objeto que relacione los nombres de las columnas ('ID_Cliente', 'Ingreso', 'Abandono') con una lista de sus respectivos valores, construyendo así las bases de un DataFrame."

```python
# 1. Construcción rápida de un DataFrame
n_registros = 5
dataframe_simulado = {
    "ID_Cliente": [f"USR-{random.randint(100, 999)}" for _ in range(n_registros)],
    "Ingreso": [round(random.uniform(15000, 80000), 2) for _ in range(n_registros)],
    "Abandono": [random.choice([0, 1]) for _ in range(n_registros)]
}
print(f"3. Base de datos simulada (Columnas): {dataframe_simulado.keys()}")
print(f"   Datos 'Ingreso': {dataframe_simulado['Ingreso']}")
```

##### Conteo de Frecuencia de Palabras (NLP)

"En un proyecto de Análisis de Sentimiento (Procesamiento de Lenguaje Natural) para predecir movimientos de la bolsa, necesitas contar cuántas veces se repite cada palabra dentro del texto de una noticia financiera. Crea una estructura de 'clave-valor' que lea las palabras y vaya sumando 1 al contador de cada término de forma dinámica."

```python
# 2. Conteo de Frecuencia de Palabras (NLP)
vocabulario = ["mercado", "acciones", "baja", "alza", "riesgo", "inversión", "tasa", "fed"]
# Simulamos un texto aleatorio de 30 palabras
noticia_financiera = [random.choice(vocabulario) for _ in range(30)]

frecuencia_palabras = {}
for palabra in noticia_financiera:
    # get(palabra, 0) devuelve 0 si la palabra no existe aún en el diccionario
    frecuencia_palabras[palabra] = frecuencia_palabras.get(palabra, 0) + 1

print(f"4. Frecuencia de palabras en el texto: {frecuencia_palabras}")
```

### Conjuntos (Sets)

Los conjuntos son colecciones desordenadas y no indexadas que NO permiten elementos duplicados. Están basados en la teoría matemática de conjuntos, lo que los hace increíblemente rápidos para verificar si un elemento existe dentro de ellos y para hacer cruces de información. Se definen con llaves {}.

Cuándo usarlos: Cuando te importa qué elementos tienes, pero no cuántos (eliminar duplicados) ni en qué orden están. Son perfectos para operaciones de intersección, unión y diferencia.

#### Funciones más comunes:

* **add(item):** Añade un elemento.

* **remove(item):** Elimina un elemento (da error si no existe; discard no da error).

* **union(set2) o |:** Une ambos conjuntos sin repetir.

* **intersection(set2) o &:** Devuelve elementos comunes en ambos.

* **difference(set2) o -:** Devuelve elementos en el primero que no están en el segundo.

##### Actuarios
 

##### Auditoría de Pólizas Duplicadas

"Durante la migración de un sistema legado, la base de datos arrojó un vector de IDs de pólizas facturadas con un grave problema: muchos clientes aparecen duplicados por un error del servidor. Demuestra cómo, utilizando una única línea de código basada en teoría de conjuntos, puedes purgar instantáneamente todos los duplicados para auditar únicamente las pólizas reales."

```python
# 1. Auditoría de Pólizas Duplicadas
# Generamos 20 IDs donde seguramente habrá repetidos (rango corto de 1 a 10)
ids_brutos = [random.randint(1, 10) for _ in range(20)] 

# Purgamos duplicados en una sola línea convirtiendo la lista a conjunto
ids_purgados = set(ids_brutos)
print(f"1. IDs Originales (Con duplicados): {len(ids_brutos)} -> IDs Auditados (Únicos): {len(ids_purgados)}")
```

##### Cruce de Siniestralidad (Intersección)

"El departamento de prevención de fraudes te ha entregado dos listas de clientes: aquellos que reportaron un siniestro total en 2024 y los que lo hicieron en 2025. Utiliza operaciones matemáticas de conjuntos para encontrar de forma inmediata a los clientes reincidentes (la intersección) que deben ser sujetos a investigación."

```python
# 2. Cruce de Siniestralidad (Intersección)
# Simulamos IDs de clientes que tuvieron siniestros (rango 100 a 200)
siniestros_2024 = set([random.randint(100, 200) for _ in range(30)])
siniestros_2025 = set([random.randint(150, 250) for _ in range(30)])

# Encontramos a los reincidentes usando la intersección
clientes_reincidentes = siniestros_2024.intersection(siniestros_2025)
print(f"2. Clientes investigados por reincidencia (Intersección): {clientes_reincidentes}")
```

##### Ciencia de Datos

###### Extracción de Categorías Únicas (Variables Categóricas)

"Estás preparando los datos para entrenar un modelo predictivo, y tienes una columna de texto que contiene las 'Ciudades' de los usuarios con miles de registros repetidos. Extrae exclusivamente el catálogo de 'clases únicas' de esa columna (sin repeticiones) para poder transformarlas posteriormente a variables binarias (One-Hot Encoding)."


```python
# 1. Extracción de Categorías Únicas (Variables Categóricas)
lista_ciudades = ["CDMX", "Monterrey", "Guadalajara", "Puebla", "Tijuana", "Mérida"]
# Simulamos 100 registros con muchas repeticiones
columna_ciudades_repetidas = [random.choice(lista_ciudades) for _ in range(100)]

# Extraemos el catálogo de clases únicas
catalogo_unico = set(columna_ciudades_repetidas)
print(f"3. De {len(columna_ciudades_repetidas)} registros, las clases únicas para One-Hot Encoding son: {catalogo_unico}")
```

###### Detección de Fuga de Datos (Data Leakage)

"Tienes dos conjuntos de IDs de pacientes: uno que usaste para 'entrenar' tu modelo y otro que reservaste celosamente para 'probarlo'. En Machine Learning, un paciente no puede estar en ambos grupos. Utiliza una operación de diferencia o intersección para comprobar rápidamente si tu muestra está contaminada (Fuga de Datos)."

```python
# 2. Detección de Fuga de Datos (Data Leakage)
# IDs del universo de pacientes: 1 al 100
# El Train set toma pacientes aleatorios del 1 al 80. El Test toma del 70 al 100 (habrá contaminación intencional).
train_set = set([random.randint(1, 80) for _ in range(50)])
test_set = set([random.randint(70, 100) for _ in range(20)])

# Comprobamos fuga de datos viendo si la intersección tiene algún elemento
fuga_datos = train_set.intersection(test_set)

if len(fuga_datos) > 0:
    print(f"4. ¡ALERTA! Fuga de datos detectada. Pacientes en ambos grupos: {fuga_datos}")
else:
    print("4. Modelo seguro: No hay fuga de datos (Intersección vacía).")
```
