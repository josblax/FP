# Ingeniería Robótica 

## Instrucción: Mientras (while)

### Evasión de Obstáculos (Sensor LiDAR)

Enunciado: Pide la distancia en cm al obstáculo más cercano. Mientras la distancia sea > 15 cm, imprime "Motores avanzando...". Pide la distancia nuevamente. Si es <= 15, "Obstáculo detectado: Frenando y recalculando ruta".
Mini-Rúbrica: Algoritmia de navegación lógica (40%) | Operadores comparativos correctos (40%) | Simulación hardware (20%).

### Retorno Automático (RTH) por Batería

Enunciado: Solicita el voltaje de la celda de un Dron. Mientras sea mayor a 3.5V, imprime "Volando en misión". Resta 0.1V por iteración (descarga). Al bajar de 3.5V, "Batería crítica: Iniciando protocolo RTH".
Mini-Rúbrica: Resta y actualización de flotantes voltaje -= 0.1 (50%) | Condición relacional de vuelo (50%).

### Mantenimiento de Equilibrio (Péndulo Invertido)

Enunciado: Pide el ángulo de inclinación del robot. Mientras sea distinto de 90 grados, indica "Aplicando torque compensatorio..." y pide un nuevo ángulo. Al ingresar 90, "Estabilidad vertical alcanzada".
Mini-Rúbrica: Evaluación estricta != 90 (50%) | Ejecución lógica de realimentación (50%).

## Instrucción: Simulación Repetir ... Hasta Que (while True: ... break)

### Calibración de Giroscopio IMU

Enunciado: Pide ingresar 1 si el dron está completamente inmóvil, o 0 si hay vibración. Repite "Calibración fallida, mantenga quieto el equipo" hasta que se ingrese 1. Entonces: "IMU inicializada con éxito".
Nota Python (Simulación Do-While): Despliega un bucle iterativo de estado while True: evaluando la variable sensórica y si la entrada confirma la inmovilidad, rompe el ciclo de calibración con if estable == 1: break.

### Cierre de Gripper hasta Detección de Fuerza
Enunciado: Imprime "Cerrando dedos del Gripper...". Pide al usuario la fuerza actual leída en Newtons. Repite el ciclo hasta que la fuerza llegue a 15N. Al llegar, "Sujeción de objeto asegurada".
Nota Python (Simulación Do-While): Inicia el cierre de dedos simulado en un while True:, adquiere el valor flotante dinámico y frena la actuación de la fuerza aplicando inmediatamente un if fuerza >= 15: break.

### Búsqueda de Señal RC (Telemetría)

Enunciado: Pregunta "¿Receptor enlazado con la emisora de radio? (S/N)". Repite "Buscando frecuencia..." hasta que la respuesta sea "S". Luego "Telemetría activa, listo para armar motores".
Nota Python (Simulación Do-While): Ejecuta un bucle infinito que simule la interrogación activa del puerto de comunicaciones y establece el enlace de radio ejecutando if respuesta.upper() == "S": break.

## Instrucción: Para (for ... in range())

### Cinemática para 6 Grados de Libertad (DOF)

Enunciado: Un brazo robótico tiene 6 articulaciones. Usa un ciclo for de 1 a 6. Pide el ángulo objetivo de cada articulación y muestra "Enviando [ángulo]° al Servo/Driver número [i]".
Mini-Rúbrica: Interacción de ciclos estáticos range(1, 7) (50%) | Receptividad de variables de usuario (50%).

### Envío de Señal PWM a Cuadricóptero

Enunciado: Usa un ciclo for representando los 4 motores ESC del dron. Pide el porcentaje de aceleración general y asígnalo por igual imprimiendo "Motor [i] girando al [X]%".
Mini-Rúbrica: Ejecución estandarizada repetitiva (40%) | F-Strings de control multicóptero (60%).

### Mapeo de Entorno (Grid)

Enunciado: El robot escanea una cuadrícula de 10 celdas frente a él. Usa un ciclo for del 1 al 10. Genera un cálculo donde si la iteración es par, indica "Celda libre", y si es impar, "Celda ocupada".
Mini-Rúbrica: Manejo del operador módulo/residuo if i % 2 == 0: dentro del ciclo (70%) | Lógica robótica (30%).

### Lectura de Fotogramas en Visión Artificial

Enunciado: Pide los fotogramas a procesar (ej. 24 fps). Usa un for iterativo para simularlo. Imprime "Aplicando filtro Haar Cascade al frame [i]... Detección completada".
Mini-Rúbrica: Ciclos controlados por capturas previas (50%) | Flujo del bloque forizado (50%).
