## Ingeniería Mecatrónica

### Instrucción: Mientras (While) - 3 Ejercicios

#### Llenado de Tanque con Sensor Ultrasónico
Enunciado: Pide la distancia detectada por el sensor (en cm). Mientras la distancia sea mayor a 10 cm (tanque no lleno), sigue pidiendo lecturas indicando "Bomba de agua encendida". Al ser <= 10, "Bomba apagada, tanque lleno".
Mini-Rúbrica: Lectura sensórica (20%) | Lógica condicional inversa (40%) | Automatización (20%) | DFD (20%).

#### Lectura de Encoder Rotativo
Enunciado: Solicita la posición en grados actuales del motor. Mientras sea diferente de 0 (Home), pide actualizar la posición e imprime "Buscando cero de máquina...". Al ingresar 0, "Home position encontrada".
Mini-Rúbrica: Condición Distinto de (40%) | Ciclo de búsqueda (30%) | CNC/Robótica (10%) | DFD (20%).

#### Control Proporcional Térmico (PID Simulado)
Enunciado: Pide el Error (SetPoint - Temperatura Actual). Mientras el error absoluto sea mayor a 2, aplica un cálculo: Error = Error - 1, imprimiendo "Ajustando salida del PWM del calentador". Al acercarse a 0, "SetPoint alcanzado".
Mini-Rúbrica: Lógica matemática de control (40%) | Variable de Error (30%) | Teoría de control (10%) | DFD (20%).

### Instrucción: Repetir ... Hasta Que (Do-While) - 3 Ejercicios

#### Secuencia de Arranque de Banda Transportadora
Enunciado: Pide al usuario confirmar 3 sensores: Presión de aire, Voltaje trifásico y Guarda de seguridad (Ingresar 1 para OK, 0 para Fallo). Repite hasta que la suma de los tres sea 3 (Todo OK). Muestra "Motor arrancando".
Mini-Rúbrica: Acumulación múltiple en un paso (40%) | Condición de parada (30%) | Seguridad industrial (10%) | DFD (20%).

#### Menú de Pantalla HMI (Human-Machine Interface)
Enunciado: Muestra un menú de operación: "1. Manual, 2. Automático, 3. Jog, 4. Apagar Panel". Repite la interfaz hasta que se seleccione 4.
Mini-Rúbrica: Menú interactivo (30%) | Uso de Segun (40%) | Automatización (10%) | DFD (20%).

#### Reinicio tras Paro de Emergencia
Enunciado: Imprime "Alarma: Paro de Emergencia Presionado". Pide ingresar "R" para resetear. Repite hasta que el usuario ingrese la letra "R" en mayúscula. Luego muestra "Desenclavando relés de seguridad".
Mini-Rúbrica: Captura de caracteres exactos (40%) | Ciclo infinito defensivo (30%) | Estándares eléctricos (10%) | DFD (20%).

### Instrucción: Para (For) - 4 Ejercicios

#### Secuenciador Electroneumático
Enunciado: Usa un ciclo Para de 1 a 6 simulando 6 pasos de una carta SFC (A+ B+ A- B- C+ C-). En cada iteración imprime "Ejecutando acción del grupo [i]".
Mini-Rúbrica: Iterador básico (30%) | Concepto de máquina de estados (40%) | Neumática (10%) | DFD (20%).

#### Muestreo de Señal Analógica (ADC)
Enunciado: Usa un Para de 1 a 10. En cada iteración pide un valor en voltios (0-5V). Suma todos los valores y al finalizar el ciclo imprime el voltaje promedio filtrado.
Mini-Rúbrica: Acumulador analógico (40%) | Cálculo de media móvil simple (30%) | Microcontroladores (10%) | DFD (20%).

#### Interpolación Lineal de Actuador
Enunciado: El actuador lineal debe moverse 100 mm. Usa un ciclo Para avanzando en incrementos de 20 mm. Imprime: "Posición actual: [i] mm... Enviando pulsos al motor a pasos".
Mini-Rúbrica: Ciclo con salto/paso configurado (50%) | Lógica de interpolación (20%) | Robótica cartesiana (10%) | DFD (20%).

#### Test de I/O (Entradas y Salidas PLC)
Enunciado: Solicita el número de salidas digitales a probar. Usa un Para desde 1 hasta ese número. Imprime "Forzando Salida Q0.[i] a TRUE por 1 segundo".
Mini-Rúbrica: Límite variable (40%) | Direccionamiento Siemens/IEC simulado (30%) | PLC (10%) | DFD (20%).
