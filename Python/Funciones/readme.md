# Funciones en Python

* Las funciones son piezas de código reusable.

* Las funciones pueden ser llamadas o invocadas cuando son necesitadas.

* Ayuda a desglosar un problema en partes más manejables.

## Estructura General de una función.

### La estructura general de una función en Python implica el uso de la palabra reservada def y la indentación (sangría) para delimitar el bloque de código:

### Palabra reservada def: Le indica a Python que estás creando una función.


* **Nombre de la función:** Un identificador único.

* **Lista de parámetros:** Variables entre paréntesis separadas por comas (puede estar vacía).

* **Cuerpo de la función:** El bloque de código indentado que define lo que hace.

* **Retorno (opcional):** La instrucción return para devolver un valor (si no se usa, Python devuelve None por defecto).

Estructura General de una función:

```Python
def nombrefuncion(parametro1, parametro2):
    # Cuerpo de la función indentado
    pass
```

**Ejemplo:**

```Python
def suma(num1, num2):
    return num1 + num2

```
### ¿Cómo se llama a una Función? 

Una función puede ser llamada dentro de cualquier otra parte del código y si esta tiene parámetros, debes anexar los valores (argumentos) que reciba la función separados por comas ,.

### ¿Se puede definir una Función dentro de otra Función? 

Sí, a diferencia de C++, en Python sí puedes definir una función dentro de otra función (conocidas como funciones anidadas). Esto es muy útil para ocultar lógica interna o crear "closures". 

> Python también soporta funciones anónimas utilizando la palabra reservada lambda.

Ejemplos de diferentes tipos de funciones.
El ejercicio de hoy implica una serie de ejemplos que muestran algunas de las características de las funciones en Python.

### RECUERDA. Un parámetro es la variable definida dentro de los paréntesis al crear la función.

### Por el contrario, un argumento es el valor real que se le envía a la función cuando esta es llamada.

##  1. Función sin retorno y sin parámetros.

Esta es la estructura más básica. La función ejecutará una acción directa (como imprimir en pantalla), pero no devolverá ningún valor al programa principal (devuelve None por debajo). Al tener los paréntesis vacíos (), tampoco recibe "ingredientes" externos; toda su información es interna.
​
Ejemplo (Imprimir una suma fija internamente):

```Python
# Declaración de función sin retorno explícito y sin parámetros ()
def imprimir_suma_fija():
    # La función define sus propios datos internamente
    a = 8
    b = 12
    suma = a + b
    
    # Ejecuta la acción y termina
    print(f"La suma calculada internamente es: {suma}")

# Bloque principal
if __name__ == "__main__":
    # Al llamarla, simplemente ejecuta su bloque de código encapsulado
    imprimir_suma_fija()
    
    # Podemos llamarla varias veces, pero siempre hará exactamente lo mismo
    imprimir_suma_fija()
```

## 2. Funciones sin retorno y con parámetros
Aquí seguimos ejecutando una acción sin devolver un resultado para operaciones matemáticas, pero ahora los paréntesis contienen "ingredientes" (parámetros). Esto hace que la función sea dinámica.
​
Ejemplo (Imprimir la suma de dos números):

```Python
# Declaración de función que exige dos parámetros
def imprimir_suma(a, b):
    suma = a + b
    print(f"La suma calculada internamente es: {suma}")

if __name__ == "__main__":
    # Llamamos a la función inyectándole los "ingredientes" (5 y 10)
    imprimir_suma(5, 10)
    
    # Podemos reutilizarla con datos distintos
    imprimir_suma(100, 250)

```

## 3. Funciones con retorno y sin parámetros
​
Aquí utilizamos explícitamente la instrucción return. Esto significa que la función trabaja como una "calculadora" que promete entregarnos un dato. Al no tener parámetros, busca la información internamente y nos entrega un resultado limpio.

``` Python
# Declaración de función que devuelve un valor pero no pide parámetros ()
def obtener_suma_fija():
    valor1 = 20
    valor2 = 30
    
    # El return procesa internamente y devuelve el resultado
    return valor1 + valor2

if __name__ == "__main__":
    # La función no imprime nada por sí sola, debemos atrapar su valor en una variable
    resultado = obtener_suma_fija()
    
    print(f"El valor retornado por la función es: {resultado}")
```

## 4. Función con retorno y con parámetros.

Este es el estándar de oro en el diseño de algoritmos modulares. Inyectamos datos externos, la función realiza el cálculo a puerta cerrada y nos entrega un resultado usando return.

### Ejemplo (Calcular y devolver la suma de datos inyectados):

```Python
# Declaración con retorno explícito y con parámetros
def calcular_suma(a, b):
    # Procesa los "ingredientes" recibidos y devuelve el resultado matemático
    return a + b

if __name__ == "__main__":
    # Inyectamos los valores 15 y 25. 
    # Debemos atrapar el resultado en una nueva variable.
    resultado_total = calcular_suma(15, 25)
    
    # Ahora podemos usar ese dato en el flujo principal
    print(f"El resultado procesado y devuelto es: {resultado_total}")
    
    # También podemos imprimir el retorno directamente sin guardarlo
    print(f"Otra suma rápida es: {calcular_suma(50, 50)}")
```
___





___

# Practica #6 Funciones

**Objetivo:** Desarrollar el pensamiento computacional y la modularidad del código mediante la creación de funciones en Python (`def`). Cada alumno debe resolver los 10 ejercicios correspondientes a su carrera.


## 0. Ciencia de Datos (Data Science)

## I. Funciones sin retorno y sin parámetros def nombre():

### Ejercicio 1: Inicializador del Entorno de Datos
Enunciado: Simular la carga automática de una configuración de entorno para análisis de datos. La función imprimirá en consola que el set de datos por defecto (ej. Dataset Iris) ha sido montado en la memoria caché local.


### Ejercicio 2: Limpiar Historial de Logs
Enunciado: Diseña una función encargada de simular la liberación de memoria RAM tras un entrenamiento pesado. Al llamarse debe imprimir en pantalla: "Los registros temporales y logs de entrenamiento han sido removidos para liberar memoria RAM".


### Ejercicio 3: Menú de Modelos Predictivos
Enunciado: Diseña una función para una interfaz de terminal científica que muestre los algoritmos disponibles para ejecutar: "1. Regresión Lineal | 2. Árbol de Decisión | 3. Random Forest".

## II. Funciones sin retorno y con parámetros def nombre(p1, p2):

### Ejercicio 4: Inspección de Dimensiones (Shape)
Enunciado: Escribe una función que reciba dos parámetros enteros: filas y columnas. Debe imprimir las dimensiones tabulares de la matriz de datos que se va a procesar.

### Ejercicio 5: Registro de Métrica de Evaluación
Enunciado: Cuando se evalúa un modelo de Inteligencia Artificial, se escoge una métrica. Diseña una función que reciba una cadena de texto con el nombre de la métrica (ej. "Accuracy" o "MSE") e imprima: "¡Evaluación finalizada! La métrica seleccionada para el modelo es: [Métrica]".

### Ejercicio 6: Ajustar Tasa de Aprendizaje (Learning Rate)
Enunciado: Escribe una función que reciba un número decimal pequeño (entre 0.0001 y 1.0) que represente la velocidad de aprendizaje de un algoritmo. La función debe multiplicar el valor por 100 para imprimirlo como porcentaje en consola.

## III. Funciones con retorno y sin parámetros def nombre(): return valor

### Ejercicio 7: Generador de Ruido Estocástico (Data Augmentation)
Enunciado: Para hacer que un modelo sea robusto se le inyecta ruido matemático. Diseña una función que no reciba parámetros pero retorne un número decimal pequeño aleatorio que simule el sesgo térmico o ruido de una muestra.

### Ejercicio 8: Umbral de Clasificación por Defecto (Threshold)
Enunciado: En problemas de clasificación binaria (ej. determinar si un correo es Spam o No), el límite de decisión por defecto suele ser 0.5. Crea una función que retorne este valor estático para ser usado en las condiciones del programa principal.


### Ejercicio 9: Sincronización de Épocas (Epochs)
Enunciado: Escribe una función que simule leer el progreso del entrenamiento de una red neuronal y devuelva el número entero 100 (indicando que llegó a la época 100). Captura el valor e imprímelo.

## IV. Funciones con retorno y con parámetros def nombre(p1): return valor

### Ejercicio 10: Normalización Min-Max Escalada
Enunciado: Escribe una función que reciba el valor numérico actual de un dato, el valor mínimo de la columna y el valor máximo de la misma. Aplica la fórmula: (valor - minimo) / (maximo - minimo) y retorna el valor transformado a escala entre 0 y 1.

### Ejercicio 11: Error Absoluto Elemental (MAE)
Enunciado: La distancia entre la predicción de la computadora y el valor real mide el error. Diseña una función que reciba la prediccion (float) y el valor_real (float), calcule la resta y devuelva el resultado en valor absoluto absoluto usando la función nativa de Python abs().


### Ejercicio 12: Control de Valores Atípicos (Clip/Tratamiento de Outliers)
Enunciado: Los valores extremos dañan los análisis estadísticos. Diseña una función que reciba el valor de un sueldo, un limite_inferior y un limite_superior. Si el sueldo es menor al inferior, se iguala al inferior; si supera al superior, se reduce al superior. Retorna el valor corregido.


---

## 1. Mecatrónica

### I. Funciones sin retorno y sin parámetros (`def nombre():`)
* **Ejercicio 1: Inicialización del Controlador**
    Crea una función `inicializar_plc()` que simule el arranque de un autómata. Debe imprimir: *"PLC conectado y rutinas de seguridad iniciadas."*
* **Ejercicio 2: Paro de Emergencia**
    Crea una función `activar_paro_emergencia()` que imprima: *"¡ALERTA! Cortando suministro eléctrico a los actuadores."*

### II. Funciones sin retorno y con parámetros (`def nombre(parametros):`)
* **Ejercicio 3: Control de Servomotor**
    Escribe la función `mover_servo(grados)` que reciba un ángulo y muestre: *"Girando servomotor a [grados]°."*
* **Ejercicio 4: Encendido de Actuadores**
    Crea `activar_rele(pin, estado)` que reciba el número de pin y el estado (ej. "HIGH" o "LOW") e imprima: *"El pin [pin] ha cambiado a estado [estado]."*
* **Ejercicio 5: Calibración de Sensor**
    Diseña `calibrar_sensor(tipo_sensor)` que reciba un string y muestre: *"Calibrando sensor de [tipo_sensor]... Offset ajustado a 0."*

### III. Funciones con retorno y sin parámetros (`def nombre(): return`)
* **Ejercicio 6: Voltaje de Referencia**
    Crea `obtener_voltaje_referencia()` que simplemente retorne el valor flotante `5.0`. Imprime este valor en el programa principal.
* **Ejercicio 7: Estado de Red Industrial**
    Escribe `checar_red_modbus()` que retorne el string `"Online"`.

### IV. Funciones con retorno y con parámetros (`def nombre(parametros): return`)
* **Ejercicio 8: Conversión Analógico a Digital (ADC)**
    Diseña `calcular_voltaje_adc(valor_adc, resolucion)` que transforme un valor digital a voltaje físico multiplicando `valor_adc * (5.0 / resolucion)`. Retorna el resultado.
* **Ejercicio 9: Conversión de Velocidad**
    Crea `rpm_a_rads(rpm)` que reciba revoluciones por minuto, aplique la fórmula `rpm * (0.10472)` y retorne los radianes por segundo.
* **Ejercicio 10: Filtro de Ruido (Paso Bajo Simple)**
    Escribe `aplicar_filtro(valor_actual, valor_previo, alfa)` que calcule y retorne: `(alfa * valor_actual) + ((1 - alfa) * valor_previo)`.

---

## 2. Robótica

### I. Funciones sin retorno y sin parámetros (`def nombre():`)
* **Ejercicio 1: Posición Home**
    Crea `ir_a_home()` que imprima: *"Brazo robótico regresando a coordenadas articulares (0,0,0,0)."*
* **Ejercicio 2: Cierre de Pinza (Gripper)**
    Diseña `cerrar_gripper()` que imprima: *"Efector final activado: Gripper cerrado con presión máxima."*

### II. Funciones sin retorno y con parámetros (`def nombre(parametros):`)
* **Ejercicio 3: Movimiento Articular**
    Escribe `mover_articulacion(id_motor, angulo)` que imprima: *"Motor #[id_motor] rotando a [angulo] grados."*
* **Ejercicio 4: Velocidad de Trayectoria**
    Crea `establecer_velocidad(mm_por_segundo)` que imprima: *"Velocidad del TCP (Tool Center Point) ajustada a [mm_por_segundo] mm/s."*
* **Ejercicio 5: Alerta Visual del Robot**
    Diseña `cambiar_luz_estado(color)` que reciba un color de estado e imprima: *"Luz de la torre cambiada a [color]."*

### III. Funciones con retorno y sin parámetros (`def nombre(): return`)
* **Ejercicio 6: Nivel de Batería (AGV)**
    Crea `leer_bateria_agv()` que simule la lectura y retorne `85.5` (porcentaje).
* **Ejercicio 7: Carga Máxima Permitida**
    Escribe `obtener_payload_maximo()` que retorne `15.0` (representando kg).

### IV. Funciones con retorno y con parámetros (`def nombre(parametros): return`)
* **Ejercicio 8: Cinemática Directa (2D Simple)**
    Diseña `calcular_posicion_x(longitud_eslabon, angulo)` que reciba la longitud y el ángulo, calcule `longitud_eslabon * math.cos(angulo)` y retorne la posición en X. *(Nota: Importa la librería math).*
* **Ejercicio 9: Cálculo de Distancia Euclidiana**
    Crea `distancia_al_objetivo(x1, y1, x2, y2)` que aplique la fórmula de distancia entre dos puntos y retorne el resultado.
* **Ejercicio 10: Torque Estático Requerido**
    Escribe `calcular_torque(masa, distancia_centro_masa)` que multiplique la masa por la gravedad (9.81) y luego por la distancia, retornando el torque en Nm.

---

## 3. Sistemas Computacionales

### I. Funciones sin retorno y sin parámetros (`def nombre():`)
* **Ejercicio 1: Limpieza de Caché**
    Crea `limpiar_cache_sistema()` que imprima: *"Archivos temporales borrados. Memoria caché liberada."*
* **Ejercicio 2: Arranque de Servidor**
    Diseña `iniciar_servidor()` que imprima: *"Servidor local corriendo en http://localhost:8080."*

### II. Funciones sin retorno y con parámetros (`def nombre(parametros):`)
* **Ejercicio 3: Creación de Usuario**
    Escribe `crear_usuario(username, rol)` que imprima: *"Usuario [username] registrado exitosamente con privilegios de [rol]."*
* **Ejercicio 4: Registro de Logs**
    Crea `escribir_log(mensaje, nivel_alerta)` que muestre en pantalla: *"[nivel_alerta] - [mensaje]".*
* **Ejercicio 5: Asignación de Permisos de Archivo**
    Diseña `cambiar_permisos(archivo, codigo_chmod)` que imprima: *"Permisos del archivo [archivo] actualizados a [codigo_chmod]."*

### III. Funciones con retorno y sin parámetros (`def nombre(): return`)
* **Ejercicio 6: Ping de Respuesta**
    Crea `ping_local()` que retorne la cadena de texto `"127.0.0.1"`.
* **Ejercicio 7: Memoria RAM Libre**
    Escribe `obtener_ram_disponible()` que retorne el valor entero `4096` (simulando megabytes).

### IV. Funciones con retorno y con parámetros (`def nombre(parametros): return`)
* **Ejercicio 8: Validación de Contraseña**
    Diseña `es_password_seguro(password, longitud_minima)` que retorne `True` si la longitud del password es mayor o igual a la mínima, y `False` de lo contrario.
* **Ejercicio 9: Conversión de Almacenamiento**
    Crea `bytes_a_megabytes(bytes_size)` que divida el valor recibido entre `1048576` y retorne el resultado.
* **Ejercicio 10: Balanceador de Carga**
    Escribe `asignar_servidor(id_usuario, total_servidores)` que utilice el operador módulo (`%`) para retornar el número de servidor asignado: `id_usuario % total_servidores`.

---

## 4. Ingeniería Mecánica

### I. Funciones sin retorno y sin parámetros (`def nombre():`)
* **Ejercicio 1: Arranque de Torno CNC**
    Crea `iniciar_cnc()` que imprima: *"Husillo activado y sistemas de seguridad verificados."*
* **Ejercicio 2: Sistema de Refrigeración**
    Diseña `activar_refrigerante()` que imprima: *"Bomba de líquido refrigerante ENCENDIDA."*

### II. Funciones sin retorno y con parámetros (`def nombre(parametros):`)
* **Ejercicio 3: Aplicación de Fuerza**
    Escribe `aplicar_carga(magnitud, eje)` que imprima: *"Se aplicó una carga de [magnitud] N sobre el eje [eje]."*
* **Ejercicio 4: Configuración de Engranaje**
    Crea `set_engranaje(dientes, modulo)` que muestre: *"Engranaje configurado: Z=[dientes], Módulo=[modulo]."*
* **Ejercicio 5: Alerta de Fatiga Térmica**
    Diseña `alerta_temperatura(temp_actual)` que imprima: *"CUIDADO: Temperatura del material en [temp_actual] °C."*

### III. Funciones con retorno y sin parámetros (`def nombre(): return`)
* **Ejercicio 6: Constante de Gravedad**
    Crea `obtener_gravedad()` que retorne estrictamente `9.81`.
* **Ejercicio 7: Presión Nominal de Aceite**
    Escribe `leer_presion_aceite()` que simule una lectura de manómetro y retorne `45.5` (PSI).

### IV. Funciones con retorno y con parámetros (`def nombre(parametros): return`)
* **Ejercicio 8: Esfuerzo Axial**
    Diseña `calcular_esfuerzo(fuerza, area)` que aplique la fórmula (Fuerza / Área) y retorne el esfuerzo en Pascales.
* **Ejercicio 9: Cálculo de Relación de Transmisión**
    Crea `relacion_transmision(dientes_motor, dientes_salida)` que divida los dientes de salida entre los dientes del motor y retorne la relación.
* **Ejercicio 10: Eficiencia Térmica**
    Escribe `calcular_eficiencia(trabajo_util, calor_suministrado)` que divida el trabajo entre el calor y lo multiplique por 100, retornando el porcentaje.

---

## 5. Ingeniería Industrial

### I. Funciones sin retorno y sin parámetros (`def nombre():`)
* **Ejercicio 1: Inicio de Turno**
    Crea `iniciar_turno_matutino()` que imprima: *"Turno matutino registrado. Máquinas en operación."*
* **Ejercicio 2: Paro de Línea (Andon)**
    Diseña `activar_sistema_andon()` que imprima: *"LÍNEA DETENIDA: Se requiere soporte de mantenimiento en la estación."*

### II. Funciones sin retorno y con parámetros (`def nombre(parametros):`)
* **Ejercicio 3: Trazabilidad de Lote**
    Escribe `registrar_lote(num_lote, cantidad)` que imprima: *"Lote #[num_lote] ingresado con [cantidad] unidades."*
* **Ejercicio 4: Asignación de Operarios**
    Crea `asignar_estacion(nombre_operario, nombre_estacion)` que muestre: *"El operador [nombre_operario] ha sido asignado a la estación [nombre_estacion]."*
* **Ejercicio 5: Registro de Mermas**
    Diseña `reportar_merma(cantidad_defectuosa, razon)` que imprima: *"Merma registrada: [cantidad_defectuosa] piezas por motivo de [razon]."*

### III. Funciones con retorno y sin parámetros (`def nombre(): return`)
* **Ejercicio 6: Meta de Producción**
    Crea `obtener_meta_diaria()` que retorne el entero `1500` (piezas).
* **Ejercicio 7: Tiempo de Ciclo Estándar**
    Escribe `leer_tiempo_ciclo()` que retorne el valor `45.0` (segundos).

### IV. Funciones con retorno y con parámetros (`def nombre(parametros): return`)
* **Ejercicio 8: Disponibilidad de Máquina (OEE)**
    Diseña `calcular_disponibilidad(tiempo_operativo, tiempo_planificado)` que divida el operativo entre el planificado y retorne el decimal.
* **Ejercicio 9: Takt Time**
    Crea `calcular_takt_time(tiempo_disponible_seg, demanda_cliente)` que divida el tiempo disponible entre la demanda y retorne los segundos por pieza requeridos.
* **Ejercicio 10: Productividad Laboral**
    Escribe `calcular_productividad(piezas_producidas, horas_hombre)` que retorne la cantidad de piezas procesadas por cada hora de trabajo.

---

## 6. Ingeniería de Videojuegos

### I. Funciones sin retorno y sin parámetros (`def nombre():`)
* **Ejercicio 1: Spawn del Jugador**
    Crea `generar_jugador()` que imprima: *"Player1 instanciado en el punto de Spawn inicial."*
* **Ejercicio 2: Pausa de Juego**
    Diseña `pausar_juego()` que imprima: *"Time.timeScale = 0. Menú de pausa abierto."*

### II. Funciones sin retorno y con parámetros (`def nombre(parametros):`)
* **Ejercicio 3: Recepción de Daño**
    Escribe `aplicar_dano(cantidad_dano)` que imprima: *"El jugador ha recibido [cantidad_dano] puntos de daño."*
* **Ejercicio 4: Controlador de Audio (SFX)**
    Crea `reproducir_sfx(nombre_sonido, volumen)` que muestre: *"Reproduciendo clip [nombre_sonido] al [volumen]% de volumen."*
* **Ejercicio 5: Transición de Niveles**
    Diseña `cargar_escena(nombre_escena)` que imprima: *"Pantalla de carga: Transicionando a la escena [nombre_escena]."*

### III. Funciones con retorno y sin parámetros (`def nombre(): return`)
* **Ejercicio 6: Puntaje Máximo (High Score)**
    Crea `obtener_high_score()` que lea los datos guardados y retorne `9999`.
* **Ejercicio 7: Tirada Aleatoria (RNG)**
    Escribe `tirar_dado()` que importe la librería `random` y retorne un entero entre 1 y 6 usando `random.randint(1, 6)`.

### IV. Funciones con retorno y con parámetros (`def nombre(parametros): return`)
* **Ejercicio 8: Curva de Experiencia (RPG)**
    Diseña `calcular_xp_necesaria(nivel_actual)` que multiplique el nivel actual por 100 y le sume 50, retornando la XP requerida para subir al siguiente nivel.
* **Ejercicio 9: Multiplicador Crítico**
    Crea `calcular_dano_critico(dano_base, multiplicador)` que retorne la multiplicación de ambos parámetros.
* **Ejercicio 10: Clamp de Barra de Salud**
    Escribe `limitar_salud(salud_actual, salud_maxima)` que verifique: si `salud_actual > salud_maxima`, retorne la `salud_maxima`; de lo contrario, retorne la `salud_actual`.

---

## 7. Animación Digital

### I. Funciones sin retorno y sin parámetros (`def nombre():`)
* **Ejercicio 1: Iniciar Renderizado**
    Crea `iniciar_render()` que imprima: *"Motor de render activado. Calculando paso de luces y sombras."*
* **Ejercicio 2: Papel Cebolla (Onion Skinning)**
    Diseña `activar_papel_cebolla()` que imprima: *"Onion Skin activado: Mostrando fotogramas adyacentes con opacidad reducida."*

### II. Funciones sin retorno y con parámetros (`def nombre(parametros):`)
* **Ejercicio 3: Keyframes e Interpolación**
    Escribe `interpolar_movimiento(frame_inicio, frame_fin)` que imprima: *"Generando curvas de interpolación entre los fotogramas [frame_inicio] y [frame_fin]."*
* **Ejercicio 4: Asignación de Texturas**
    Crea `asignar_material(nombre_malla, tipo_material)` que muestre: *"Se aplicó el shader [tipo_material] al objeto [nombre_malla]."*
* **Ejercicio 5: Configuración de Luces**
    Diseña `ajustar_iluminacion(intensidad, temperatura_color)` que imprima: *"Luz principal configurada a [intensidad] lúmenes y [temperatura_color] Kelvin."*

### III. Funciones con retorno y sin parámetros (`def nombre(): return`)
* **Ejercicio 6: Framerate del Proyecto**
    Crea `obtener_fps()` que retorne el entero `24` (estándar de cine).
* **Ejercicio 7: Resolución de Salida**
    Escribe `obtener_resolucion()` que retorne la cadena de texto `"1920x1080"`.

### IV. Funciones con retorno y con parámetros (`def nombre(parametros): return`)
* **Ejercicio 8: Total de Fotogramas (Timeline)**
    Diseña `calcular_fotogramas_totales(minutos_animacion, fps)` que multiplique los minutos por 60 y luego por los fps, retornando la longitud total de la línea de tiempo.
* **Ejercicio 9: Escala 3D**
    Crea `escalar_modelo(tamano_original, factor_escala)` que retorne el nuevo tamaño tras multiplicar ambos parámetros.
* **Ejercicio 10: Estimación de Tiempo de Render**
    Escribe `tiempo_render_estimado(frames_restantes, seg_por_frame)` que multiplique los valores y los divida entre 60 para retornar los minutos estimados que tardará la computadora en terminar.
