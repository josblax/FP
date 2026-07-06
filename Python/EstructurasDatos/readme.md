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


# Catálogo de Ejercicios: Estructuras de Datos por Carrera

Este documento contiene 10 enunciados de ejercicios para cada estructura de datos (Listas, Tuplas, Diccionarios y Conjuntos), adaptados específicamente a 6 carreras diferentes.

---

# Practica #6 Estructura de Datos (Listas, Tuplas, Diccionarios, Conjuntos)

## 1. Animación Digital

### Listas (Lists)
1. **Cola de Renderizado:** Crea una lista vacía que represente una cola de render. Añade 5 nombres de archivos de fotogramas (ej. "frame_01.png") y elimina el primero cuando "termine de renderizarse".
2. **Historial de Deshacer (Undo):** Simula el historial de acciones de un animador. Añade tres acciones a una lista y utiliza un método para eliminar la última acción si el usuario presiona Ctrl+Z.
3. **Fotogramas Clave (Keyframes):** Tienes una lista con los números de fotograma donde ocurren cambios de cámara: `[12, 24, 60, 120]`. Inserta un nuevo fotograma clave en la posición correcta para mantener el orden cronológico.
4. **Paleta de Colores Dinámica:** Crea una lista con códigos hexadecimales de colores base. Usa un ciclo para añadir 3 nuevos colores que el director de arte acaba de aprobar.
5. **Capas de un Proyecto:** Un proyecto de After Effects tiene las capas `["Fondo", "Personaje", "Luces"]`. Invierte el orden de la lista para simular un cambio en el orden de renderizado (z-index).
6. **Filtro de Fotogramas Corruptos:** Dada una lista de fotogramas procesados, elimina todos los elementos que digan `"ERROR_RENDER"`.
7. **Secuencia de Caminata (Walk Cycle):** Tienes dos listas, una con los fotogramas de la pierna izquierda y otra de la derecha. Concaténalas para formar la animación completa.
8. **Conteo de Efectos:** Dada una lista de efectos aplicados a una escena, cuenta cuántas veces se ha utilizado el efecto `"Motion Blur"`.
9. **Extracción de Escenas:** Tienes una lista de 100 escenas. Extrae únicamente las escenas de la 20 a la 35 utilizando "slicing" (rebanado) de listas.
10. **Ordenamiento de Assets:** Recibes una lista desordenada con los nombres de los modelos 3D de una escena. Ordénalos alfabéticamente para el panel de jerarquía.

### Tuplas (Tuples)
1. **Resolución de Pantalla:** Almacena la resolución estándar del motor de renderizado (1920, 1080) en una tupla e intenta modificarla para demostrar que está protegida.
2. **Color RGB Puro:** Protege el color corporativo del cliente principal en una tupla de 3 valores (R, G, B) para evitar alteraciones accidentales.
3. **Coordenadas de Origen:** Define el centro absoluto de tu espacio 3D (0.0, 0.0, 0.0) como una tupla.
4. **Límites de la Cámara (Bounding Box):** Guarda las coordenadas máximas y mínimas `(X_min, X_max, Y_min, Y_max)` en las que se puede mover la cámara en una escena 2D.
5. **Configuración de FPS:** Almacena el framerate estándar del proyecto (24.0, "Cine") y extrae ambos valores en dos variables distintas.
6. **Vectores de Iluminación:** Define la dirección estática de la luz del sol en una escena exterior usando una tupla de tres dimensiones `(X, Y, Z)`.
7. **Proporción de Aspecto (Aspect Ratio):** Guarda los valores de la proporción `(16, 9)` y calcula el valor decimal dividiendo el primer elemento entre el segundo.
8. **Configuración de Exportación:** Crea una tupla que contenga el códec, el contenedor y el bitrate de salida `("H.264", ".mp4", 15000)`.
9. **Dimensiones de Textura:** Recibes una tupla con las dimensiones de una textura `(2048, 2048)`. Calcula el total de píxeles multiplicando sus índices.
10. **Bloqueo de Huesos (Rigging):** En un esqueleto 3D, un hueso de la espina dorsal no puede rotar en el eje Z. Guarda sus grados de libertad permitidos `(True, True, False)` en una estructura inmutable.

### Diccionarios (Dictionaries)
1. **Propiedades del Material:** Crea un diccionario que almacene los atributos de un material de Maya: `Roughness`, `Metallic` y `Base_Color`.
2. **Metadatos de Escena:** Define un diccionario con la información de la toma: número de toma, animador asignado, duración en fotogramas y estatus de aprobación.
3. **Actualización de Rig:** Tienes un diccionario con los ángulos de los huesos de la mano. Actualiza el valor del `"dedo_indice_rotX"` a 45 grados.
4. **Inventario de Assets:** Crea un diccionario donde las claves sean los nombres de los personajes y los valores sean las rutas a sus archivos `.obj`.
5. **Traductor de Atajos (Shortcuts):** Asigna comandos de Blender a teclas específicas (ej. `"G": "Mover"`, `"S": "Escalar"`). Pide una tecla y devuelve el comando.
6. **Gestor de Luces:** Crea un diccionario con 3 luces de la escena. Elimina la `"Luz_Trasera"` utilizando su clave.
7. **Parámetros de Partículas:** Modela un emisor de partículas con claves como `velocidad_inicial`, `vida_media` y `cantidad`. Aumenta la `cantidad` en un 20%.
8. **Visibilidad de Capas:** Tienes un diccionario con capas y valores booleanos (True/False). Imprime solo los nombres de las capas que están visibles.
9. **Catálogo de Expresiones:** Relaciona nombres de expresiones faciales (`"Feliz"`, `"Triste"`) con un valor numérico de intensidad (0.0 a 1.0).
10. **Diccionario Anidado de Escena:** Crea un diccionario general llamado `"Escena_01"` que contenga a su vez diccionarios separados para `"Camara"`, `"Iluminacion"` y `"Personajes"`.

### Conjuntos (Sets)
1. **Texturas Únicas:** Tienes una lista de materiales aplicados en una ciudad 3D, muchos están repetidos. Conviértela a conjunto para saber exactamente cuántas texturas únicas debes cargar en RAM.
2. **Selección de Vértices:** El usuario ha seleccionado varios vértices con la herramienta de lazo, pero algunos se seleccionaron dos veces. Usa un conjunto para obtener los IDs únicos.
3. **Auditoría de Assets:** Tienes un conjunto de assets "Requeridos" y otro de assets "Modelados". Encuentra qué assets faltan por modelar usando la diferencia de conjuntos.
4. **Fusión de Capas:** Tienes dos conjuntos con los nombres de las capas activas de dos animadores distintos. Únelos para ver todas las capas modificadas hoy.
5. **Conflictos de Nombres:** Revisa si el conjunto de nombres de texturas importadas intercepta (tiene elementos en común) con el conjunto de texturas ya existentes.
6. **Purga de Caché:** Elimina del conjunto de `archivos_temporales` el archivo `"render_test_01.exr"`.
7. **Tags de Escena:** Define un conjunto de etiquetas para una escena `{"Interior", "Noche", "Lluvia"}`. Añade la etiqueta `"Accion"`.
8. **Compatibilidad de Formatos:** Tienes un conjunto de formatos soportados por Premiere y otro por After Effects. Encuentra los formatos que ambos programas pueden abrir (Intersección).
9. **Eliminación Segura:** Intenta eliminar un modificador de un conjunto de modificadores usando `.discard()` para evitar errores si el modificador no existía.
10. **Validación Rápida:** Verifica en una sola línea de código si el material `"Metal_Oxidado"` existe dentro del conjunto de materiales cargados.

---

## 2. Ingeniería en Sistemas Computacionales

### Listas (Lists)
1. **Gestor de PIDs:** Escribe un programa que almacene en una lista los IDs de los procesos activos. Añade 3 nuevos procesos que acaban de iniciar.
2. **Cola de Impresión:** Simula una cola de documentos enviados a la impresora. Atiende (elimina y muestra) el primer documento de la lista (FIFO).
3. **Historial de Comandos:** Crea una lista que actúe como el historial de la terminal. Asegúrate de que, si supera los 50 comandos, se elimine el más antiguo al agregar uno nuevo.
4. **Puertos Abiertos:** Tienes una lista de puertos lógicos abiertos en el servidor. Ordénalos de menor a mayor para su revisión en el log de auditoría.
5. **Filtro de IPs Locales:** Dada una lista de direcciones IP mixtas, extrae y guarda en una nueva lista únicamente las que comiencen con `"192.168."`.
6. **Actualización en Bloque:** Usando el método adecuado, añade a tu lista de `servidores_activos` una lista secundaria de `servidores_respaldo` que acaban de encenderse.
7. **Rotación de Logs:** Toma una lista de nombres de archivos `.log`. Extrae el último elemento y muévelo al principio de la lista.
8. **Análisis de Paquetes:** Cuenta cuántas veces aparece el protocolo `"TCP"` en una lista que registra el tráfico de red de los últimos 10 segundos.
9. **Eliminación de Tareas Zombie:** Busca en una lista de procesos el estado `"Zombie"` y elimínalo.
10. **Lectura de Memoria Simulada:** Imprime los datos almacenados en las posiciones de índice 10 a la 20 de una lista que simula bloques de memoria.

### Tuplas (Tuples)
1. **Configuración de Socket:** Almacena la tupla `(IP, Puerto)` de tu servidor backend. Demuestra qué ocurre si intentas modificar el puerto dinámicamente.
2. **Credenciales de Base de Datos:** Protege las cadenas de conexión (Host, Usuario, Password) en una tupla para que no sean sobrescritas durante la ejecución.
3. **Dirección MAC:** Guarda los 6 bloques hexadecimales de una dirección MAC física en una estructura inmutable y conéctalos con guiones usando `.join()`.
4. **Versión del Kernel:** Almacena la versión del sistema operativo en una tupla, por ejemplo `(5, 15, 0)`.
5. **Parámetros de Encriptación:** Define una tupla fija que contenga el tipo de algoritmo, el tamaño de la llave y el modo de bloque `("AES", 256, "CBC")`.
6. **Límites de Partición:** Guarda el sector de inicio y el sector final de una partición del disco duro.
7. **Códigos de Estado HTTP:** Crea tuplas para respuestas estándar, como `(404, "Not Found")`, y desempaquétalas en variables individuales.
8. **Resolución DNS Fija:** Almacena los servidores DNS principales y secundarios de Google `("8.8.8.8", "8.8.4.4")`.
9. **Máscara de Subred:** Define la máscara `/24` como una tupla de octetos `(255, 255, 255, 0)` y verifica el valor del tercer octeto.
10. **Registro de Logs de Sólo Lectura:** Un evento del sistema genera un log con `(Timestamp, Nivel_Error, Mensaje)`. Guárdalo en una tupla para garantizar su integridad forense.

### Diccionarios (Dictionaries)
1. **Diccionario JSON:** Simula el payload de respuesta de una API REST creando un diccionario con las claves `id_usuario`, `nombre` y `token_acceso`.
2. **Caché DNS:** Crea un diccionario que funcione como caché, donde la clave sea el dominio (`"www.google.com"`) y el valor sea la IP (`"142.250.190.4"`).
3. **Mapeo de Errores:** Asocia códigos de error numéricos (ej. `500`) con su descripción en texto (`"Internal Server Error"`). Solicita un código e imprime la descripción.
4. **Perfiles de Usuarios:** Crea un diccionario anidado donde la clave sea el `username`, y el valor sea otro diccionario con su `rol`, `email` y `ultima_conexion`.
5. **Configuración del Sistema:** Guarda la configuración de un archivo `.ini` (ej. `autostart`, `max_memory`, `theme`) y cambia el valor de `max_memory`.
6. **Tabla de Enrutamiento:** Mapea direcciones IP de destino con su respectiva interfaz de red (ej. `"10.0.0.0": "eth0"`).
7. **Uso de CPU por Proceso:** Tienes un diccionario con PIDs como claves y % de CPU como valores. Encuentra el PID que más recursos consume.
8. **Traducción de Puertos:** Relaciona números de puertos con los servicios asociados (22: "SSH", 80: "HTTP", 443: "HTTPS").
9. **Tokens de Sesión:** Verifica si un token específico (`"token_9912"`) existe como clave dentro del diccionario de sesiones activas.
10. **Actualización Masiva:** Tienes el diccionario de permisos de un usuario. Actualízalo con otro diccionario que contiene los nuevos privilegios otorgados por el administrador.

### Conjuntos (Sets)
1. **Auditoría de Firewall:** Tienes una lista de IPs que han intentado conexiones fallidas, con muchos duplicados. Conviértela a conjunto para obtener la Lista Negra única.
2. **Dominios Permitidos (Whitelist):** Define un conjunto de dominios corporativos. Verifica de forma rápida si un correo proviene de un dominio autorizado.
3. **Detección de Intrusos (Intersección):** Tienes el conjunto de "IPs que accedieron hoy" y la "Lista Negra global". Usa la intersección para alertar si un atacante entró.
4. **Dependencias Faltantes (Diferencia):** Compara un conjunto de `paquetes_instalados` contra `paquetes_requeridos` para averiguar cuáles faltan por descargar.
5. **Unión de Redes:** Uniste dos subredes de la empresa. Une ambos conjuntos de IPs asignadas para ver el mapa total de la nueva red.
6. **Puertos Únicos:** Un escaneo de red te devuelve una lista masiva de puertos abiertos en diferentes servidores. Encuentra los puertos únicos expuestos.
7. **Control de Sesiones:** Elimina un `session_id` del conjunto de usuarios activos cuando el cliente hace "Logout".
8. **Paquetes Duplicados:** Demuestra cómo crear un conjunto descarta automáticamente paquetes de red con el mismo ID de secuencia que llegaron dos veces por error.
9. **Validación de Subconjunto:** Verifica si el conjunto de `permisos_del_usuario` es un subconjunto estricto de los `permisos_de_admin`.
10. **Vulnerabilidades CVE:** Tienes un conjunto de CVEs corregidos en el Parche A y otro en el Parche B. Encuentra los CVEs que solo fueron corregidos en el Parche A.

---

## 3. Robótica

### Listas (Lists)
1. **Ruta de Navegación:** Crea una lista de Waypoints (coordenadas 1D). Añade un nuevo punto al final de la ruta para que el robot móvil avance más lejos.
2. **Buffer de Ultrasonido:** Un sensor ultrasónico toma 10 lecturas por segundo. Almacena las últimas lecturas, añade la nueva y elimina la más antigua (Buffer circular).
3. **Historial de Posiciones Articulares:** Guarda los ángulos de un brazo robótico. Extrae y elimina el último ángulo para programar un botón de "Deshacer movimiento".
4. **Comandos de Motores:** Tienes una lista de velocidades PWM `[150, 200, 255]`. Multiplica cada valor por 0.5 para simular un "Modo de ahorro de energía".
5. **Filtrado de Ruido:** Dada una lista con lecturas de un sensor Infrarrojo, elimina todas las lecturas que sean negativas (errores físicos del sensor).
6. **Inversión de Trayectoria:** Tienes una lista con los pasos para ir del punto A al punto B. Invierte la lista para que el robot regrese al punto A.
7. **Pila de Tareas (LIFO):** El robot debe realizar tareas de inspección. Añade 3 tareas a la lista y haz que el robot ejecute siempre la última tarea añadida.
8. **Clasificación de Objetos:** Un sistema de visión inserta el tamaño de las piezas detectadas en una lista. Ordena las piezas de mayor a menor tamaño.
9. **Calibración de Servos:** Concatena una lista de servomotores del "Brazo Izquierdo" con la lista del "Brazo Derecho" para inicializarlos todos.
10. **Conteo de Obstáculos:** En un log de navegación, cuenta cuántas veces apareció la bandera `"OBSTACULO_DETECTADO"`.

### Tuplas (Tuples)
1. **Parámetros DH (Denavit-Hartenberg):** Almacena la longitud de un eslabón, el ángulo alfa y el desplazamiento de la articulación en una tupla protegida contra modificaciones.
2. **Posición HOME:** Define la coordenada absoluta de descanso del manipulador industrial `(X, Y, Z)` para que nunca pueda ser reescrita por error en el código.
3. **Límites de Actuadores:** Guarda en una tupla el ángulo mínimo y máximo `(-180.0, 180.0)` permitidos para un motor a pasos.
4. **Cinemática Fija:** Almacena el radio de las ruedas y la distancia entre ellas `(r, L)` de un robot diferencial.
5. **Giroscopio (IMU):** Una lectura instantánea del sensor IMU devuelve Roll, Pitch y Yaw. Guárdalos en una tupla y desempaquétalos para su análisis.
6. **Mapeo Físico de Pines:** En la placa controladora, el sensor LIDAR siempre va al pin 14 y el Sonar al pin 15. Guarda esta configuración inmutable.
7. **Velocidad de Baudios:** Fija la tupla de configuración del puerto Serial `(115200, "8-N-1")` para la comunicación con el microcontrolador.
8. **Centro de Masa:** Define las coordenadas estáticas del centro de gravedad del chasis.
9. **Restricciones de Espacio de Trabajo:** Crea una tupla de tuplas que delimite el prisma rectangular donde el robot tiene permitido operar.
10. **Lectura de Encoder:** Un motor devuelve las revoluciones actuales y el sentido de giro (+1 o -1). Retorna ambos valores juntos desde una función usando una tupla.

### Diccionarios (Dictionaries)
1. **Telemetría del Robot:** Crea un diccionario que contenga el `estado_bateria`, `temperatura_cpu` y `modo_operacion`. Imprime solo el estado de la batería.
2. **Estado de Articulaciones:** Mapea el nombre de 4 motores (`"J1"`, `"J2"`, etc.) con su ángulo actual en grados.
3. **Configuración PID:** Almacena las ganancias Proporcional, Integral y Derivativa de un controlador de motor. Modifica la ganancia Proporcional para sintonizarlo.
4. **Catálogo de Sensores:** Asocia IDs físicos (ej. `0x1A`) con el tipo de sensor correspondiente (`"LIDAR"`, `"Camara_Profundidad"`).
5. **Máquina de Estados Finita:** Crea un diccionario donde las claves sean los estados actuales (`"ESPERA"`, `"NAVEGANDO"`) y los valores sean las acciones a ejecutar.
6. **Traductor de Códigos de Error:** Si el CAN Bus del robot envía el código `E_404`, búscalo en el diccionario e imprime `"Falla de comunicación en la rueda trasera"`.
7. **Posiciones Predefinidas:** Almacena poses guardadas del brazo robótico. Por ejemplo, `"Ataque"`, `"Defensa"`, `"Recarga"`, asociadas a listas de ángulos.
8. **Consumo Energético:** Tienes un diccionario con cada subsistema y su amperaje consumido. Suma todos los valores para obtener el consumo total del robot.
9. **Inventario de Piezas:** Verifica si la clave `"Cámara_RGB"` existe en la configuración de hardware actual antes de intentar inicializar el módulo de visión.
10. **Actualización de Firmware:** Actualiza el diccionario de `versiones_nodos` integrando un nuevo módulo que acaba de ser instalado en la red ROS.

### Conjuntos (Sets)
1. **Mapa de Nodos Visitados:** El algoritmo de navegación A* explora celdas de una cuadrícula. Usa un conjunto para almacenar las celdas `(X, Y)` ya exploradas y evitar bucles.
2. **Obstáculos Únicos:** El LIDAR detecta puntos en el espacio. Filtra la lista masiva de rebotes convirtiéndola a conjunto para aislar los obstáculos reales sin duplicados.
3. **Detección de Colisiones (Intersección):** Tienes el conjunto de coordenadas que ocupa el robot y el conjunto de coordenadas del obstáculo. Si la intersección no está vacía, frena.
4. **Áreas Limpias:** Un robot aspiradora guarda las baldosas que ya aspiró. Añade nuevas coordenadas dinámicamente conforme avanza.
5. **Redundancia de Sensores:** Dos cámaras distintas detectan objetos frente al robot. Haz la unión de ambos conjuntos para obtener el panorama total.
6. **Exclusión de Zonas Peligrosas:** Usa la diferencia matemática para restarle al "Espacio Explorable" el conjunto de "Zonas de Caída".
7. **Eliminación de Nodos Descartados:** Elimina del conjunto de la frontera de búsqueda las coordenadas que resultaron ser paredes.
8. **Filtro de IDs de Motores:** En una red RS485, varios motores mandan un ping de "Estoy vivo". Usa un set para purgar los pings duplicados y saber cuántos motores respondieron.
9. **Nodos Faltantes:** Compara el conjunto de `waypoints_asignados` contra los `waypoints_visitados` para saber cuáles faltan por recorrer.
10. **Modos Compatibles:** Verifica si el estado actual del robot está dentro de un conjunto de estados seguros `{"REPOSO", "MANUAL", "MANTENIMIENTO"}` antes de abrir la pinza.

---

## 4. Mecatrónica

### Listas (Lists)
1. **Buffer de Temperatura PLC:** Almacena en una lista las temperaturas del horno de los últimos 5 minutos. Añade la lectura actual y descarta la más vieja.
2. **Cola de Ensamblaje:** Simula una banda transportadora. Agrega 5 códigos de piezas a la lista y simula que el brazo robótico retira la pieza en la posición 0.
3. **Registro de Vibraciones:** Un acelerómetro envía lecturas en G's. Ordena la lista de lecturas de mayor a menor para identificar el pico máximo de vibración.
4. **Limpieza de Señal Analógica:** Tienes una lista de valores ADC. Reemplaza todos los valores menores a 10 con un 0, simulando una zona muerta para eliminar ruido.
5. **Historial de Revoluciones (RPM):** Extrae el promedio de una lista que contiene las últimas 20 lecturas de velocidad de un servomotor.
6. **Mapeo de Actuadores:** Crea una lista de válvulas neumáticas `["V1", "V2", "V3"]`. Inserta una válvula de seguridad de emergencia al principio de la línea.
7. **Subrutina de Corte:** Un CNC tiene una lista de 100 comandos G-Code. Extrae con slicing (rebanado) únicamente el segmento de corte profundo (comandos 40 a 60).
8. **Conteo de Defectos:** Un sensor de calidad emite "OK" o "DEFECTO". Cuenta la cantidad total de defectos en el lote de producción actual.
9. **Unión de Módulos:** Concatena la lista de sensores del "Módulo de Empaque" con la lista del "Módulo de Etiquetado" para el panel general de la HMI.
10. **Inversión de Banda:** Debido a un atasco, los motores de la banda se invierten. Invierte el orden de la lista de piezas en tránsito.

### Tuplas (Tuples)
1. **Límites de Seguridad (Interlocks):** Almacena en una tupla la presión mínima y máxima (en PSI) permitidas para el sistema neumático; evita su modificación.
2. **Calibración de Fábrica:** Guarda el factor de escala (Offset, Multiplicador) de un sensor de peso (celda de carga) configurado de fábrica.
3. **Especificaciones Físicas:** Define las dimensiones inmutables del área de trabajo de una fresadora CNC `(X_max, Y_max, Z_max)` en milímetros.
4. **Relación de Transmisión (Gear Ratio):** Almacena los dientes del engrane motriz y el conducido `(12, 60)` y desempaquétalos para calcular el torque.
5. **Configuración de IP de Red Industrial:** El PLC Maestro tiene una IP estática inamovible `("192.168.0.100")`. Guárdala de forma segura.
6. **Tiempos del Semáforo Industrial (Andon):** Define los segundos de encendido para alertas `(Verde_T, Ambar_T, Rojo_T)`.
7. **Características Nominales del Motor:** Crea una estructura inmutable para la Frecuencia, Voltaje y Fases `(60, 220, 3)` de una bomba centrífuga.
8. **Umbrales Termopar:** Establece la temperatura de Alarma Baja y Alarma Alta. Si la lectura excede la tupla, dispara la alerta.
9. **Matriz de Transformación Simple:** Devuelve las coordenadas de traslación estáticas de un gripper respecto a la muñeca.
10. **Lectura de Modbus:** Una función de comunicación industrial devuelve el registro leído y un booleano de éxito de la trama `(4096, True)`.

### Diccionarios (Dictionaries)
1. **Etiquetas del SCADA:** Crea un diccionario que asocie los tags de la HMI (`"T_Horno"`, `"P_Valvula"`) con su lectura en tiempo real.
2. **Mapeo de Entradas/Salidas (I/O):** Mapea los pines del microcontrolador (ej. `2: "Sensor_Optico"`, `3: "Relevador_Motor"`).
3. **Parámetros del Variador de Frecuencia:** Almacena la `Rampa_Aceleracion`, `Frecuencia_Max` y `Modo_Control`. Actualiza la Rampa desde la terminal.
4. **Diagnóstico de Alarmas:** Crea un diccionario donde el código de error numérico del PLC devuelva la instrucción de mantenimiento adecuada.
5. **Inventario de Componentes:** Tienes un almacén de refacciones. Verifica (usando `.get()`) si hay existencias de la clave `"Fusible_10A"`. Si no, devuelve 0.
6. **Estados del Proceso:** Asocia números enteros de una máquina de estados (0, 1, 2) con el nombre del estado (`"Reposo"`, `"Llenado"`, `"Sellado"`).
7. **Recetas de Producción:** Guarda un diccionario anidado para la receta `"Pintura_Roja"`, especificando proporciones de pigmento, solvente y presión.
8. **Historial de Mantenimiento:** Elimina del diccionario de mantenimiento preventivo la máquina `"Bomba_2"` que acaba de ser dada de baja de la planta.
9. **Tolerancias de Calidad:** Itera sobre un diccionario de dimensiones de piezas para imprimir qué variables críticas deben ser revisadas hoy por el técnico.
10. **Fusión de Sensores:** Actualiza el diccionario principal del tablero de control integrando los datos de un nuevo diccionario enviado por un esclavo inalámbrico.

### Conjuntos (Sets)
1. **Detección de Alarmas Duplicadas:** En un parpadeo de energía, el PLC envió el mismo código de falla 20 veces. Conviértelo a conjunto para ver solo el error raíz.
2. **Auditoría de Códigos de Barras:** Filtra los números de serie escaneados en la zona de empaque para asegurar que no se haya empacado la misma pieza dos veces.
3. **Fallas Concurrentes (Intersección):** Tienes el conjunto de fallas del Sistema Hidráulico y el del Sistema Eléctrico. Encuentra qué sensor está fallando en ambos lados simultáneamente.
4. **Zonas Seguras:** Define un conjunto de celdas de manufactura en las que un humano puede entrar sin que las cortinas láser detengan el proceso.
5. **Máquinas Fuera de Línea (Diferencia):** Resta el conjunto de `maquinas_respondiendo_ping` al conjunto de `maquinas_totales` para saber cuáles se apagaron.
6. **Operadores Activos:** Elimina un número de empleado del conjunto de operarios logueados en la HMI cuando termina su turno.
7. **Herramientas Utilizadas:** Un brazo robótico cambia de herramientas. Guarda los IDs de las herramientas que ha utilizado durante el ciclo para reportar el desgaste.
8. **Unión de Módulos Operativos:** Tienes la lista de bandas activas en la Nave 1 y la Nave 2. Une ambos para el mapa general de la planta.
9. **Permisos de Mantenimiento:** Revisa si el permiso `"Override_Hidraulico"` pertenece al conjunto de permisos del técnico logueado actualmente.
10. **Eliminación Segura (Discard):** Intenta purgar la alarma `"Fuga_Aire"` del conjunto de alertas activas sin detener el programa si dicha alarma no existe.

---

## 5. Ingeniería en Videojuegos

### Listas (Lists)
1. **Inventario del Jugador:** Crea una lista simulando la mochila del jugador. Agrega la "Espada de Hierro" y luego elimina la "Poción de Vida" tras ser consumida.
2. **Cola de Partículas:** Simula un sistema de partículas (chispas). Añade 5 partículas, e invierte el orden para destruir primero las más antiguas.
3. **Puntos de Generación (Spawn Points):** Tienes una lista de coordenadas X. Usa una función de la librería `random` para seleccionar un elemento al azar y hacer spawn de un enemigo.
4. **Historial de Daño (DPS):** Guarda los últimos 10 números de daño infligidos a un jefe. Extrae el número mayor para mostrar el "Golpe Crítico Máximo".
5. **Chat Global:** Crea una lista para el log de texto. Evita que la lista supere los 20 mensajes eliminando el índice 0 cada vez que alguien escribe algo nuevo.
6. **Nodos de Patrullaje:** Un guardia tiene una ruta de 5 puntos. Extrae el punto 3 e insértalo al inicio para cambiar su patrón de vigilancia.
7. **Ranking de Puntuaciones (Leaderboard):** Tienes las puntuaciones al final de una partida. Ordénalas de forma descendente para mostrar el podio.
8. **Efectos Alterados (Buffs/Debuffs):** Si el veneno termina, busca la palabra `"Envenenado"` en la lista de estados del jugador y elimínala.
9. **Secuencia de Niveles:** Concatena la lista de `niveles_mundo_1` con `niveles_mundo_2` para generar el flujo completo de la campaña.
10. **Conteo de Monedas:** Cuenta en la lista de recolección cuántas veces el jugador agarró el ítem `"Moneda_Oro"` en lugar de `"Moneda_Plata"`.

### Tuplas (Tuples)
1. **Resolución Nativa:** Fija la resolución base del motor gráfico en pixel-art `(320, 240)` de forma que sea imposible de corromper matemáticamente.
2. **Gravedad Constante:** Guarda el vector direccional y fuerza de la gravedad `(0, -9.81, 0)` en un motor de físicas 3D.
3. **Caja de Colisiones (Hitbox):** Define el ancho y el alto fijos del sprite del protagonista.
4. **Tasa de Caída (Drop Rate):** Define la probabilidad inmutable de que caigan objetos Común, Raro y Legendario `(70.0, 25.0, 5.0)`.
5. **Configuración de Teclas (Default Bindings):** Guarda las teclas originales para moverse (WASD) en una estructura segura para el botón de "Restaurar a predeterminado".
6. **Color de Fuente UI:** Almacena el color RGBA para los subtítulos del juego `(255, 255, 255, 255)`.
7. **Atributos Base del Héroe:** Define la salud máxima y maná inicial `(100, 50)` al nivel 1, desempaquetando los valores al cargar la partida.
8. **Posición de Origen del Mapa:** El punto donde se centra el mapa de la interfaz del usuario es siempre `(0, 0)`. Protege esto en una tupla.
9. **Versión del Juego:** Almacena la versión del parche `(1, 4, "b")` para enviarla en los logs de reporte de errores al servidor.
10. **Matriz de Tileset:** Devuelve desde una función de carga las dimensiones de la hoja de texturas como una tupla `(Columnas, Filas)`.

### Diccionarios (Dictionaries)
1. **Estadísticas RPG:** Crea el perfil de un personaje con `Fuerza`, `Destreza` y `Magia`. Al subir de nivel, incrementa la Fuerza en +2 puntos buscando la clave.
2. **Traducción (Localización):** Crea un diccionario donde las claves sean IDs de texto (`"UI_START"`, `"UI_QUIT"`) y los valores los textos en el idioma seleccionado.
3. **Botín de Enemigo (Loot Table):** Mapea nombres de objetos (`"Dientes_Lobo"`) con sus cantidades caídas al morir el monstruo.
4. **Mapeo de Entradas (Keybinds):** Relaciona acciones del juego con teclas (ej. `"Saltar": "Space"`, `"Disparar": "Mouse_1"`). Modifica la tecla de salto a `"W"`.
5. **Progreso de Misiones (Quests):** Un diccionario guarda el ID de la misión y su estado (`"Completado"`, `"Activo"`, `"Fallido"`). Verifica el estado de `"Mision_03"`.
6. **Diálogos de NPC:** Relaciona el estado anímico del NPC (`"Enojado"`, `"Feliz"`) con el texto que debe imprimir en el globo de diálogo.
7. **Atributos del Nivel:** Crea un diccionario con metadatos del nivel: nombre, música_fondo, dificultad y si tiene jefe_final. Elimina la clave de jefe_final.
8. **Catálogo de Tienda:** Verifica rápidamente si el ítem `"Poción_Mana"` existe en el inventario del mercader antes de que el jugador intente comprarla.
9. **Configuración de Gráficos:** Guarda un diccionario anidado para `Video`, con subclaves como `AntiAliasing` y `Sombras`.
10. **Armadura Equipada:** Crea un diccionario con los slots (Cabeza, Pecho, Piernas). Actualiza el Pecho con la `"Armadura de Mitril"`.

### Conjuntos (Sets)
1. **Logros Desbloqueados:** El jugador mata a 10 osos y el sistema manda 10 veces el logro "Cazador". Usa un set para purgar los duplicados y mostrar que se ganó 1 sola vez.
2. **Regiones Visitadas (Fog of War):** Almacena las IDs de los cuadrantes del mapa revelados por el jugador. Añade zonas nuevas dinámicamente sin preocuparte por repeticiones.
3. **Fusión de Cuentas (Unión):** Une el conjunto de "Skins desbloqueadas" del jugador en PC con el conjunto de Skins de su cuenta en Consola (Cross-save).
4. **Clases de Enemigos Únicos:** Tienes una lista de los 500 enemigos generados en un nivel de horda. Extráe un catálogo rápido de las razas únicas presentes.
5. **Filtro de Efectos No Acumulables:** Un jugador es golpeado por 3 hechizos de ralentización. Añade los efectos a un conjunto para asegurar que no se estaque el mismo penalizador.
6. **Amigos en Común (Intersección):** Tienes el conjunto de amigos del Jugador A y del Jugador B. Muestra sus amigos en común.
7. **Requisitos de Crafteo (Diferencia):** Resta los "Materiales_En_Inventario" de los "Materiales_Requeridos" para imprimirle al jugador qué recursos le faltan recolectar.
8. **Niveles Completados al 100%:** Elimina del conjunto de niveles bloqueados el `"Nivel_5"` cuando el jugador lo supera.
9. **Restricción de Equipamiento:** Verifica si el tipo de arma que intenta usar el jugador pertenece al conjunto de "Armas_Permitidas_Para_Mago".
10. **IDs Jugadores Online:** Mantiene un registro en tiempo real de los IDs únicos de los clientes conectados en el servidor multijugador, usando `.discard()` al desconectarse.

---

## 6. Ciencia de Datos

### Listas (Lists)
1. **Historial de Pérdida (Loss Function):** Guarda el error del modelo en cada época (iteración). Extrae el error de la primera y la última época para comparar el aprendizaje.
2. **Columna de Datos Numéricos:** Tienes una lista con edades de clientes. Usa un ciclo para añadir a una nueva lista solo los mayores de 18 años.
3. **Ingeniería de Características (Feature Engineering):** Dadas dos listas, `Precio` y `Metros_Cuadrados`, divídelas elemento por elemento y guárdalas en una nueva lista `Precio_M2`.
4. **Limpieza de Texto:** Tienes una lista de palabras extraídas de un tweet. Elimina las menciones que empiecen con "@" recorriendo la lista.
5. **Validación Cruzada (K-Folds):** Divide (slicing) una lista de 100 índices de datos en un grupo de Entrenamiento (80%) y un grupo de Prueba (20%).
6. **Medias Móviles:** Calcula el promedio de los últimos 3 elementos de una lista de ingresos diarios y añade el resultado a una lista de tendencias.
7. **Normalización Manual:** Extrae el valor máximo de una lista de variables continuas y úsalo para dividir todos los demás elementos.
8. **Series de Tiempo:** Tienes la lista de precios de cierre de una acción de Lunes a Viernes. Invierte la lista para leerla del día más reciente al más antiguo.
9. **Relleno de Datos (Imputation):** Busca en una lista los valores `"NaN"` (nulos) y reemplázalos por el promedio (o la mediana) de los datos.
10. **Concat_Dataframes Simulado:** Concatena la lista de filas del trimestre 1 con la lista de filas del trimestre 2.

### Tuplas (Tuples)
1. **Dimensiones de un Tensor (Shape):** Almacena la arquitectura inmutable de un dataset de imágenes `(Ejemplos, Alto, Ancho, Canales_RGB)`.
2. **Límites de Hiperparámetros:** Define los límites fijos del espacio de búsqueda para la Tasa de Aprendizaje (Learning Rate) de tu red neuronal `(0.0001, 0.1)`.
3. **Coordenadas de un Centroide:** En el algoritmo K-Means, fija temporalmente las coordenadas `(X, Y, Z)` del centroide para medir las distancias euclidianas a otros puntos.
4. **Par Variables Dependientes/Independientes:** Una función que divide datos devuelve `(X_train, y_train)`. Desempaqueta estos dos valores directamente en tu script.
5. **Ventana de Tiempo Fija:** Para un modelo recurrente (RNN), establece el número inmutable de pasos de tiempo (timesteps) a analizar en el pasado.
6. **Clases del Modelo:** Guarda las categorías definitivas de un modelo de clasificación de flores `("Setosa", "Versicolor", "Virginica")`.
7. **Pesos Iniciales Base:** Protege una tupla con los pesos preentrenados genéricos (bias y weights) antes de aplicar transferencia de aprendizaje (Transfer Learning).
8. **Parámetros de Escalado:** Un objeto MinMax Scaler devuelve el mínimo y el máximo de una columna. Protégelos en una tupla para no descalibrar el modelo de predicción.
9. **Resultado de Pruebas de Hipótesis:** Una función estadística devuelve el estadístico t y el p-valor `(t_stat, p_value)`. Extrae el p-valor por su índice [1].
10. **Validación de Dimensión:** Si un vector que entra al modelo predictivo no tiene una tupla de shape `(50, )`, lanza un error, garantizando seguridad dimensional.

### Diccionarios (Dictionaries)
1. **Codificación Categórica (Label Encoding):** Mapea clases en formato texto (`"Bajo"`, `"Medio"`, `"Alto"`) a formato numérico (`0`, `1`, `2`) para que la computadora las procese.
2. **Frecuencia de Palabras (NLP):** Lee una oración y crea un diccionario donde las claves sean las palabras únicas y los valores sean la cantidad de veces que se repiten.
3. **Métricas de Evaluación:** Crea un diccionario para guardar la `Exactitud (Accuracy)`, `Precisión` y `Sensibilidad (Recall)` de tu último modelo Random Forest.
4. **Configuración de Cuadrícula (Grid Search):** Almacena los hiperparámetros a explorar, por ejemplo: `{"n_estimators": [10, 50, 100], "max_depth": [5, 10]}`.
5. **Mapeo de Valores Nulos:** Guarda un registro que relacione el nombre de cada columna de tu Dataset con la cantidad exacta de valores vacíos (NaN) que posee.
6. **Estructura Base de DataFrame:** Construye un diccionario donde las claves sean los nombres de las columnas y los valores sean listas de datos, emulando la creación nativa en Pandas.
7. **Manejo de Outliers por Columna:** Relaciona el nombre de las características con su límite superior de cuartil (Q3 + 1.5*IQR). Si un dato excede el valor, lo filtras.
8. **Pesos de Características (Feature Importance):** Tras entrenar el modelo, almacena la variable predictora (ej. `"Edad"`) junto a su peso porcentual (`0.45`).
9. **Respuesta de API Predictiva:** Genera un diccionario estructurado (JSON) que devuelva la probabilidad calculada, la clase predicha y el ID de ejecución.
10. **Diccionario de Modelos:** Almacena objetos de diferentes algoritmos: `{"LogReg": modelo_logistico, "Tree": modelo_arbol}` para iterar sobre ellos y entrenarlos en un ciclo.

### Conjuntos (Sets)
1. **Extracción de Clases Únicas:** Tienes un millón de registros con nombres de ciudades. Transfórmalo a conjunto para encontrar cuántas y cuáles son las ciudades únicas antes de aplicar One-Hot Encoding.
2. **Fuga de Datos (Data Leakage):** Usa la intersección matemática para verificar que ningún ID de cliente del Conjunto de Entrenamiento (Train Set) aparezca en el Conjunto de Prueba (Test Set).
3. **Limpieza de Stopwords (NLP):** Crea un conjunto con palabras inútiles (el, la, los). Si una palabra de tu texto está en el conjunto, descártala rápidamente.
4. **Validación de Identificadores Duplicados:** La base de datos SQL te entregó una tabla. Pasa la columna de llaves primarias (Primary Keys) a conjunto y compara su longitud para detectar anomalías.
5. **Variables Constantes (Varianza Cero):** Tienes una columna de datos. Si al convertirla a set su longitud es exactamente igual a 1, significa que no aporta información (es constante). Elimínala.
6. **Diferencia de Distribución (Data Drift):** Compara los valores únicos categóricos que el modelo vio durante el entrenamiento frente a los que están llegando hoy a producción. Resta los conjuntos para ver qué categorías son nuevas o desconocidas.
7. **Combinación de Universos:** Tienes el conjunto de usuarios que compran y el conjunto de usuarios que ven anuncios. Únelos para obtener tu base activa total sin duplicarlos.
8. **Optimización de Búsqueda:** Debes verificar si un elemento existe en un catálogo de 10 millones de filas. Hacerlo en una Lista toma segundos, hacerlo convirtiéndola a Conjunto (Set) es instantáneo O(1).
9. **Purgado de Outliers Eliminados:** Tienes un set de índices que el modelo de Isolation Forest marcó como anomalías. Elimínalos (discard) de tu tabla principal.
10. **Comparativa de Vocabularios (A/B Testing):** Evalúa un modelo de análisis de sentimientos A y B. Saca la intersección de las palabras clave de las que ambos modelos están aprendiendo.


# 7. Ingeniería Mecánica

### Listas (Lists)

Historial de Revoluciones (RPM): Un tacómetro registra las RPM de un motor en una lista. Añade tres nuevas lecturas que acaban de llegar del sensor y elimina la lectura más antigua para mantener el tamaño del buffer.

Cola de Ensamblaje (Línea de Producción): Tienes una lista con los códigos de las piezas que entrarán a la celda de soldadura. Usa un método para extraer y mostrar la pieza en el índice 0, simulando que ya fue procesada.

Filtro de Tolerancias: Recibes una lista con mediciones de diámetros de ejes mecanizados. Utiliza un ciclo para eliminar todas las mediciones que excedan el límite de tolerancia de 50.05 mm.

Esfuerzos de Von Mises: Un análisis de Elementos Finitos (FEA) arroja una lista de esfuerzos máximos en diferentes nodos. Ordena la lista de mayor a menor para identificar los puntos más críticos de la estructura.

Inventario de Rodamientos: Tienes una lista de rodamientos SKF en el almacén. El proveedor te envía una caja con 5 modelos más. Utiliza el método adecuado para añadir todos los modelos nuevos de golpe al final de tu lista actual.

Reversión de Tren de Engranajes: Tienes una lista que representa la secuencia de transmisión de velocidades de una caja de cambios. Invierte el orden de la lista para simular el análisis del flujo de potencia en reversa.

Extracción de Muestra de Fatiga: Una máquina de ensayos a tracción generó 1000 puntos de datos. Extrae únicamente los datos de la posición 500 a la 550 usando slicing (rebanado) para analizar el momento exacto de la fractura.

Conteo de Fallos: En un registro de calidad, tienes una lista con los motivos de rechazo de un lote de piezas. Cuenta exactamente cuántas veces aparece el string "Fisura_Superficial".

Combinación de Aleaciones: Tienes la lista de proporciones de metales de una Aleación A y otra lista para la Aleación B. Concaténalas para calcular los porcentajes de una mezcla fundida conjunta.

Inserción de Parada de Emergencia: Tienes una lista de comandos secuenciales (G-Code) para una fresadora CNC. Inserta un comando de "PARO_HUSILLO" en el índice 2 antes de que la herramienta colisione.

### Tuplas (Tuples)
Propiedades Estáticas del Material: Almacena el Módulo de Young (Elasticidad), el Límite Elástico y la Densidad del Acero AISI 1020 en una tupla para garantizar que nadie modifique estas constantes durante la simulación de diseño.

Coordenadas del Centro de Gravedad: Guarda las coordenadas espaciales (X, Y, Z) del centro de gravedad de un chasis automotriz en una tupla.

Límites Termodinámicos: Define una tupla con la temperatura mínima y máxima (T_min, T_max) de operación segura de una turbina de gas. Imprime un error si una variable térmica excede el índice 1.

Configuración de Corte CNC: Fija los parámetros ideales de corte para una broca de carburo en una tupla (Velocidad_Avance, RPM_Husillo, Profundidad_Corte). Desempaqueta la tupla en 3 variables para usarlas en un cálculo.

Relación de Transmisión (Gear Ratio): Almacena el número de dientes del engrane motriz y del engrane conducido (N1, N2) e intenta modificar uno para demostrar el error de inmutabilidad.

Vectores de Fuerza en Armaduras: Representa la fuerza aplicada en un nodo como una tupla tridimensional (Fx, Fy, Fz) en Newtons.

Dimensiones Estandarizadas ISO: Guarda el paso, el diámetro nominal y el tamaño de la cabeza de un Tornillo M8 en una tupla, ya que son medidas de catálogo que no deben mutar.

Retorno Múltiple de Ensayo: Crea una función que simule un cálculo de viga sometida a flexión y que devuelva en una misma tupla el esfuerzo máximo cortante y el esfuerzo flexionante.

Coeficientes de Fricción: Almacena los coeficientes de fricción estática y cinética (Us, Uk) entre dos superficies de acero lubricadas.

Matriz de Rotación Cinemática: Define una fila inmutable de la matriz de rotación direccional de un eslabón para un mecanismo de 4 barras.

### Diccionarios (Dictionaries)
Ficha Técnica de Motor: Crea un diccionario que mapee las características de un motor de combustión interna: "Cilindrada", "Caballos_Fuerza", "Torque_Max" y "Ciclo_Termodinámico".

Tabla de Propiedades de Fluidos: Mapea el nombre de fluidos de trabajo ("Aceite_SAE30", "Refrigerante_R134a") con su respectiva viscosidad cinemática como valor.

Mapeo de Sensores PID: Crea un diccionario asociando el identificador del sensor de un intercambiador de calor ("Temp_Entrada", "Temp_Salida", "Flujo_Masico") con sus lecturas analógicas actuales. Actualiza el valor de "Temp_Salida".

Catálogo de Materiales: Tienes un diccionario donde las claves son tipos de metales y los valores su densidad. Pide al usuario que ingrese un metal y usa .get() para devolver su densidad o un mensaje de "Material no encontrado".

Configuración de Impresión 3D (FDM): Modela un perfil de laminado (Slicer) con claves como "Altura_Capa", "Densidad_Relleno" y "Temperatura_Extrusor". Cambia la temperatura si el material ingresado es ABS.

Nodos y Desplazamientos: En un análisis estructural, mapea el ID del Nodo ("N_101") con el desplazamiento milimétrico calculado. Elimina el "N_000" (nodo empotrado que no tiene desplazamiento).

Códigos de Diagnóstico OBD-II: Asocia los códigos de falla de un vehículo ("P0300", "P0171") con su respectiva descripción mecánica para crear un escáner virtual automotriz.

Estado de Válvulas Neumáticas: Tienes un diccionario con el estado de 3 válvulas (True abierto, False cerrado). Itera sobre él e imprime únicamente el nombre de las válvulas que están abiertas.

Diccionario de Mantenimiento: Crea un diccionario anidado llamado "Torno_CNC" que contenga sub-diccionarios para "Eje_X", "Eje_Y" y "Husillo", guardando las horas de uso de cada uno.

Suma de Masas de un Ensamble: Crea un diccionario con el nombre de 5 piezas de un ensamble SolidWorks y su masa en Kg. Suma todos los valores (values) para obtener la masa total de la máquina.

### Conjuntos (Sets)
Materiales Únicos en el Lote: Tienes una lista de envíos de chapa metálica de la acería con muchos lotes repetidos. Conviértela a conjunto para saber cuántas aleaciones únicas recibiste realmente.

Intercambiabilidad de Piezas (Intersección): Tienes un conjunto con los números de parte compatibles con la "Bomba A" y otro conjunto con los de la "Bomba B". Encuentra qué sellos mecánicos sirven para ambas bombas.

Faltantes en la Línea (Diferencia): Resta el conjunto de "Piezas_Ensambladas" al conjunto de "Lista_De_Materiales_BOM" para averiguar de inmediato qué tornillos o placas faltan por montar.

Fusión de Proveedores (Unión): Une el catálogo de herramientas de fresado del "Proveedor 1" con el del "Proveedor 2" para crear tu base de herramientas disponibles en el taller sin tener códigos duplicados.

Modos de Falla Concurrentes: El sistema eléctrico reporta un conjunto de errores y el sistema hidráulico reporta otro conjunto. Verifica si la falla "Caida_Presion" está presente en ambos sistemas.

Limpieza de Nodos Superpuestos: Al importar una malla (Mesh) de AutoCAD, muchos vértices en las esquinas se duplicaron. Usa un conjunto para purgar los vértices superpuestos y sanear el modelo 3D.

Auditoría de Normas ISO: Tienes el conjunto de normas con las que cumple un plano mecánico. Verifica en una sola línea si el conjunto requerido de calidad {"ISO_9001", "GD&T_Y14.5"} es un subconjunto de lo que reporta el plano.

Operarios en Planta: Almacena los IDs de los técnicos que tienen permiso para encender la prensa hidráulica. Si un ID intenta activar la máquina y no está en el conjunto, bloquea el arranque.

Eliminación de Residuos: Intenta eliminar (usando .discard()) el comando de "Enfriamiento_Inactivo" de la lista de rutinas de una caldera, asegurando que no detenga el software si ya había sido desactivado.

Catálogo Rápido de Acabados: Una base de datos tiene miles de registros de producción que incluyen el acabado superficial ("Pulido", "Esmerilado", "Anodizado"). Extrae exclusivamente las clases de acabados únicos en microsegundos usando la matemática de conjuntos.
