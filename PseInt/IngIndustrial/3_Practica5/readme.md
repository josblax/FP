# Ingeniería Industrial 

## Instrucción: Mientras (while)

### Llenado de Contenedores por Peso

Enunciado: La capacidad de un pallet es de 1000 kg. Pide pesos de cajas y súmalos. Mientras el acumulado sea menor a 1000, sigue pidiendo pesos. Si sobrepasa, indica "Pallet lleno, despachar a almacén".
Mini-Rúbrica: Variable sumadora (20%) | Condición while acumulado < 1000: (40%) | Lógica de salida (40%).

### Control de Merma Continua

Enunciado: Pide las unidades defectuosas de una línea. Mientras el número ingresado sea mayor a 0, acumula el total de defectos. (Ingresar 0 finaliza el turno). Al salir, muestra el total de merma del día.
Mini-Rúbrica: Lógica del ciclo centinela (40%) | Acumulación matemática (40%) | Script Python (20%).

### Optimización de Tiempos Muertos

Enunciado: Pide el tiempo de inactividad de una máquina en minutos. Mientras el tiempo total de paro sea menor a 60 minutos, sigue registrando incidencias. Al llegar a 60, muestra "Alerta TPM: Máquina requiere mantenimiento profundo".
Mini-Rúbrica: Operadores relacionales (40%) | Mantenimiento de variables dentro del bucle (40%) | Output claro (20%).

## Instrucción: Simulación Repetir ... Hasta Que (while True: ... break)

### Inspección de Lote (Pasa/No Pasa)

Enunciado: Pide al usuario revisar piezas de un lote e ingresar 1 para "Pasa" o 0 para "No Pasa". Repite la inspección hasta que encuentre 3 piezas defectuosas (0). Al encontrarlas, muestra "Lote rechazado por estándar AQL".
Nota Python (Simulación Do-While): Abre un bucle while True:, cuenta los defectos encontrados dentro de un if pieza == 0:, y usa un segundo bloque if defectos == 3: break para detener la iteración y descartar el lote.

### Auditoría de Seguridad (5S)

Enunciado: Despliega un menú: "1. Seiri, 2. Seiton, 3. Seiso, 4. Seiketsu, 5. Shitsuke, 6. Finalizar auditoría". Muestra la definición de cada una al seleccionarla. Repite hasta que elija 6.
Nota Python (Simulación Do-While): Ejecuta while True:, imprime las opciones con print, usa sentencias if/elif simulando el menú, e inserta if opcion == 6: break para terminar la auditoría.

### Validación de Identificación de Operario

Enunciado: Solicita el ID del operario (ej. "OP-1234"). Repite la solicitud hasta que ingrese exactamente 7 caracteres de longitud (usar función predefinida). Muestra "Registro de asistencia exitoso".
Nota Python (Simulación Do-While): Usa while True:, lee la cadena de texto con input(), y evalúa con if len(id) == 7: break para validar la longitud exacta y permitir el registro.

## Instrucción: Para (for ... in range())

### Cálculo de Eficiencia OEE por Máquina

Enunciado: Para un total de 5 máquinas, usa un ciclo for que pida el porcentaje de Disponibilidad, Rendimiento y Calidad de cada una. Calcula el OEE (multiplicando los tres valores) y muéstralo por cada máquina.
Mini-Rúbrica: Ciclo iterativo usando range(5) (30%) | Manejo de variables float (40%) | Formateo del print (30%).

### Proyección de Demanda (Pronóstico Semanal)
Enunciado: Usa un ciclo for para pedir la demanda de piezas de los últimos 7 días. Acumula el total y al final calcula la demanda promedio diaria para pronosticar el lunes siguiente.
Mini-Rúbrica: Ciclo de 7 pasos (30%) | Sumatoria interna (40%) | Operación fuera del bucle (30%).

### Estudio de Tiempos y Movimientos

Enunciado: Pide el número de observaciones a realizar. Usa un for iterando esa cantidad N de veces. Pide el tiempo cronometrado de la operación en segundos y muestra "Tomando muestra [i]". Al final imprime "Muestreo finalizado".
Mini-Rúbrica: Ciclo dinámico con límite por variable de usuario (50%) | F-strings en impresión (30%) | Script Python (20%).

### Planificación de Turnos (Kanban)

Enunciado: En un tablero Kanban hay 10 tarjetas de producción. Usa un ciclo for del 10 al 1 (decremental) indicando: "Procesando tarjeta [i]... Tarjetas restantes: [i-1]".
Mini-Rúbrica: Aplicación del salto negativo range(10, 0, -1) (60%) | Lógica iterativa visual (40%).
