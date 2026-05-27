# Ejercicios para Actuaria (Seguros y Riesgos)
## Nota: En todos, el usuario debe realizar un input y un casting ej. float(input()) antes de validar con if.

1. **Validación de Edad**: Capturar la edad mediante input. Realizar un casting a entero. Si es $< 0$ o $> 65$, mostrar "Error"; si no, usar un print con el texto "proceder".
2. **Monto de Siniestro**: Capturar el monto de reparacion del siniestro, como texto y convertirlo a float (casting). Si el valor $\leq 0$, mostrar "Error"; si no, calcular el deducible, multiplicando el valor de reparacion por 25%.
3. **Estado de Salud**: Desarrolla un programa en Python que calcule la prima anual de un seguro de salud considerando el estado de salud y la edad del cliente:
   El programa debe capturar el estado de salud del cliente, que puede ser: [Saludable|No Saludable].Si el estado de salud es No Saludable, el programa debe mostrar el mensaje "Cliente no elegible por estado de salud."Si el estado de salud es Saludable, el programa debe calcular la prima anual:
   
   * El monto base es de 10,000 pesos.
   * Si la edad del cliente está entre 18 y 25 años, se aplica un factor de riesgo del 30% adicional sobre el monto base
   * En cualquier otro rango de edad, se mantiene el monto base sin incremento.
4. **Validación de Capital**: Capturar capital y reserva vía input y hacer casting a double. Si capital < 0, marcar "Insolvente"; si no, evaluar.Tarifas por Edad: Capturar edad (input + casting). Si $< 18$ asignar "Junior", si $\geq 18$ y $< 65$ asignar "Adulto", si no, "Senior".Filtro de Historial: Capturar accidentes (input + casting). Si $< 0$, mostrar "Error"; si no, evaluar si el cliente es apto para descuento.Límite de Cobertura: Capturar solicitado y maximo (input + casting). Si solicitado > maximo, mostrar "Exceso"; si no, calcular.Vencimiento: Capturar fecha (input). Si la fecha ya pasó (comparación lógica), mostrar "Póliza inactiva"; si no, permitir renovación.Capacidad de Pago: Capturar ingresos (input + casting). Si $< 0$, mostrar "Error"; si no, calcular capacidad basada en el 30% del ingreso.Riesgo Compuesto: Capturar edad y enfermedad (boolean). Si edad > 65 AND enfermedad == true, aplicar recargo; si no, calcular normal.
