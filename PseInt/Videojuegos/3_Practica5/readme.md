# Ingeniería en Videojuegos 

## Instrucción: Mientras (while)

### Regeneración de Salud Automática

Enunciado: El jugador tiene 30 HP y el máximo es 100. Mientras el HP sea menor a 100, suma 10 HP por ciclo e imprime "Regenerando: [HP] puntos". Al llegar a 100, muestra "Salud al máximo".
Mini-Rúbrica: Operadores de suma y asignación hp += 10 (40%) | Ciclo con límite estricto (40%) | Salida HUD simulada (20%).

### Ciclo de Carga de Assets (Loading Screen)

Enunciado: Pide al usuario simular la velocidad de su disco duro (MB/s). Mientras el progreso de carga sea menor a 2000 MB (2GB), suma la velocidad e imprime "Cargando texturas... [Total] MB". Al terminar: "Press Start".
Mini-Rúbrica: Conversión de entradas a enteros (30%) | Condición relacional (40%) | Lógica acumuladora (30%).

### Balística y Caída de Proyectil
Enunciado: Un proyectil se dispara a una altura de 50 metros. Mientras la altura sea mayor a 0, disminuye la altura aplicando 9.8m por ciclo (gravedad) e imprime la altura actual. Al pasar de 0, "Proyectil impactó el suelo".
Mini-Rúbrica: Manejo de datos flotantes (40%) | Decremento constante (40%) | Salida limpia con redondeo (20%).

## Instrucción: Simulación Repetir ... Hasta Que (while True: ... break)

### Menú de Pausa In-Game

Enunciado: Muestra "1. Reanudar, 2. Opciones, 3. Cargar Punto de Control, 4. Salir al Escritorio". Repite el menú de pausa hasta que el jugador elija 1 (para volver al juego) o 4 (para cerrar el programa).
Nota Python (Simulación Do-While): Empieza con while True:, muestra el menú de pausa mediante print() y utiliza if opcion == 1 or opcion == 4: break combinando operadores lógicos para cerrar el ciclo.

### Minijuego de Forzar Cerraduras (Lockpicking)
Enunciado: Pide al jugador adivinar un código numérico (ej. 74). Repite el mensaje "Ganzúa atorada, intenta otro número" hasta que ingrese el código correcto. Al acertar, "Cofre desbloqueado".
Nota Python (Simulación Do-While): Despliega while True:, verifica el código ingresado con la variable oculta y si coincide, invoca break para abrir el cofre.

### Farmear Experiencia en Zona

Enunciado: Pide al usuario si quiere derrotar a un enemigo ("S" para sí, "N" para no). Suma 50 XP por cada "S". Repite hasta que ingrese "N" y muestra la XP total farmeada.
Nota Python (Simulación Do-While): Inicia un while True:, suma la experiencia en una variable global si la respuesta es "S", y si la respuesta es "N", usa break para concluir el loop de farmeo.

## Instrucción: Para (for ... in range())

### Oleadas de Enemigos (Wave Spawner)

Enunciado: El nivel tiene 5 oleadas. Usa un ciclo for de 1 a 5. En la iteración [i], calcula que aparecerán i * 3 enemigos e imprime: "Oleada [i]: Aparecen [X] enemigos".
Mini-Rúbrica: Uso de multiplicación interna iterativa (40%) | Configuración correcta de índices del range (40%) | Salida formateada (20%).

### Renderizado de Capas Parallax

Enunciado: El juego tiene 4 capas de fondo (Cielo, Montañas, Bosque, Primer Plano). Pide al usuario la velocidad base del jugador. Usa un ciclo for para calcular la velocidad de cada capa multiplicando la base por i * 0.25.
Mini-Rúbrica: Operaciones multiplicativas con floats (50%) | Lógica for simple (30%) | Manejo de variables externas (20%).

### Daño por Veneno (DoT - Damage over Time)

Enunciado: Un enemigo sufre envenenamiento por 8 turnos. Solicita el HP inicial. Con un for, resta 5 puntos de HP por turno e imprime la salud restante.
Mini-Rúbrica: Ciclo controlado estrictamente (40%) | Operación de resta y reasignación hp -= 5 (40%) | Script Python (20%).

### Repartición de Loot a Miembros de Party

Enunciado: Se han obtenido 1000 monedas de oro. Usa un ciclo for representando a 4 héroes. Asigna 250 monedas a cada uno e imprime: "Héroe [i] recibe 250 de oro".
Mini-Rúbrica: Uso de variables constantes divididas iterativamente (50%) | Ejecución limpia sin errores de índice (50%).
