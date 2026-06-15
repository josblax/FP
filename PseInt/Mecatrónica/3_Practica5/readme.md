# Ingeniería Mecatrónica 

## Instrucción: Mientras (while)

### Llenado de Tanque con Sensor Ultrasónico

Enunciado: Pide la distancia detectada por el sensor (en cm). Mientras la distancia sea mayor a 10 cm (tanque no lleno), sigue pidiendo lecturas indicando "Bomba de agua encendida". Al ser <= 10, "Bomba apagada, tanque lleno".
Mini-Rúbrica: Entrada de variable int/float (30%) | Condicional lógica > 10 constante (40%) | Salida mecatrónica (30%).

### Lectura de Encoder Rotativo

Enunciado: Solicita la posición en grados actuales del motor. Mientras sea diferente de 0 (Home), pide actualizar la posición e imprime "Buscando cero de máquina...". Al ingresar 0, "Home position encontrada".
Mini-Rúbrica: Condición con operador de diferencia != (50%) | Lógica de actualización (50%).

### Control Proporcional Térmico (PID Simulado)

Enunciado: Pide el Error (SetPoint - Temperatura Actual). Mientras el error absoluto sea mayor a 2, aplica un cálculo: Error = Error - 1, imprimiendo "Ajustando salida del PWM del calentador". Al acercarse a 0, "SetPoint alcanzado".
Mini-Rúbrica: Importación y/o uso de valor absoluto abs() en la condición while (60%) | Simulación lazo cerrado (40%).

## Instrucción: Simulación Repetir ... Hasta Que (while True: ... break)

### Secuencia de Arranque de Banda Transportadora

Enunciado: Pide al usuario confirmar 3 sensores: Presión de aire, Voltaje trifásico y Guarda de seguridad (Ingresar 1 para OK, 0 para Fallo). Repite hasta que la suma de los tres sea 3 (Todo OK). Muestra "Motor arrancando".
Nota Python (Simulación Do-While): Abre un bucle while True:, pide el valor individual de los 3 sensores, suma sus estados booleanos, y usa if suma == 3: break para encender el motor y avanzar el programa.

### Menú de Pantalla HMI (Human-Machine Interface)

Enunciado: Muestra un menú de operación: "1. Manual, 2. Automático, 3. Jog, 4. Apagar Panel". Repite la interfaz hasta que se seleccione 4.
Nota Python (Simulación Do-While): Ejecuta while True: para mantener la simulación de pantalla industrial activa mediante print(), analizando lógicamente y saliendo de la ejecución HMI con un if opcion == 4: break.

### Reinicio tras Paro de Emergencia

Enunciado: Imprime "Alarma: Paro de Emergencia Presionado". Pide ingresar "R" para resetear. Repite hasta que el usuario ingrese la letra "R" en mayúscula. Luego muestra "Desenclavando relés de seguridad".
Nota Python (Simulación Do-While): Usa while True: simulando un enclave electrónico estricto de seguridad industrial y libéralo verificando el string explícito usando if comando == "R": break.

## Instrucción: Para (for ... in range())

### Secuenciador Electroneumático

Enunciado: Usa un ciclo for simulando 6 pasos de una carta SFC (A+ B+ A- B- C+ C-). En cada iteración imprime "Ejecutando acción del grupo [i]".
Mini-Rúbrica: Aplicación de secuencia forzada range(1, 7) (50%) | Ejecución procedimental (50%).

### Muestreo de Señal Analógica (ADC)

Enunciado: Usa un ciclo iterativo de 10 muestras. En cada iteración pide un valor en voltios (0-5V). Suma todos los valores y al finalizar el ciclo imprime el voltaje promedio filtrado.
Mini-Rúbrica: Acumulación secuencial tipo PLC (40%) | División post-bucle (40%) | Estructuración (20%).

### Interpolación Lineal de Actuador

Enunciado: El actuador lineal debe moverse 100 mm. Usa un ciclo avanzando en incrementos de 20 mm. Imprime: "Posición actual: [i] mm... Enviando pulsos al motor a pasos".
Mini-Rúbrica: Paso (step) implementado en el range(20, 101, 20) (70%) | Sintaxis correcta Python (30%).

### Test de I/O (Entradas y Salidas PLC)

Enunciado: Solicita el número de salidas digitales a probar. Usa un for iterativo hasta ese número. Imprime "Forzando Salida Q0.[i] a TRUE por 1 segundo".
Mini-Rúbrica: Límites dinámicos (50%) | Variables f-string anidadas simulando registros Siemens (50%).
