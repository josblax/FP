## Animación Digital

### Instrucción: Mientras (While) - 3 Ejercicios

#### Renderizado de Barra de Progreso
Enunciado: Inicializa una variable de fotogramas renderizados en 0. Pide el total de fotogramas de la escena. Mientras los renderizados sean menores al total, suma 5 por ciclo e imprime "Renderizando: [X] de [Total]".
Mini-Rúbrica: Incremento programado (40%) | Límite dinámico (30%) | CGI / Renderización (10%) | DFD (20%).

#### Ajuste de Opacidad (Fade In)
Enunciado: La opacidad de un sprite (imagen 2D) empieza en 0%. Mientras sea menor a 100%, incrementa en 10% e imprime "Opacidad Alpha: [X]%". Al finalizar, "Personaje completamente visible".
Mini-Rúbrica: Bucle de incremento aritmético (40%) | Límite porcentual (30%) | Interfaz Gráfica (10%) | DFD (20%).

#### Reducción de Polígonos (Decimation)

Enunciado: Pide el conteo actual de polígonos del modelo. Mientras sea mayor a 10,000 (límite para móviles), recorta la mitad e imprime "Polígonos restantes: [X]". Al terminar, "Modelo optimizado".
Mini-Rúbrica: División y reasignación de variable (40%) | Condición relacional matemática (30%) | Retopología 3D (10%) | DFD (20%).

### Instrucción: Repetir ... Hasta Que (Do-While) - 3 Ejercicios

#### Ciclo de Caminata (Walk Cycle)

Enunciado: Pregunta al usuario si el personaje presionó el botón de saltar (1=Sí, 0=No). Repite el mensaje "Ejecutando animación: Contacto, Bajada, Pase, Subida" hasta que ingrese 1. Entonces: "Transición a animación de Salto".
Mini-Rúbrica: Condición lógica (30%) | Ciclo de animación ininterrumpido (40%) | Conceptos de los 12 principios (10%) | DFD (20%).

#### Menú de Formatos de Exportación
Enunciado: Muestra un menú de renderizado: "1. MP4 (H.264), 2. MOV (ProRes), 3. Secuencia PNG, 4. Cancelar Exportación". Ejecuta el proceso y repite hasta seleccionar 4.
Mini-Rúbrica: Implementación de Menú (30%) | Anidación de Segun (40%) | Formatos de Postproducción (10%) | DFD (20%).

#### Validación de Relación de Aspecto
Enunciado: Solicita el ancho de la composición. Repite la petición de entrada hasta que el usuario ingrese 1920 (Full HD) o 3840 (4K). Si ingresa uno correcto, "Composición creada en formato 16:9 HD/UHD".
Mini-Rúbrica: Lógica condicional OR en la salida (40%) | Validación estricta (30%) | Teoría del color/resolución (10%) | DFD (20%).

### Instrucción: Para (For) - 4 Ejercicios

#### Interpolación de Fotogramas Clave (Keyframes)
Enunciado: Hay dos fotogramas clave en el frame 1 y el 10. Usa un ciclo Para del 2 al 9 para imprimir "Interpolando curva Bezier para Inbetween en el frame [i]".
Mini-Rúbrica: Límites personalizados en el ciclo (30%) | Concepto de interpolación (40%) | Curvas de animación (10%) | DFD (20%).

#### Generación de Sistema de Partículas
Enunciado: Pide el número de partículas de un emisor (ej. 50). Usa un ciclo Para desde 1 hasta ese número indicando "Instanciando partícula número [i] en el espacio 3D con vector aleatorio".
Mini-Rúbrica: Uso de límite variable (40%) | Ciclo de creación (30%) | VFX y físicas (10%) | DFD (20%).

#### Aplicación de Filtros a Texturas Múltiples
Enunciado: Un modelo tiene 5 mapas de textura (Albedo, Normal, Roughness, Metalness, AO). Usa un ciclo Para de 1 a 5 para simular la carga en memoria: "Bakeando textura [i] en motor de render PBR...".
Mini-Rúbrica: Ciclo de carga fija (40%) | Simulación de proceso secuencial (30%) | Shading PBR (10%) | DFD (20%).

#### Escalado en Lote de Huesos (Rigging)
Enunciado: Pide el factor de escala (ej. 1.5). Un esqueleto tiene 8 huesos espinales. Usa un ciclo Para de 1 a 8 que multiplique el factor base por i e imprima "Aplicando escala al Bone_Spine_[i]".
Mini-Rúbrica: Operaciones matemáticas dentro del bloque (40%) | Manejo de cadenas para nombres (30%) | Rigging 3D (10%) | DFD (20%).
