# Animación Digital 

## Instrucción: Mientras (while)

### Renderizado de Barra de Progreso

Enunciado: Inicializa una variable de fotogramas renderizados en 0. Pide el total de fotogramas de la escena. Mientras los renderizados sean menores al total, suma 5 por ciclo e imprime "Renderizando: [X] de [Total]".
Mini-Rúbrica: Bloques de condición numéricos en memoria while x < total: (50%) | Ejecución pre-condicional CGI (50%).

### Ajuste de Opacidad (Fade In)

Enunciado: La opacidad de un sprite empieza en 0%. Mientras sea menor a 100%, incrementa en 10% e imprime "Opacidad Alpha: [X]%". Al finalizar, "Personaje completamente visible".
Mini-Rúbrica: Límite de parada porcentual explícito (50%) | Suma aritmética (50%).

### Reducción de Polígonos (Decimation)

Enunciado: Pide el conteo actual de polígonos del modelo. Mientras sea mayor a 10,000, recorta la mitad e imprime "Polígonos restantes: [X]". Al terminar, "Modelo optimizado".
Mini-Rúbrica: División asíncrona de enteros usando asignación polys //= 2 (60%) | Lógica relacional (40%).

## Instrucción: Simulación Repetir ... Hasta Que (while True: ... break)

### Ciclo de Caminata (Walk Cycle)

Enunciado: Pregunta al usuario si el personaje presionó el botón de saltar (1=Sí, 0=No). Repite el mensaje de "Contacto, Bajada..." hasta que ingrese 1. Entonces: "Transición a animación de Salto".
Nota Python (Simulación Do-While): Configura el ciclo base de la simulación gráfica con un while True:, actualiza el estado interno del frame de animación y rompe hacia la lógica transicional con un if salto == 1: break.

### Menú de Formatos de Exportación

Enunciado: Muestra un menú de renderizado: "1. MP4, 2. MOV, 3. Secuencia PNG, 4. Cancelar". Ejecuta el proceso y repite hasta seleccionar 4.
Nota Python (Simulación Do-While): Mantén el menú de postproducción anclado en un bucle while True:, atiende los formatos usando validaciones internas y cancela toda la operación evaluando el estado explícito if formato == 4: break.

### Validación de Relación de Aspecto

Enunciado: Solicita el ancho de la composición. Repite la petición hasta que el usuario ingrese 1920 (Full HD) o 3840 (4K). Si ingresa uno correcto, aprueba la resolución.
Nota Python (Simulación Do-While): Pide el ancho de forma constante y defensiva en un contenedor de estado while True: y asegura la métrica exacta y proporcional del lienzo de composición con if ancho == 1920 or ancho == 3840: break.

## Instrucción: Para (for ... in range())

### Interpolación de Fotogramas Clave (Keyframes)

Enunciado: Hay dos fotogramas clave en el frame 1 y el 10. Usa un ciclo for del 2 al 9 para imprimir "Interpolando curva Bezier para Inbetween en el frame [i]".
Mini-Rúbrica: Límite explícito de fronteras internas range(2, 10) (60%) | Aplicación CGI funcional (40%).

### Generación de Sistema de Partículas

Enunciado: Pide el número de partículas de un emisor. Usa un ciclo iterativo hasta ese número indicando "Instanciando partícula número [i] en el espacio 3D".
Mini-Rúbrica: Operador iterador estandarizado (50%) | Despliegue de cadenas VFX (50%).

### Aplicación de Filtros a Texturas Múltiples

Enunciado: Un modelo tiene 5 mapas de textura (Albedo, Normal, etc). Usa un ciclo de 1 a 5 para simular la carga en memoria: "Bakeando textura [i] en motor de render PBR...".
Mini-Rúbrica: Ruteo de range() rígido (50%) | Ejecución seriada de assets visuales (50%).

### Escalado en Lote de Huesos (Rigging)

Enunciado: Pide el factor de escala base (ej. 1.5). Un esqueleto tiene 8 huesos espinales. Usa un ciclo para aplicar escala e imprima "Aplicando escala al Bone_Spine_[i]".
Mini-Rúbrica: Multiplicación de la variable inicial interna del ciclo (60%) | Tratamiento de cadenas de texto de Rigging (40%).
