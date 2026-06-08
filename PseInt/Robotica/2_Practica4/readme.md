## Ingeniería Robótica

### Instrucción: Mientras (While) - 3 Ejercicios

#### Evasión de Obstáculos (Sensor LiDAR)
Enunciado: Pide la distancia en cm al obstáculo más cercano. Mientras la distancia sea > 15 cm, imprime "Motores avanzando...". Pide la distancia nuevamente. Si es <= 15, "Obstáculo detectado: Frenando y recalculando ruta".
Mini-Rúbrica: Control de ciclo de navegación (40%) | Lógica relacional (30%) | Robótica móvil (10%) | DFD (20%).

#### Retorno Automático (RTH) por Batería
Enunciado: Solicita el voltaje de la celda de un Dron. Mientras sea mayor a 3.5V, imprime "Volando en misión". Resta 0.1V por iteración (descarga). Al bajar de 3.5V, "Batería crítica: Iniciando protocolo RTH".
Mini-Rúbrica: Decremento con punto flotante (40%) | Condición de parada (30%) | UAV/Drones (10%) | DFD (20%).

#### Mantenimiento de Equilibrio (Péndulo Invertido)
Enunciado: Pide el ángulo de inclinación del robot. Mientras sea distinto de 90 grados, indica "Aplicando torque compensatorio..." y pide un nuevo ángulo. Al ingresar 90, "Estabilidad vertical alcanzada".
Mini-Rúbrica: Operador de diferencia (40%) | Lógica iterativa sensórica (30%) | Dinámica de control (10%) | DFD (20%).

### Instrucción: Repetir ... Hasta Que (Do-While) - 3 Ejercicios

#### Calibración de Giroscopio IMU
Enunciado: Pide ingresar 1 si el dron está completamente inmóvil, o 0 si hay vibración. Repite "Calibración fallida, mantenga quieto el equipo" hasta que se ingrese 1. Entonces: "IMU inicializada con éxito".
Mini-Rúbrica: Simulación de sensor booleano (40%) | Condición estricta (30%) | Electrónica (10%) | DFD (20%).

#### Cierre de Gripper hasta Detección de Fuerza
Enunciado: Imprime "Cerrando dedos del Gripper...". Pide al usuario la fuerza actual leída en Newtons. Repite el ciclo hasta que la fuerza llegue a 15N. Al llegar, "Sujeción de objeto asegurada".
Mini-Rúbrica: Ciclo de retroalimentación de fuerza (40%) | Lectura dinámica (30%) | Manipuladores (10%) | DFD (20%).

#### Búsqueda de Señal RC (Telemetría)
Enunciado: Pregunta "¿Receptor enlazado con la emisora de radio? (S/N)". Repite "Buscando frecuencia..." hasta que la respuesta sea "S". Luego "Telemetría activa, listo para armar motores".
Mini-Rúbrica: Comparación de cadenas de texto (40%) | Bucle preventivo (30%) | Comunicaciones RF (10%) | DFD (20%).

### Instrucción: Para (For) - 4 Ejercicios

#### Cinemática para 6 Grados de Libertad (DOF)
Enunciado: Un brazo robótico tiene 6 articulaciones. Usa un ciclo Para de 1 a 6. Pide el ángulo objetivo de cada articulación y muestra "Enviando [ángulo]° al Servo/Driver número [i]".
Mini-Rúbrica: Bucle 1 a 6 fijo (30%) | Concatenación de texto y variables (40%) | Cinemática de manipuladores (10%) | DFD (20%).

#### Envío de Señal PWM a Cuadricóptero
Enunciado: Usa un ciclo Para de 1 a 4 representando los motores ESC del dron. Pide el porcentaje de aceleración general y asígnalo por igual imprimiendo "Motor [i] girando al [X]%".
Mini-Rúbrica: Simulación de asignación múltiple (40%) | Ciclo básico (30%) | Control UAV (10%) | DFD (20%).

#### Mapeo de Entorno (Grid)
Enunciado: El robot escanea una cuadrícula de 10 celdas frente a él. Usa un ciclo Para del 1 al 10. Genera un cálculo donde si i es par, indica "Celda [i] libre", y si es impar, "Celda [i] ocupada por objeto".
Mini-Rúbrica: Uso del operador Mod o lógica par/impar (50%) | Bucle secuencial (20%) | Algoritmos de navegación (10%) | DFD (20%).

#### Lectura de Fotogramas en Visión Artificial
Enunciado: Pide los fotogramas a procesar (ej. 24 fps). Usa un Para desde 1 hasta N. Imprime "Aplicando filtro Haar Cascade al frame [i]... Detección completada".
Mini-Rúbrica: Límite proporcionado por entrada (40%) | Estructura iterativa (30%) | Computer Vision (10%) | DFD (20%).
