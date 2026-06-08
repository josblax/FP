## Ingeniería Industrial

### Instrucción: Mientras (While) - 3 Ejercicios

#### Llenado de Contenedores por Peso
Enunciado: La capacidad de un pallet es de 1000 kg. Pide pesos de cajas y súmalos. Mientras el acumulado sea menor a 1000, sigue pidiendo pesos. Si sobrepasa, indica "Pallet lleno, despachar a almacén".
Mini-Rúbrica: Inicialización de acumulador (20%) | Lógica Mientras (40%) | Logística (20%) | DFD (20%).

#### Control de Merma Continua
Enunciado: Pide las unidades defectuosas de una línea. Mientras el número ingresado sea mayor a 0, acumula el total de defectos. (Ingresar 0 finaliza el turno). Al salir, muestra el total de merma del día.
Mini-Rúbrica: Variable centinela (20%) | Acumulación correcta (40%) | Mensaje de producción (20%) | DFD (20%).

#### Optimización de Tiempos Muertos
Enunciado: Pide el tiempo de inactividad de una máquina en minutos. Mientras el tiempo total de paro sea menor a 60 minutos, sigue registrando incidencias. Al llegar a 60, muestra "Alerta TPM: Máquina requiere mantenimiento profundo".
Mini-Rúbrica: Suma de minutos (20%) | Condición relacional (40%) | Vocabulario Lean Manufacturing (20%) | DFD (20%).

### Instrucción: Repetir ... Hasta Que (Do-While) - 3 Ejercicios

#### Inspección de Lote (Pasa/No Pasa)
Enunciado: Pide al usuario revisar piezas de un lote e ingresar 1 para "Pasa" o 0 para "No Pasa". Repite la inspección hasta que encuentre 3 piezas defectuosas (0). Al encontrarlas, muestra "Lote rechazado por estándar AQL".
Mini-Rúbrica: Contador de defectos (30%) | Condición de parada en 3 (40%) | Calidad industrial (10%) | DFD (20%).

#### Auditoría de Seguridad (5S)
Enunciado: Despliega un menú: "1. Seiri, 2. Seiton, 3. Seiso, 4. Seiketsu, 5. Shitsuke, 6. Finalizar auditoría". Muestra la definición de cada una al seleccionarla. Repite hasta que elija 6.
Mini-Rúbrica: Menú funcional (20%) | Estructura Repetir y Segun (50%) | Cultura 5S (10%) | DFD (20%).

#### Validación de Identificación de Operario
Enunciado: Solicita el ID del operario (ej. "OP-1234"). Repite la solicitud hasta que ingrese exactamente 7 caracteres de longitud (usar función Longitud). Muestra "Registro de asistencia exitoso".
Mini-Rúbrica: Función de texto (30%) | Ciclo de validación (40%) | Recursos Humanos (10%) | DFD (20%).

### Instrucción: Para (For) - 4 Ejercicios

#### Cálculo de Eficiencia OEE por Máquina
Enunciado: Para un total de 5 máquinas, usa un ciclo Para que pida el porcentaje de Disponibilidad, Rendimiento y Calidad de cada una. Calcula el OEE (multiplicando los tres valores) y muéstralo por cada máquina.
Mini-Rúbrica: Iteración estricta (1 a 5) (30%) | Fórmula de OEE (40%) | Impresión de reportes (10%) | DFD (20%).

#### Proyección de Demanda (Pronóstico Semanal)
Enunciado: Usa un ciclo Para para pedir la demanda de piezas de los últimos 7 días. Acumula el total y al final calcula la demanda promedio diaria para pronosticar el lunes siguiente.
Mini-Rúbrica: Bucle 1-7 (30%) | Acumulador y división final (40%) | Lógica de Supply Chain (10%) | DFD (20%).

#### Estudio de Tiempos y Movimientos
Enunciado: Pide el número de observaciones a realizar. Usa un Para desde 1 hasta N. Pide el tiempo cronometrado de la operación en segundos y muestra "Tomando muestra [i]". Al final imprime "Muestreo finalizado".
Mini-Rúbrica: Ciclo con límite dado por usuario (40%) | Conteo iterativo (30%) | Ergonomía industrial (10%) | DFD (20%).

#### Planificación de Turnos (Kanban)
Enunciado: En un tablero Kanban hay 10 tarjetas de producción. Usa un ciclo Para del 10 al 1 (con paso -1) indicando: "Procesando tarjeta [i]... Tarjetas restantes: [i-1]".
Mini-Rúbrica: Ciclo decremento (Paso -1) (50%) | Simulación visual (20%) | Sistema Pull/Kanban (10%) | DFD (20%).
