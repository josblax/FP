# Ingeniería en Sistemas Computacionales (ISC) 

## Instrucción: Mientras (while)

### Espera de Ping (Timeout de Red)

Enunciado: Simula la respuesta de un servidor. Pide ingresar los ms de respuesta. Mientras sean mayores a 500, indica "Request Timeout... reenviando paquete" y vuelve a pedir. Al ser menor a 500, "Conexión TCP establecida".
Mini-Rúbrica: Captura iterativa de variable local (40%) | Condicional while ms > 500: (40%) | Concepto IT implementado (20%).

### Vaciado de Cola de Procesos (Queue)
Enunciado: Solicita el número de procesos en la memoria RAM listos para CPU. Mientras sea mayor a 0, imprime "Ejecutando PID... Restantes: [X]". Resta 1 por iteración. Al llegar a 0, "CPU Idle".
Mini-Rúbrica: Variable decrementando secuencialmente (40%) | Control del while límite cero (40%) | Python Script (20%).

### Consumo Crítico de RAM

Enunciado: Pide el % de RAM libre. Mientras sea menor al 15%, imprime "Memoria insuficiente. Cerrando procesos (OOM Killer)..." y aumenta la RAM libre en 5% por ciclo. Al superar 15%, "Sistema estable".
Mini-Rúbrica: Operadores comparativos (40%) | Cálculo de estabilización incremental (40%) | Semántica clara (20%).

## Instrucción: Simulación Repetir ... Hasta Que (while True: ... break)

#### Login con Bloqueo de Cuenta (Intentos Límite)

Enunciado: Pide contraseña. Repite el proceso hasta que la contraseña sea "root" O el número de intentos fallidos llegue a 3. Si llega a 3, muestra "Cuenta bloqueada temporalmente". Si acierta, "Acceso Shell".
Nota Python (Simulación Do-While): Crea un while True:, incrementa un contador de fallos y valida la estructura de control usando if password == "root" or intentos == 3: break para bloquear o acceder evaluando lógicamente fuera del bucle.

### Menú de Consola CLI (Command Line Interface)

Enunciado: Despliega: "A. Ipconfig, B. Ping, C. Traceroute, X. Exit". Ejecuta un mensaje simulando la instrucción. Repite hasta que se ingrese "X".
Nota Python (Simulación Do-While): Utiliza un while True:, simula el comportamiento de terminal con condicionales if/elif y ejecuta un if opc.upper() == "X": break para forzar la salida de la consola independientemente del "case".

### Escaneo de Puertos Básicos

Enunciado: Pregunta "¿Desea escanear el siguiente puerto? (S/N)". Por cada "S", incrementa el puerto simulado (empezando por el 80). Repite hasta que ingrese "N" y muestra el último puerto escaneado.
Nota Python (Simulación Do-While): Empieza un while True:, escanea el puerto e incrementa la variable local si la respuesta es "S", y usa if respuesta.upper() == "N": break para detener explícitamente el escáner.

## Instrucción: Para (for ... in range())

### Asignación de Subredes (Subnetting)

Enunciado: Se requieren 8 subredes. Usa un ciclo for para imprimir la dirección de salto: "Subred [i]: 192.168.1.[(i-1)*32]". (Calcula la IP iterativamente) .
Mini-Rúbrica: Anidación de matemáticas complejas en el print() o f-string (60%) | Límite del ciclo (40%).

### Encriptación por Bloques Simulada

Enunciado: Pide una cadena de texto (simulando 16 bytes). Usa un ciclo for iterando 16 veces. En cada iteración imprime "Aplicando operación XOR al bloque de byte [i]...".
Mini-Rúbrica: Limitación estática de bucle range(16) (40%) | Indexación en Python Script (60%).

### Script de Respaldo de Bases de Datos (Dumps)

Enunciado: Solicita el total de bases de datos en el clúster. Con un ciclo for desde 1 hasta el total ingresado, imprime: "Ejecutando mysqldump de la DB número [i]... OK".
Mini-Rúbrica: Entrada dinámica del argumento en la función range(1, db_total + 1) (60%) | Simulación DevOps (40%).

### Despliegue de Contenedores Docker

Enunciado: Usa un ciclo for con un paso decresivo desde el 10 al 1. Simula la bajada de servicios de un archivo docker-compose: "Apagando y eliminando contenedor worker_[i]...".
Mini-Rúbrica: Uso específico del parámetro step range(10, 0, -1) (70%) | F-strings (30%).
