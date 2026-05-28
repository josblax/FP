# Mecatrónica

1. Conversión Analógico a Digital (Voltaje)
Enunciado: Solicita la lectura de un sensor analógico en voltios (0 a 10V). Si supera los 5V, imprime "Activar estado Lógico ALTO (High)". SiNo, "Mantener en estado Lógico BAJO (Low)".
Mini-Rúbrica: Manejo de voltajes (20%) | Condicional Si..Entonces (40%) | Lógica de microcontroladores (20%) | DFD e imágenes completas (20%).

2. Nivel de Tanque por Ultrasónico
Enunciado: Lee la distancia detectada al nivel del agua dentro de un tanque en cm. Si es menor a 10 cm, indica "Tanque lleno, apagar bomba de llenado". SiNo, "Bomba trabajando".
Mini-Rúbrica: Captura de distancia (20%) | Lógica relacional inversa (40%) | Aplicación de fluidos (20%) | DFD e imágenes completas (20%).

3. Sobrecarga de Corriente del Motor
Enunciado: Pide el consumo de corriente actual del motor en Amperes. Si es mayor a 15, alerta "Termomagnético disparado: Cortocircuito o motor trabado". SiNo, "Consumo de corriente nominal".
Mini-Rúbrica: Variable en Amperes (20%) | Uso del SiNo (40%) | Mensaje eléctrico (20%) | DFD e imágenes completas (20%).

4. Sincronía de Banda Transportadora
Enunciado: Solicita la velocidad de la banda secundaria en metros/segundo. Si no es exactamente igual a 2.5 (velocidad de la primaria), imprime "Fallo de sincronización: Ajustar inversor VFD". SiNo, "Bandas sincronizadas".
Mini-Rúbrica: Lectura con punto decimal (30%) | Operador de desigualdad/igualdad (30%) | Mensaje de automatización (20%) | DFD e imágenes completas (20%).

5. Presión Neumática para Prensado
Enunciado: Lee la presión del compresor neumático en Bar. Si está por debajo de 6, muestra "Presión insuficiente para extender el cilindro. Esperando compresor...". SiNo, "Ejecutando secuencia neumática".
Mini-Rúbrica: Lectura de bares (20%) | Condicional < (40%) | Lógica electroneumática (20%) | DFD e imágenes completas (20%).

6. Pulsos del Encoder (Posicionamiento)
Enunciado: Pregunta el número de pulsos leídos por el encoder rotativo. Si alcanza los 1024, imprime "Revolución completa (360 grados), reiniciar contador". SiNo, "Sigue contando pulsos".
Mini-Rúbrica: Variable de contador (20%) | Lógica de igualdad = (40%) | Mensajes de control de posición (20%) | DFD e imágenes completas (20%).

7. Tiempo de Ciclo de Máquina PLC
Enunciado: Solicita el tiempo (en milisegundos) que le tomó a la máquina ensamblar una pieza. Si es mayor a 5000 ms, advierte "Cuello de botella detectado en estación". SiNo, "Tiempo de ciclo óptimo".
Mini-Rúbrica: Lectura de milisegundos (20%) | Condicional > (40%) | Lógica de manufactura (20%) | DFD e imágenes completas (20%).

8. Sensor Inductivo de Metal
Enunciado: Pide el estado del sensor inductivo (1 = metal detectado, 0 = no detectado). Si es 1, muestra "Pieza metálica confirmada, bajar taladro". SiNo, "Esperando pieza en la estación".
Mini-Rúbrica: Datos binarios (30%) | Uso de Si..Entonces (30%) | Lógica de sensores (20%) | DFD e imágenes completas (20%).

9. Control Lazo Cerrado (PID) - Error
Enunciado: Lee el valor de "Error" calculado entre la posición deseada y la actual. Si el error es igual a 0, imprime "SetPoint alcanzado, desactivar salidas". SiNo, "Continuar ajustando mediante acción PID".
Mini-Rúbrica: Variable de control (20%) | Condición = (40%) | Concepto avanzado adaptado a básico (20%) | DFD e imágenes completas (20%).

10. Barrera Fotoeléctrica de Seguridad
Enunciado: Pregunta si la barrera óptica láser fue interrumpida ("S" para sí, "N" para no). Si es "S", alerta "Intrusión humana, frenar motores inmediatamente". SiNo, "Zona segura".
Mini-Rúbrica: Manejo de cadena o carácter (30%) | Estructura condicional (30%) | Prevención de accidentes (20%) | DFD e imágenes completas (20%).
