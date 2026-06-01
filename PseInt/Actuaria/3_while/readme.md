# Ejercicios para Actuaría

## Nivel Sencillo (Fundamentos Actuariales)
### 1. Calculadora de Interés Compuesto (Meta de Ahorro)
Escribe un programa que pregunte al usuario un capital inicial, una tasa de interés anual y una meta de ahorro. Utiliza un ciclo while para calcular cuántos años tomará alcanzar la meta. Dentro del ciclo, usa if, elif y else para evaluar: si el año actual es múltiplo de 5, imprime "¡Hito de 5 años alcanzado!"; si el capital supera la meta, imprime "Meta lograda" y rompe el ciclo; de lo contrario, sigue sumando el interés anual al capital.

### 2. Pago de Prima de Seguro
Crea un simulador donde un cliente tiene una deuda de prima de $10,000. Usa un ciclo while que se ejecute mientras la deuda sea mayor a 0. Pide al usuario ingresar un pago. Usa condicionales: si el pago es mayor a la deuda, imprime "Su cambio es X" y pon la deuda en 0; elif el pago es exactamente igual a la deuda, imprime "Prima pagada en su totalidad"; else resta el pago a la deuda e imprime el saldo restante.

### 3. Validador de Reclamaciones (Siniestros)
Construye un programa que registre montos de reclamaciones de un accidente. Usa un ciclo while True. Pide al usuario el monto del daño. Usa condicionales: si el usuario ingresa un número negativo, imprime "Error: el daño no puede ser negativo"; elif el daño es 0, asume que no hubo colisión y termina el programa (break); else, acepta el monto, súmalo a un total acumulado y pregunta si desea registrar otro daño.

### 4. Simulador de Vida (Probabilidad Básica)
Crea un programa que simule la edad de una persona empezando en 60 años. Usa un ciclo while que corra mientras la edad sea menor a 100. En cada iteración (año), genera un número aleatorio entre 0 y 1. Usa condicionales: si el número es menor a 0.05 (probabilidad de muerte), imprime "La persona falleció a la edad X" y termina el ciclo; elif la edad llega a 99, imprime "Ha llegado a la edad límite de la tabla de mortalidad"; else, suma 1 a la edad e imprime "Sobrevive al año X".

### 5. Intentos del Examen Actuarial
Un aspirante a actuario está intentando pasar el examen de certificación. Usa un ciclo while que le permita un máximo de 3 intentos. Pide la calificación obtenida. Si la calificación es >= 60, imprime "¡Aprobado!" y termina el ciclo; elif la calificación es < 0 o > 100, advierte "Calificación inválida, no se cuenta el intento"; else, resta un intento e imprime "Reprobado. Te quedan X intentos". Si se acaban los intentos, imprime "Debes esperar al próximo año".

## Nivel Intermedio (Modelado de Riesgo y Finanzas)

### 6. Simulación de Ruina del Fondo
Un fondo de aseguramiento empieza con $50,000. Usa un ciclo while que simule los meses del año (del 1 al 12). Cada mes, pide al usuario ingresar el monto total de siniestros pagados. Usa condicionales: si el monto de siniestros es mayor al fondo, imprime "¡RUINA TÉCNICA en el mes X!" y rompe el ciclo; elif el fondo llega exactamente a 0, imprime "Fondo agotado al límite, requiere inyección de capital"; else, resta los siniestros del fondo e imprime el remanente. Al finalizar los 12 meses sin ruina, imprime "Fondo solvente al final del año".

### 7. Menú de Cotización de Seguro de Vida
Crea un cotizador interactivo usando un ciclo while True que muestre un menú: 1) Edad, 2) Tabaquismo, 3) Calcular Prima, 4) Salir. Usa variables iniciadas en 0. Si el usuario elige 1, pide la edad. Elif elige 2, pregunta si fuma (Sí/No) y asigna un recargo. Elif elige 3, evalúa: si no ha ingresado edad, advierte que faltan datos; si ya tiene datos, calcula la prima base ($1000) más recargos (ej. si fuma suma 500, si es mayor de 50 suma 800) y muestra el total. Else (si elige 4), sal del programa.

### 8. Ajuste Dinámico por Inflación
Simula la proyección del costo de un siniestro a 10 años. Inicia con un costo de $5,000. Usa un ciclo while para iterar los 10 años. Pide la tasa de inflación real para cada año. Si la tasa es > 15%, imprime "Alerta de hiperinflación, aplicando límite de póliza", y ajusta el costo solo un 15%; elif la tasa es < 0%, imprime "Deflación, el costo baja" y reduce el costo; else, aplica la inflación normal. Imprime el costo al final de cada año.

### 9. Calculadora de Coaseguro y Deducible
Un asegurado ingresa una lista de gastos médicos en un ciclo while True (tecleando 'fin' para terminar). El deducible es $10,000 y el coaseguro del 10%. Ve sumando los gastos. Por cada gasto ingresado evalúa el acumulado: si el acumulado es menor al deducible, el seguro paga $0 y el cliente paga todo; elif el acumulado ya superó el deducible pero no el tope de coaseguro (ej. tope de 50,000), el cliente paga el 10% del excedente y la aseguradora el 90%; else, la aseguradora paga el 100% del resto. Muestra quién paga cuánto tras cada gasto.

### 10. Reparto de Dividendos a Accionistas
Un fondo tiene $1,000,000 para repartir. Usa un ciclo while mientras queden fondos por repartir. Pide al usuario que ingrese la cantidad a asignar al siguiente accionista. Si la cantidad solicitada es negativa, muestra un error; elif la cantidad solicitada es mayor al límite por accionista ($200,000), rechaza la operación e indica el tope máximo; elif la cantidad es mayor a los fondos restantes, asigna solo lo que queda y termina; else, resta el monto de los fondos e indica cuánto dinero queda por repartir.
