## Ingeniería en Sistemas Computacionales (ISC)

### Instrucción: Mientras (While) - 3 Ejercicios

#### Espera de Ping (Timeout de Red)
Enunciado: Simula la respuesta de un servidor. Pide ingresar los ms de respuesta. Mientras sean mayores a 500, indica "Request Timeout... reenviando paquete" y vuelve a pedir. Al ser menor a 500, "Conexión TCP establecida".
Mini-Rúbrica: Variable de red (20%) | Lógica condicional (40%) | Concepto OSI (20%) | DFD (20%).

#### Vaciado de Cola de Procesos (Queue)
Enunciado: Solicita el número de procesos en la memoria RAM listos para CPU. Mientras sea mayor a 0, imprime "Ejecutando PID... Restantes: [X]". Resta 1 por iteración. Al llegar a 0, "CPU Idle".
Mini-Rúbrica: Variable contador (20%) | Lógica decremento (40%) | Sistemas Operativos (20%) | DFD (20%).

#### Consumo Crítico de RAM
Enunciado: Pide el % de RAM libre. Mientras sea menor al 15%, imprime "Memoria insuficiente. Cerrando procesos (OOM Killer)..." y aumenta la RAM libre en 5% por ciclo. Al superar 15%, "Sistema estable".
Mini-Rúbrica: Ciclo de estabilización (40%) | Operación matemática (30%) | Arquitectura IT (10%) | DFD (20%).

### Instrucción: Repetir ... Hasta Que (Do-While) - 3 Ejercicios

#### Login con Bloqueo de Cuenta (Intentos Límite)
Enunciado: Pide contraseña. Repite el proceso hasta que la contraseña sea "root" O el número de intentos fallidos llegue a 3. Si llega a 3, muestra "Cuenta bloqueada temporalmente". Si acierta, "Acceso Shell".
Mini-Rúbrica: Dos condiciones de salida O (40%) | Contador de intentos (30%) | Ciberseguridad (10%) | DFD (20%).

#### Menú de Consola CLI (Command Line Interface)
Enunciado: Despliega: "A. Ipconfig, B. Ping, C. Traceroute, X. Exit". Ejecuta un mensaje simulando la instrucción. Repite hasta que se ingrese "X".
Mini-Rúbrica: Manejo de caracteres (30%) | Repetir con Segun (40%) | Entorno Unix/CMD (10%) | DFD (20%).

#### Escaneo de Puertos Básicos
Enunciado: Pregunta "¿Desea escanear el siguiente puerto? (S/N)". Por cada "S", incrementa el puerto simulado (80, 81, 82...). Repite hasta que ingrese "N" y muestra el último puerto escaneado.
Mini-Rúbrica: Acumulador incremental (30%) | Condición de parada textual (40%) | Networking (10%) | DFD (20%).

### Instrucción: Para (For) - 4 Ejercicios

#### Asignación de Subredes (Subnetting)
Enunciado: Se requieren 8 subredes. Usa un ciclo Para de 1 a 8 para imprimir la dirección de salto: "Subred [i]: 192.168.1.[(i-1)*32]". (Calcula la IP final).
Mini-Rúbrica: Cálculo matemático en la impresión (50%) | Lógica del Para (20%) | Redes IPv4 (10%) | DFD (20%).

#### Encriptación por Bloques Simulada
Enunciado: Pide una cadena de texto (simulando 16 bytes). Usa un ciclo Para del 1 al 16. En cada iteración imprime "Aplicando operación XOR al bloque de byte [i]...".
Mini-Rúbrica: Limites estrictos fijos (30%) | Simulación criptográfica (40%) | Formato texto (10%) | DFD (20%).

#### Script de Respaldo de Bases de Datos (Dumps)
Enunciado: Solicita el total de bases de datos en el clúster. Con un ciclo Para de 1 hasta el total ingresado, imprime: "Ejecutando mysqldump de la DB número [i]... OK".
Mini-Rúbrica: Ciclo con final dinámico (40%) | Estructura iterativa (30%) | Backend Dev (10%) | DFD (20%).

#### Despliegue de Contenedores Docker
Enunciado: Usa un ciclo Para con paso de -1 desde el 10 al 1. Simula la bajada de servicios de un archivo docker-compose: "Apagando y eliminando contenedor worker_[i]...".
Mini-Rúbrica: Lógica en decremento (50%) | Impresión indexada (20%) | DevOps (10%) | DFD (20%).
