# Estructuras de Datos en Python

En Python, la forma en que agrupamos y almacenamos nuestros datos define qué tan rápido y eficiente será nuestro código. Las cuatro estructuras principales (conocidas como colecciones) son: Listas, Tuplas, Diccionarios y Conjuntos.
Cuándo usarlas: Cuando tienes una colección de elementos que necesitas recorrer secuencialmente, modificar, agregar o eliminar elementos sobre la marcha.

___

## 1. Listas (Lists)
Las listas son secuencias ordenadas y mutables (modificables). Pueden contener diferentes tipos de datos e incluso listas dentro de listas (anidadas). Al tener un orden específico, cada elemento tiene un índice asignado empezando por el 0.

### Funciones más comunes:
* append(item): Añade un elemento al final.

* extend(iterable): Añade múltiples elementos al final.

* insert(index, item): Inserta un elemento en una posición específica.

* pop([index]): Elimina y devuelve el elemento en el índice dado (o el último si no se especifica).

* remove(item): Elimina la primera aparición del elemento.

* sort(): Ordena la lista (modifica la original).

* len(lista): Devuelve la cantidad de elementos.

### Ejercicios

#### Animación Digital

Ejemplo: Cola de Renderizado Dinámica
"Como animador, envías constantemente secuencias de fotogramas a una granja de render. Crea una lista que simule la cola de trabajo, añade un nuevo fotograma urgente al principio de la fila y retira el último que ya fue procesado."

```Python
# ---------------------------------------------------------
# Ejemplo Animación: Cola de Renderizado
# ---------------------------------------------------------
cola_render = ["Frame_001.png", "Frame_002.png", "Frame_003.png"]
print(f"Cola inicial: {cola_render}")

# Llega un fotograma de prueba urgente, lo insertamos al inicio (índice 0)
cola_render.insert(0, "Test_Lighting_00.png")

# Se termina de procesar el último fotograma de la fila
frame_procesado = cola_render.pop()

print(f"Se procesó con éxito: {frame_procesado}")
print(f"Cola actualizada: {cola_render}")
```
#### Ingeniería en Sistemas Computacionales

Ejemplo: Gestor de Procesos del Sistema (Task Manager)
"Un sistema operativo debe administrar los IDs de los procesos (PID) que están corriendo en el CPU. Registra los PIDs activos, agrega nuevos subprocesos que un programa acaba de lanzar en bloque y elimina un proceso específico que el usuario forzó a cerrar."

```Python
# ---------------------------------------------------------
# Ejemplo Sistemas: Gestor de Procesos
# ---------------------------------------------------------
pids_activos = [104, 552, 980]
print(f"Procesos corriendo: {pids_activos}")

# Un navegador web lanza varios subprocesos a la vez
nuevos_pids = [1102, 1105, 1108]
pids_activos.extend(nuevos_pids)

# El usuario fuerza el cierre del proceso 552
pids_activos.remove(552)

# Ordenamos los PIDs para una mejor visualización en el monitor
pids_activos.sort()
print(f"Procesos tras actualización: {pids_activos}")

```


#### Robótica

Ejemplo: Trayectoria de Puntos (Waypoints)
"Un brazo robótico industrial tiene programada una secuencia de coordenadas (1D, en grados de giro) para ensamblar una pieza. El ingeniero en planta necesita agregar una nueva coordenada al final de la rutina y saber exactamente cuántos pasos tiene la trayectoria total."

```Python
# ---------------------------------------------------------
# Ejemplo Robótica: Trayectoria
# ---------------------------------------------------------
grados_articulacion = [0, 45, 90, 135, 90]
print(f"Rutina original: {grados_articulacion}")

# Añadimos la posición final para que el brazo regrese a reposo
grados_articulacion.append(0)

# Verificamos la longitud de la rutina
total_pasos = len(grados_articulacion)
print(f"Nueva rutina: {grados_articulacion} (Total de pasos: {total_pasos})")
```

#### Mecatrónica

Ejemplo: Buffer de Sensores de Temperatura
"Un microcontrolador (PLC) lee la temperatura de un motor cada segundo. Guarda las últimas lecturas en una lista. Cuando llega una lectura nueva, añádela y elimina la más antigua para mantener siempre el mismo tamaño de almacenamiento (Buffer)."

```Python
# ---------------------------------------------------------
# Ejemplo Mecatrónica: Buffer de Sensores
# ---------------------------------------------------------
buffer_temperaturas = [45.2, 45.8, 46.1, 46.5, 47.0]
print(f"Buffer actual: {buffer_temperaturas} °C")

# Nueva lectura capturada por el sensor
nueva_lectura = 47.8

# Añadimos la nueva y sacamos la más vieja (índice 0)
buffer_temperaturas.append(nueva_lectura)
buffer_temperaturas.pop(0)

print(f"Buffer actualizado: {buffer_temperaturas} °C")
```

#### Ingeniería en Videojuegos

Ejemplo: Inventario del Jugador
"En un RPG, el jugador tiene un inventario de objetos. El personaje abre un cofre y recoge múltiples ítems, pero inmediatamente después consume una 'Poción'. Actualiza la estructura de datos del inventario."

```Python
# ---------------------------------------------------------
# Ejemplo Videojuegos: Inventario RPG
# ---------------------------------------------------------
inventario = ["Espada Rota", "Escudo de Madera"]
print(f"Inventario al entrar a la cueva: {inventario}")

# Botín del cofre
botin = ["Poción de Vida", "Moneda de Oro", "Gema Mágica"]
inventario.extend(botin)

# El jugador recibe daño y usa la poción
inventario.remove("Poción de Vida")

print(f"Inventario al salir: {inventario}")
```

#### Ciencia de Datos

Ejemplo: Limpieza de Valores Atípicos (Outliers)
"Recibes una lista con los salarios (en miles) encuestados en una empresa. Alguien escribió un valor absurdo por error. Ordena los datos de menor a mayor y elimina el registro más alto (outlier) antes de que contamine el cálculo del promedio."

```Python
# ---------------------------------------------------------
# Ejemplo Ciencia de Datos: Limpieza de Outliers
# ---------------------------------------------------------
salarios_k = [35, 42, 1200, 38, 45, 40]
print(f"Datos crudos: {salarios_k}")

# Ordenamos la lista (el valor gigante quedará al final)
salarios_k.sort()

# Eliminamos el último valor que está sesgando la muestra
outlier = salarios_k.pop()

print(f"Valor eliminado: {outlier}")
print(f"Datos limpios para el modelo: {salarios_k}")
```
___
## 2. Tuplas (Tuples)

Las tuplas son secuencias ordenadas pero inmutables (no se pueden modificar después de crearse). Se definen con paréntesis (). Al ser inmutables, son más seguras y ligeramente más rápidas que las listas en términos de memoria y procesamiento.

Cuándo usarlas: Para proteger datos que "no deben cambiar" bajo ninguna circunstancia (constantes, configuraciones, coordenadas) o para devolver múltiples valores desde una función.

### Funciones más comunes:

(Son muy pocas debido a su inmutabilidad)

* count(item): Cuenta cuántas veces aparece un elemento.

* index(item): Devuelve el índice de la primera aparición del elemento.

* len(tupla): Tamaño de la tupla.

### Ejercicios

#### Animación Digital

Ejemplo: Colores RGB Exactos

"Al texturizar un modelo 3D, el color base (Rojo, Verde, Azul) debe ser exacto para mantener la identidad visual del estudio. Protégelo en una tupla para evitar que algún script secundario cambie accidentalmente la saturación."

```Python
# ---------------------------------------------------------
# Ejemplo Animación: Constantes RGB
# ---------------------------------------------------------
color_corporativo = (255, 80, 0) # Naranja exacto
print(f"Componente Rojo: {color_corporativo[0]}")
print(f"Color bloqueado y protegido en memoria: {color_corporativo}")
# color_corporativo[1] = 100 lanzaría un error protegiendo el diseño
```

#### Ingeniería en Sistemas Computacionales

Ejemplo: Configuración Crítica de Red
"Un servidor debe escuchar en una dirección IP y un puerto específicos. Almacena este par de valores en una tupla (socket) para asegurar que un bug en el código no cambie el puerto a mitad de la ejecución, tirando el sistema."

```Python
# ---------------------------------------------------------
# Ejemplo Sistemas: Socket del Servidor
# ---------------------------------------------------------
server_config = ("192.168.1.100", 8080)
print(f"Iniciando servidor web...")
print(f"Escuchando de forma segura en IP: {server_config[0]} Puerto: {server_config[1]}")
```

#### Robótica

Ejemplo: Posición Segura (Home Position)
"Un dron autónomo siempre debe tener una posición de 'Home' absoluta (X, Y, Z) a la cual regresar si pierde señal. Este punto salva vidas y equipo, por lo que nunca debe mutar dinámicamente en el software de vuelo."

```Python
# ---------------------------------------------------------
# Ejemplo Robótica: Posición Home
# ---------------------------------------------------------
home_pos_xyz = (0.0, 0.0, 15.5) 
print(f"Punto de seguridad establecido en altitud: {home_pos_xyz[2]} mts")
print(f"Las coordenadas {home_pos_xyz} no pueden ser sobrescritas.")
```

#### Mecatrónica

Ejemplo: Calibración de Fábrica
"Un actuador lineal sale de fábrica con un voltaje mínimo y máximo de operación. Si el programa excede estos límites, el equipo se quema. Guarda estos límites operacionales en una estructura inmutable."

```Python
# ---------------------------------------------------------
# Ejemplo Mecatrónica: Límites de Tensión
# ---------------------------------------------------------
limites_voltaje = (3.3, 12.0) # Vmin, Vmax
voltaje_leido = 14.5

if voltaje_leido > limites_voltaje[1]:
    print("¡ERROR CRÍTICO! Voltaje supera el límite inmutable del motor.")
```

#### Ingeniería en Videojuegos

Ejemplo: Resolución Base del Motor
"La lógica de colisiones de tu juego 2D pixel-art depende matemáticamente de que la resolución interna siempre sea 320x240, aunque la pantalla escale. Define la resolución estricta del motor gráfico."

```Python
# ---------------------------------------------------------
# Ejemplo Videojuegos: Resolución del Motor
# ---------------------------------------------------------
resolucion_nativa = (320, 240)
total_pixeles = resolucion_nativa[0] * resolucion_nativa[1]
print(f"Motor configurado a {resolucion_nativa[0]}x{resolucion_nativa[1]}.")
print(f"Se renderizarán {total_pixeles} píxeles reales por frame.")
```

#### Ciencia de Datos

Ejemplo: Arquitectura (Shape) del Dataset
"Al entrenar un modelo predictivo, la matriz de entrenamiento tiene exactamente 10,000 filas y 50 columnas. Guardar estas dimensiones en una tupla asegura que cualquier transformación posterior pueda validarse contra la forma original."

```Python
# ---------------------------------------------------------
# Ejemplo Ciencia de Datos: Dimensiones de Matriz (Shape)
# ---------------------------------------------------------
dataset_shape = (10000, 50)
print(f"El modelo espera {dataset_shape[1]} variables predictoras exactas.")
print(f"Si los datos de entrada cambian de forma, el algoritmo lo detectará.")
```

## 3. Diccionarios (Dictionaries)

Los diccionarios almacenan información en pares de clave: valor (key: value). Son mutables y (desde Python 3.7) mantienen el orden de inserción. Las claves deben ser únicas e inmutables (como textos, números o tuplas), pero los valores pueden ser cualquier cosa. Son la base del formato JSON.

Cuándo usarlos: Cuando necesitas relacionar identificadores únicos con atributos (como una base de datos pequeña) y necesitas buscar información extremadamente rápido por su "nombre" o "ID" sin importar su posición.

### Funciones más comunes:

* keys(): Devuelve una vista con todas las claves.

* values(): Devuelve una vista con todos los valores.

* items(): Devuelve pares (clave, valor).

* get(key, [default]): Obtiene un valor sin dar error si la clave no existe.

* update(dict2): Actualiza o añade múltiples pares desde otro diccionario.

### Ejercicios

#### Animación Digital

Ejemplo: Propiedades del Rig (Esqueleto)
"Para animar un modelo complejo, asocias nombres de huesos (claves) a sus grados de rotación (valores). El animador decide girar el cuello 45 grados. Modifica esta propiedad directamente por su nombre de forma rápida."

```Python
# ---------------------------------------------------------
# Ejemplo Animación: Propiedades de Huesos
# ---------------------------------------------------------
esqueleto = {
    "hombro_izq": 15.0,
    "hombro_der": -15.0,
    "cuello": 0.0
}

# El animador ajusta la pose
esqueleto["cuello"] = 45.0
print(f"Nueva pose aplicada: {esqueleto}")
```

#### Ingeniería en Sistemas Computacionales

Ejemplo: Paquete JSON de API REST
"Estás programando un backend. Un usuario hace login, y el servidor debe estructurar sus datos (ID, nombre, rol) en un formato llave-valor para mandarlo al Frontend. El sistema detecta que es su cumpleaños y le añade dinámicamente un token de descuento."

```Python
# ---------------------------------------------------------
# Ejemplo Sistemas: Payload de API REST
# ---------------------------------------------------------
api_response = {
    "user_id": 998,
    "username": "admin_sys",
    "role": "administrador"
}

# Añadir nueva clave-valor dinámicamente
api_response["discount_token"] = "BDAY2024"

print("Payload JSON listo para ser enviado:")
for clave, valor in api_response.items():
    print(f" - {clave}: {valor}")
```

#### Robótica

Ejemplo: Estado de Actuadores
"Un robot hexápodo tiene múltiples servomotores. Necesitas mapear el ID del motor físico con su estado actual (Temp, RPM, Alarma). Al leer los datos del bus, actualiza los parámetros del 'Motor_1' rápidamente por su llave."

```Python
# ---------------------------------------------------------
# Ejemplo Robótica: Telemetría de Motores
# ---------------------------------------------------------
estado_motores = {
    "Motor_1": {"RPM": 1200, "Temp": 35, "Error": False},
    "Motor_2": {"RPM": 1200, "Temp": 36, "Error": False}
}

# El Motor 1 se calienta
estado_motores["Motor_1"]["Temp"] = 75
estado_motores["Motor_1"]["Error"] = True

print(f"Diagnóstico Motor_1: {estado_motores.get('Motor_1')}")
```

#### Mecatrónica

Ejemplo: Umbrales de Sensores Industriales
"En una línea de ensamblaje, diferentes sensores miden distintas magnitudes. Usa un diccionario para definir los umbrales de peligro de Presión (PSI) y Humedad (%)."

```Python
# ---------------------------------------------------------
# Ejemplo Mecatrónica: Umbrales de Alarma
# ---------------------------------------------------------
umbrales_peligro = {
    "Sensor_Presion_PSI": 120.0,
    "Sensor_Humedad_Pct": 85.0
}

# Un operario ajusta la tolerancia de presión a través de la HMI
umbrales_peligro.update({"Sensor_Presion_PSI": 130.0, "Sensor_Luz": 500})
print(f"Parámetros actualizados en PLC: {umbrales_peligro}")
```

#### Ingeniería en Videojuegos

Ejemplo: Estadísticas de un Jefe Final (Boss Stats)
"Un jefe de nivel tiene atributos (Vida, Ataque, Magia). Cuando su 'Vida' llega a un umbral bajo, entra en 'Modo Furia' y su 'Ataque' se multiplica, demostrando cómo modificar un diccionario impacta directamente el gameplay."

```Python
# ---------------------------------------------------------
# Ejemplo Videojuegos: Stats de Enemigo
# ---------------------------------------------------------
jefe_final = {
    "Vida": 10000,
    "Ataque": 150,
    "Magia": 80
}

# El jugador le hace mucho daño
jefe_final["Vida"] = 2500

if jefe_final["Vida"] <= 3000:
    jefe_final["Ataque"] *= 2  # Modo furia
    print("¡El jefe entra en Modo Furia!")

print(f"Stats actuales del Jefe: {jefe_final}")
```

#### Ciencia de Datos

Ejemplo: Mapeo Categórico (Label Encoding)
"Los algoritmos de Machine Learning no entienden texto, solo números. Usa un diccionario para crear un traductor que convierta las etiquetas de riesgo crediticio ('Alto', 'Medio', 'Bajo') a valores matemáticos (2, 1, 0)."

```Python
# ---------------------------------------------------------
# Ejemplo Ciencia de Datos: Label Encoding
# ---------------------------------------------------------
diccionario_mapeo = {
    "Bajo": 0,
    "Medio": 1,
    "Alto": 2
}

cliente_riesgo = "Alto"
# Convertimos el texto a número para el modelo usando get
riesgo_numerico = diccionario_mapeo.get(cliente_riesgo, -1)

print(f"El texto '{cliente_riesgo}' se tradujo al valor numérico: {riesgo_numerico}")
```
___

## 4. Conjuntos (Sets)

Los conjuntos son colecciones desordenadas y no indexadas que NO permiten elementos duplicados. Están basados en la teoría matemática de conjuntos, lo que los hace increíblemente rápidos para verificar si un elemento existe dentro de ellos y para hacer cruces de información. Se definen con llaves {}.

Cuándo usarlos: Cuando te importa qué elementos tienes, pero no cuántos (eliminar duplicados) ni en qué orden están. Son perfectos para operaciones de intersección, unión y diferencia.

### Funciones más comunes:

* add(item): Añade un elemento.

* remove(item): Elimina un elemento (da error si no existe; discard no da error).

* union(set2) o |: Une ambos conjuntos sin repetir.

* intersection(set2) o &: Devuelve elementos comunes en ambos.

* difference(set2) o -: Devuelve elementos en el primero que no están en el segundo.

### Ejercicios
Animación Digital
Ejemplo: Catálogo de Texturas Únicas
"Al importar cientos de objetos 3D a una escena, la computadora lee una lista de las texturas que necesita cargar. Muchos objetos comparten la misma textura (madera, metal). Usa un conjunto para crear una lista pura, sin duplicados, ahorrando memoria RAM."

```Python
# ---------------------------------------------------------
# Ejemplo Animación: Texturas sin duplicar
# ---------------------------------------------------------
solicitudes_carga = ["metal.png", "madera.png", "metal.png", "cristal.png", "madera.png"]

# Pasamos la lista a set para eliminar duplicados al instante
texturas_a_memoria = set(solicitudes_carga)

print(f"Solicitudes recibidas: {len(solicitudes_carga)}")
print(f"Texturas reales a cargar en RAM: {len(texturas_a_memoria)} -> {texturas_a_memoria}")
```

#### Ingeniería en Sistemas Computacionales

Ejemplo: Detección de Intrusos (Firewall)
"Tienes un conjunto de direcciones IP conocidas por atacar tu servidor (Lista Negra) y otro conjunto de IPs que hoy intentaron loguearse al sistema. Usa la intersección matemática para descubrir al instante si un atacante intentó entrar hoy."

```Python
# ---------------------------------------------------------
# Ejemplo Sistemas: Cruce de Seguridad IP
# ---------------------------------------------------------
lista_negra_global = {"10.0.0.5", "192.168.1.99", "172.16.0.4"}
ips_conexiones_hoy = {"192.168.1.15", "10.0.0.5", "192.168.1.20"}

# Intersección matemática inmediata
ataques_detectados = lista_negra_global.intersection(ips_conexiones_hoy)

print(f"¡Alerta de seguridad! Conexiones maliciosas bloqueadas: {ataques_detectados}")
```

#### Robótica

Ejemplo: Algoritmo de Laberinto (Pathfinding)
"Un robot de limpieza explora una habitación. Para no quedarse atascado en un bucle barriendo las mismas baldosas por siempre, guarda las coordenadas (X, Y) de las celdas ya visitadas en un conjunto. Si intenta ir a una celda y ya está en el conjunto, cambia de dirección."

```Python
# ---------------------------------------------------------
# Ejemplo Robótica: Nodos Visitados
# ---------------------------------------------------------
celdas_visitadas = {(0,0), (0,1), (0,2)}
proximo_movimiento = (0,1)

# O(1) tiempo de búsqueda: ultra rápido en Sets
if proximo_movimiento in celdas_visitadas:
    print(f"La coordenada {proximo_movimiento} ya fue explorada. Recalculando ruta...")
else:
    celdas_visitadas.add(proximo_movimiento)
```

#### Mecatrónica

Ejemplo: Diagnóstico de Sistemas Híbridos
"Un vehículo eléctrico reporta códigos de error desde el subsistema de la Batería y desde el subsistema del Motor. Usa la unión de conjuntos para crear un reporte técnico maestro con todas las fallas únicas detectadas en todo el vehículo."

```Python
# ---------------------------------------------------------
# Ejemplo Mecatrónica: Unión de Códigos de Falla
# ---------------------------------------------------------
fallas_bateria = {"ERR-01", "ERR-04"}
fallas_motor = {"ERR-04", "ERR-12", "ERR-40"}

# Unión sin duplicar los errores compartidos (como el ERR-04)
reporte_maestro = fallas_bateria.union(fallas_motor)

print(f"Reporte de diagnóstico OBD-II completo: {reporte_maestro}")
```

#### Ingeniería en Videojuegos

Ejemplo: Logros de la Cuenta Global
"Un jugador tiene un personaje Guerrero y un Mago en la misma cuenta. Ambos han desbloqueado diferentes logros, pero algunos se repiten. Combina ambos conjuntos para mostrar los logros en el perfil principal del jugador."

```Python
# ---------------------------------------------------------
# Ejemplo Videojuegos: Logros Globales
# ---------------------------------------------------------
logros_guerrero = {"Primer Golpe", "Cazador de Osos", "Nivel 10"}
logros_mago = {"Primer Golpe", "Maestro del Fuego", "Nivel 10"}

# Unión ( | ) de logros
perfil_global = logros_guerrero | logros_mago

print(f"Logros de cuenta desbloqueados: {perfil_global}")
```

#### Ciencia de Datos

Ejemplo: Diferencia de Vocabularios (NLP)
"Al entrenar un modelo que lee opiniones de clientes, quieres saber qué palabras nuevas aparecieron en las quejas de este mes frente a las del mes pasado. Utiliza la diferencia de conjuntos para encontrar los términos de tendencia."

```Python
# ---------------------------------------------------------
# Ejemplo Ciencia de Datos: Diferencia de Textos
# ---------------------------------------------------------
palabras_mes_pasado = {"mal", "servicio", "tarde", "caro"}
palabras_este_mes = {"servicio", "tarde", "groseros", "sucio", "mal"}

# Diferencia ( - ) ¿Qué hay este mes que no hubo el pasado?
palabras_nuevas = palabras_este_mes - palabras_mes_pasado

print(f"Análisis de tendencia de quejas. Términos nuevos emergentes: {palabras_nuevas}")

```
