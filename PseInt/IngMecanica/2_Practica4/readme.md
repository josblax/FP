## Ingeniería Mecánica

### Instrucción: Mientras (While) - 3 Ejercicios

#### Monitoreo de Presión de Aceite
Enunciado: Solicita la presión de aceite de un motor en PSI. Mientras la presión sea menor a 20 PSI, muestra "Alerta: Presión baja, detenga el motor" y vuelve a pedir la lectura simulando el ajuste del sistema. Al llegar a 20 o más, muestra "Presión estabilizada".
Mini-Rúbrica: Inicialización de variable (20%) | Condición Mientras < 20 (40%) | Actualización de variable (20%) | Mensajes técnicos (20%).

#### Enfriamiento de Turbina
Enunciado: Lee la temperatura de una turbina. Mientras sea mayor a 80°C, imprime "Activando ventiladores de enfriamiento..." y reduce la temperatura en 5°C por ciclo. Al finalizar, imprime "Temperatura segura para apagado".
Mini-Rúbrica: Variable térmica (20%) | Lógica de decremento (40%) | Condición relacional (20%) | DFD (20%).

#### Desgaste de Broca en Torno CNC
Enunciado: Pide el porcentaje de vida útil de una broca. Mientras sea mayor al 10%, imprime "Maquinando pieza... vida útil restante: [X]%". Reduce un 2% en cada iteración. Al final, muestra "Reemplazo de broca requerido".
Mini-Rúbrica: Variable de porcentaje (20%) | Ciclo Mientras (40%) | Lógica de mecanizado (20%) | DFD (20%).

### Instrucción: Repetir ... Hasta Que (Do-While) - 3 Ejercicios

#### Calibración de Válvula Neumática
Enunciado: Muestra un menú: "1. Abrir Válvula, 2. Cerrar Válvula, 3. Purgar, 4. Salir". Ejecuta la acción seleccionada. Repite el menú hasta que el usuario seleccione 4.
Mini-Rúbrica: Despliegue de opciones (20%) | Lógica Repetir (40%) | Segun para menú (20%) | DFD (20%).

#### Validación de Torque Seguro
Enunciado: Solicita al usuario ingresar el torque aplicado a un birlo en Nm. Repite la solicitud hasta que el valor ingresado esté exactamente entre 110 y 120 Nm. Al lograrlo, muestra "Torque certificado".
Mini-Rúbrica: Ciclo de validación (40%) | Operadores lógicos Y (40%) | Mensajes claros (20%).

#### Prueba de Fatiga en Suspensión
Enunciado: Imprime "Aplicando carga al resorte...". Pregunta al usuario si el resorte presentó fisuras (1 = Sí, 0 = No). Repite el ciclo hasta que el usuario ingrese 1, y entonces muestra "Límite de fatiga alcanzado. Fin de prueba".
Mini-Rúbrica: Variable booleana simulada (20%) | Condición de parada (40%) | Contexto de materiales (20%) | DFD (20%).

### Instrucción: Para (For) - 4 Ejercicios

#### Simulación de Ciclos de Motor de 4 Tiempos
Enunciado: Solicita el número de RPM a simular (ej. 10). Usa un ciclo Para desde 1 hasta ese número para imprimir: "Ciclo [i]: Admisión - Compresión - Combustión - Escape".
Mini-Rúbrica: Límite del ciclo dinámico (20%) | Sintaxis del Para (40%) | Mensaje termodinámico (20%) | DFD (20%).

#### Análisis de Esfuerzos en Viga
Enunciado: Un sensor lee el esfuerzo en 8 puntos equidistantes de una viga. Usa un ciclo Para del 1 al 8. En cada iteración, pide ingresar la tensión en MPa y acumula el total para calcular un promedio final.
Mini-Rúbrica: Contador y acumulador (40%) | Lógica del ciclo (40%) | Cálculo de promedio (20%).

#### Cálculo de Engranes (Relación de Transmisión)
Enunciado: Pide el número de dientes del engrane motriz. Usa un ciclo Para con engranes conducidos hipotéticos de 10, 20, 30, 40 y 50 dientes (con paso de 10). Calcula e imprime la relación de transmisión en cada paso.
Mini-Rúbrica: Incremento en el ciclo de 10 en 10 (40%) | Fórmula de transmisión (40%) | Impresión (20%).

#### Lectura Multipunto de Termopares
Enunciado: Usa un ciclo Para del 1 al 5 simulando la lectura de 5 termopares en un bloque de motor. Pide la temperatura de cada uno. Si alguna supera los 100°C, imprime un warning inmediato.
Mini-Rúbrica: Lógica Para (30%) | Condicional Si anidado (40%) | Vocabulario técnico (10%) | DFD (20%).
