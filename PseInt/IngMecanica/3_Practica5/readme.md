# Ingeniería Mecánica 

## Instrucción: Mientras (while)

### Monitoreo de Presión de Aceite


Enunciado: Solicita la presión de aceite de un motor en PSI. Mientras la presión sea menor a 20 PSI, muestra "Alerta: Presión baja, detenga el motor" y vuelve a pedir la lectura simulando el ajuste del sistema. Al llegar a 20 o más, muestra "Presión estabilizada".
Mini-Rúbrica: Inicialización de variable (20%) | Condición while presion < 20: (40%) | Actualización de variable (20%) | Mensajes técnicos (20%).

Enfriamiento de Turbina


Enunciado: Lee la temperatura de una turbina. Mientras sea mayor a 80°C, imprime "Activando ventiladores de enfriamiento..." y reduce la temperatura en 5°C por ciclo. Al finalizar, imprime "Temperatura segura para apagado".
Mini-Rúbrica: Variable térmica (20%) | Lógica de decremento (40%) | Condición relacional (20%) | Script Python (20%).

### Desgaste de Broca en Torno CNC


Enunciado: Pide el porcentaje de vida útil de una broca. Mientras sea mayor al 10%, imprime "Maquinando pieza... vida útil restante: [X]%". Reduce un 2% en cada iteración. Al final, muestra "Reemplazo de broca requerido".
Mini-Rúbrica: Variable de porcentaje (20%) | Ciclo while (40%) | Lógica de mecanizado (20%) | Script Python (20%).

## Instrucción: Simulación Repetir ... Hasta Que (while True: ... break)

### Calibración de Válvula Neumática
Enunciado: Muestra un menú: "1. Abrir Válvula, 2. Cerrar Válvula, 3. Purgar, 4. Salir". Ejecuta la acción seleccionada. Repite el menú hasta que el usuario seleccione 4.
Nota Python (Simulación Do-While): En Python, esto se implementa iniciando un ciclo while True:, mostrando el menú, evaluando opciones con if/elif y utilizando if opcion == 4: break para detener el bucle infinito.

### Validación de Torque Seguro


Enunciado: Solicita al usuario ingresar el torque aplicado a un birlo en Nm. Repite la solicitud hasta que el valor ingresado esté exactamente entre 110 y 120 Nm. Al lograrlo, muestra "Torque certificado".
Nota Python (Simulación Do-While): Crea un ciclo while True:, pide el valor numérico del torque y evalúa if 110 <= torque <= 120: break al final del bloque para salir si se cumple.

### Prueba de Fatiga en Suspensión
Enunciado: Imprime "Aplicando carga al resorte...". Pregunta al usuario si el resorte presentó fisuras (1 = Sí, 0 = No). Repite el ciclo hasta que el usuario ingrese 1, y entonces muestra "Límite de fatiga alcanzado. Fin de prueba".
Nota Python (Simulación Do-While): Utiliza while True: para hacer la pregunta constantemente y romper el ciclo iterativo usando if fisura == 1: break cuando el resorte falle.

## Instrucción: Para (for ... in range())

### Simulación de Ciclos de Motor de 4 Tiempos
Enunciado: Solicita el número de RPM a simular (ej. 10). Usa un ciclo for desde 1 hasta ese número para imprimir: "Ciclo [i]: Admisión - Compresión - Combustión - Escape".
Mini-Rúbrica: Uso correcto de range(1, rpm + 1) (40%) | Sintaxis for (20%) | Mensaje termodinámico (20%) | Script (20%).

### Análisis de Esfuerzos en Viga
Enunciado: Un sensor lee el esfuerzo en 8 puntos equidistantes de una viga. Usa un ciclo for del 1 al 8. En cada iteración, pide ingresar la tensión en MPa y acumula el total para calcular un promedio final.
Mini-Rúbrica: Variable acumuladora inicializada (20%) | Lógica for i in range(8): (40%) | Cálculo de promedio (40%).

### Cálculo de Engranes (Relación de Transmisión)


Enunciado: Pide el número de dientes del engrane motriz. Usa un ciclo for con engranes conducidos hipotéticos de 10, 20, 30, 40 y 50 dientes (con paso de 10). Calcula e imprime la relación de transmisión en cada paso.
Mini-Rúbrica: Uso de los 3 parámetros en range(10, 51, 10) (50%) | Operación de división (30%) | Impresión print (20%).

### Lectura Multipunto de Termopares

Enunciado: Usa un ciclo for simulando la lectura de 5 termopares en un bloque de motor. Pide la temperatura de cada uno. Si alguna supera los 100°C, imprime un warning inmediato.
Mini-Rúbrica: Lógica de iteración (30%) | Condicional if anidado (50%) | Script Python (20%).
