### Ingeniería Industrial

1. **Tasa de Producción**: Pide al usuario la cantidad total de piezas fabricadas en un turno y las horas efectivas trabajadas. Calcula la productividad en "piezas por hora" (División).

2. **Tiempo Takt (Ritmo de Producción)**: El Takt Time indica qué tan rápido se debe producir para satisfacer al cliente. Pide el tiempo disponible de producción en minutos y la demanda del cliente en unidades. Calcula: Tiempo Disponible / Demanda.

3. **Porcentaje de Defectos (Calidad)**: En una inspección de calidad, pide el total de piezas inspeccionadas y la cantidad de piezas defectuosas encontradas. Calcula el porcentaje de defectos ((Defectuosas / Total) * 100).

4. **Paletización (Lotes Completos)**: Pide el total de cajas producidas en el día y la capacidad máxima de cajas que caben en un pallet. Usa TRUNC(Cajas / Capacidad) para saber cuántos pallets completos se pueden armar y enviar al almacén.

5. **Cajas Sueltas (Merma de Transporte)**: Usando los datos del ejercicio anterior, utiliza la operación Cajas MOD Capacidad para calcular cuántas cajas sobrarán sueltas en la línea de empaque al final del turno.

6. **Tiempo Estándar de Operación**: En un estudio de tiempos, pide el "Tiempo Observado" de un operario (minutos), su "Factor de Calificación" (ej. 1.10 si es más rápido que el promedio) y el "Factor de Suplementos" por fatiga (ej. 0.15). Calcula el Tiempo Estándar: Tiempo Observado * Calificación * (1 + Suplementos).

7. **Costo de Mantener Inventario**: Pide el nivel promedio de inventario (en unidades), el costo unitario de cada pieza y el porcentaje de costo de mantenimiento anual (en decimal, ej. 0.20). Multiplica los tres valores para obtener el costo total de mantener ese almacén.

8. **Disponibilidad de Máquina (OEE)**: Pide el Tiempo Planificado de Producción (minutos) y el Tiempo de Paros no planificados (averías). Calcula el porcentaje de Disponibilidad: ((Planificado - Paros) / Planificado) * 100.

9. **Lote Económico de Pedido (EOQ Simil)**: Pide la Demanda Anual (D), el Costo de Preparar una orden (S) y el Costo de Mantener inventario (H). Calcula el tamaño óptimo de pedido elevando la fórmula a la potencia de 0.5 (que matemáticamente es sacar la raíz cuadrada): ((2 * D * S) / H) ^ 0.5.

10. **Eficiencia de Línea de Ensamblaje**: Pide la suma de todos los tiempos de las tareas individuales, el número de estaciones de trabajo y el Tiempo de Ciclo de la estación más lenta. Calcula la eficiencia: (Suma de Tiempos / (Estaciones * Tiempo de Ciclo)) * 100
