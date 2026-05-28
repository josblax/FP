# Robótica

1. Retorno por Batería
Enunciado: Solicita el porcentaje de batería actual de un dron autónomo. Si es menor o igual a 15, imprime "Iniciando protocolo de regreso a base (RTH)". SiNo, "Continuar misión de vuelo".
Mini-Rúbrica: Captura de porcentaje (20%) | Lógica <= (40%) | Mensajes de navegación (20%) | DFD e imágenes completas (20%).

2. Evasión de Obstáculos
Enunciado: Lee la distancia en cm que detecta el sensor ultrasónico del robot móvil. Si la distancia es menor a 30, muestra "Frenar y girar a la derecha". SiNo, "Avanzar en línea recta".
Mini-Rúbrica: Lectura de sensor (20%) | Lógica < (40%) | Cinemática de robot móvil (20%) | DFD e imágenes completas (20%).

3. Capacidad de Carga (Payload)
Enunciado: Pide el peso del objeto que intentará levantar el brazo robótico (en kg). Si supera los 10 kg, advierte "Error: Sobrecarga en motores de las articulaciones". SiNo, "Cerrar gripper y levantar".
Mini-Rúbrica: Entrada de payload (20%) | Condicional relacional (40%) | Acción de actuador (20%) | DFD e imágenes completas (20%).

4. Temperatura de Servomotor
Enunciado: Solicita la temperatura del servomotor en el hombro del robot. Si pasa los 70°C, indica "Paro de emergencia por sobrecalentamiento del driver". SiNo, "Temperatura en rango operativo".
Mini-Rúbrica: Variables térmicas (20%) | Lógica de emergencia (40%) | Lógica de Escribir (20%) | DFD e imágenes completas (20%).

5. Límite de Articulación (Cinemática)
Enunciado: Pregunta el ángulo objetivo (en grados) para girar la base del robot. Si es mayor a 180, muestra "Error: Ángulo fuera del límite físico". SiNo, "Enviando pulsos para girar base".
Mini-Rúbrica: Lectura angular (20%) | Lógica > (40%) | Lógica de movimiento (20%) | DFD e imágenes completas (20%).

6. Pérdida de Señal Inalámbrica
Enunciado: Pide el tiempo en milisegundos (ping) entre el controlador y el robot. Si supera los 500 ms, advierte "Señal débil: Deteniendo acciones por seguridad". SiNo, "Teleoperación fluida".
Mini-Rúbrica: Lectura de ms (20%) | Condición relacional (40%) | Mensaje de comunicaciones (20%) | DFD e imágenes completas (20%).

7. Calibración (Home Position)
Enunciado: Pregunta si el sensor de final de carrera está presionado (1 para presionado, 0 para no). Si es 1, imprime "Posición Home alcanzada, reiniciar coordenadas a cero". SiNo, "Mover motor hacia la posición Home".
Mini-Rúbrica: Entrada binaria 1/0 (30%) | Condición de igualdad (30%) | Lógica de encoders (20%) | DFD e imágenes completas (20%).

8. Detección de Colores para Clasificación
Enunciado: Lee un número para un color detectado por visión artificial (1 = Rojo, 2 = Azul). Si lee 1, muestra "Activar cilindro de descarte". SiNo, "Dejar pasar el objeto azul por la banda".
Mini-Rúbrica: Selección discreta (30%) | Uso de Si..Entonces (30%) | Aplicación industrial (20%) | DFD e imágenes completas (20%).

9. Fuerza de Agarre del Gripper
Enunciado: Solicita la lectura del sensor de fuerza en Newtons. Si sobrepasa los 50N, indica "Aflojar pinzas: Riesgo de aplastar la pieza (frágil)". SiNo, "Mantener sujeción estable".
Mini-Rúbrica: Lectura en Newtons (20%) | Lógica condicional > (40%) | Control de fuerza (20%) | DFD e imágenes completas (20%).

10. Secuencia de Apagado
Enunciado: Pregunta si se ha oprimido el Botón de Paro de Emergencia (1 para Sí, 0 para No). Si es 1, imprime "Corte total de energía a los actuadores". SiNo, "Estado de monitoreo constante".
Mini-Rúbrica: Lógica booleana (30%) | Uso estricto de Escribir/Leer (30%) | Seguridad robótica (20%) | DFD e imágenes completas (20%).
