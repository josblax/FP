## Ingeniería en Videojuegos

### Instrucción: Mientras (While) - 3 Ejercicios

#### Regeneración de Salud Automática
Enunciado: El jugador tiene 30 HP y el máximo es 100. Mientras el HP sea menor a 100, suma 10 HP por ciclo e imprime "Regenerando: [HP] puntos". Al llegar a 100, muestra "Salud al máximo".
Mini-Rúbrica: Lógica de incremento (40%) | Condición relacional límite (30%) | Mensajes de HUD (10%) | DFD (20%).

#### Ciclo de Carga de Assets (Loading Screen)
Enunciado: Pide al usuario simular la velocidad de su disco duro (MB/s). Mientras el progreso de carga sea menor a 2000 MB (2GB), suma la velocidad e imprime "Cargando texturas... [Total] MB". Al terminar: "Press Start".
Mini-Rúbrica: Acumulador de datos (30%) | Ciclo Mientras (40%) | Game Dev terminology (10%) | DFD (20%).

#### Balística y Caída de Proyectil
Enunciado: Un proyectil se dispara a una altura de 50 metros. Mientras la altura sea mayor a 0, disminuye la altura aplicando 9.8m por ciclo (gravedad) e imprime la altura actual. Al pasar de 0, "Proyectil impactó el suelo".
Mini-Rúbrica: Decremento con decimales (30%) | Lógica física (40%) | Impresión limpia (10%) | DFD (20%).

### Instrucción: Repetir ... Hasta Que (Do-While) - 3 Ejercicios

#### Menú de Pausa In-Game
Enunciado: Muestra "1. Reanudar, 2. Opciones, 3. Cargar Punto de Control, 4. Salir al Escritorio". Repite el menú de pausa hasta que el jugador elija 1 (para volver al juego) o 4 (para cerrar el programa).
Mini-Rúbrica: Despliegue de UI (20%) | Operador lógico O en condición de salida (40%) | Segun (20%) | DFD (20%).

#### Minijuego de Forzar Cerraduras (Lockpicking)
Enunciado: Pide al jugador adivinar un código numérico (ej. 74). Repite el mensaje "Ganzúa atorada, intenta otro número" hasta que ingrese el código correcto. Al acertar, "Cofre desbloqueado".
Mini-Rúbrica: Ciclo infinito condicionado (40%) | Lógica de puzzle (30%) | Mensajes inmersivos (10%) | DFD (20%).

#### Farmear Experiencia en Zona
Enunciado: Pide al usuario si quiere derrotar a un enemigo ("S" para sí, "N" para no). Suma 50 XP por cada "S". Repite hasta que ingrese "N" y muestra la XP total farmeada.
Mini-Rúbrica: Comparación de cadenas (40%) | Sumatoria de variables (30%) | Mecánica RPG (10%) | DFD (20%).

### Instrucción: Para (For) - 4 Ejercicios

#### Oleadas de Enemigos (Wave Spawner)
Enunciado: El nivel tiene 5 oleadas. Usa un ciclo Para de 1 a 5. En la iteración [i], calcula que aparecerán i * 3 enemigos e imprime: "Oleada [i]: Aparecen [X] enemigos".
Mini-Rúbrica: Ciclo estándar (30%) | Cálculo matemático interno (40%) | Lógica de Level Design (10%) | DFD (20%).

#### Renderizado de Capas Parallax
Enunciado: El juego tiene 4 capas de fondo (Cielo, Montañas, Bosque, Primer Plano). Pide al usuario la velocidad base del jugador. Usa un ciclo Para (1 a 4) para calcular la velocidad de cada capa multiplicando la base por i * 0.25.
Mini-Rúbrica: Lógica matemática con reales (40%) | Sintaxis Para (30%) | Programación gráfica (10%) | DFD (20%).

#### Daño por Veneno (DoT - Damage over Time)
Enunciado: Un enemigo sufre envenenamiento por 8 turnos. Solicita el HP inicial. Con un Para del 1 al 8, resta 5 puntos de HP por turno e imprime la salud restante.
Mini-Rúbrica: Ciclo controlado (30%) | Resta constante (40%) | Lógica de combate por turnos (10%) | DFD (20%).

#### Repartición de Loot a Miembros de Party
Enunciado: Se han obtenido 1000 monedas de oro. Usa un ciclo Para de 1 a 4 (representando a 4 héroes). Asigna 250 monedas a cada uno e imprime: "Héroe [i] recibe 250 de oro".
Mini-Rúbrica: Bucle simple (30%) | División equitativa (40%) | RPG Mechanics (10%) | DFD (20%).
