# Cuestionario de Contextualización: Estructuras de Datos y Aplicaciones Técnicas

El objetivo de este cuestionario es que comprendas la jerga y los fundamentos teóricos detrás de las aplicaciones prácticas de programación en tu área de competencia.

---

## 1. Animación Digital

### Listas y Tuplas

1. **Granjas de Render:** ¿Qué es un *render farm* y por qué es necesario gestionar las colas de renderizado (*rendering queues*) mediante estructuras de datos ordenadas?
2. **Fotogramas Clave (Keyframes):** Investiga qué es la interpolación de movimiento entre fotogramas clave y cómo el orden de una lista influye en la suavidad de la animación.
3. **Modelos RGB:** Explica la diferencia técnica entre los modelos de color aditivo (RGB) y sustractivo (CMYK) y por qué un color se representa como una tupla de tres o cuatro valores.
4. **Espacio 3D y Pivotes:** ¿Qué es un *pivote* en un objeto 3D y cómo se relacionan las coordenadas `(X, Y, Z)` con el concepto de un vector en un espacio vectorial?
5. **Bounding Box:** Define qué es una caja delimitadora (*bounding box*) y cuál es su utilidad computacional en la detección de colisiones de objetos en una escena.
6. **Códecs de Video:** Investiga qué significan los términos *códec*, *contenedor* y *bitrate* al exportar una animación; ¿cómo impacta el bitrate en la calidad visual?
7. **Rigging:** ¿Qué es el *rigging* de un personaje y qué representan los "grados de libertad" en las articulaciones de un hueso dentro de un esqueleto digital?
8. **Shaders:** Explica brevemente qué es un *shader* y cuál es su función en la GPU al calcular el aspecto visual de una superficie (textura).
9. **Assets 3D:** Define qué es un *asset* en la producción de animación y cómo el sistema de jerarquías (nodos padres e hijos) ayuda a organizar una escena compleja.
10. **Z-Index:** ¿Qué es el *z-index* o profundidad en un entorno 2D y 3D, y por qué es fundamental para la composición de capas (*compositing*)?

---

## 2. Ingeniería en Sistemas Computacionales

### Listas y Tuplas

1. **PIDs:** En sistemas operativos, ¿qué es un PID (*Process Identifier*) y por qué el sistema operativo necesita mantener un registro ordenado de estos procesos?
2. **Cola FIFO:** Define el concepto de *FIFO* (*First-In, First-Out*) y explica por qué es la estructura lógica para una cola de impresión.
3. **Sockets de Red:** ¿Qué compone un *socket* de red y por qué se suele representar como una tupla de dirección IP y puerto?
4. **Caché DNS:** Explica brevemente el proceso de resolución de nombres de dominio (DNS); ¿qué función cumple la memoria caché en este proceso?
5. **Direcciones MAC:** ¿Cuál es la diferencia entre una dirección MAC y una dirección IP? ¿Por qué la dirección MAC es única a nivel de hardware?
6. **Kernel:** Define qué es el *kernel* de un sistema operativo y por qué las versiones se expresan comúnmente en una estructura jerárquica de números (ej. semver).
7. **Criptografía (AES):** Investiga qué significa AES y por qué el "modo de bloque" (como CBC) es vital para la seguridad en la transmisión de datos.
8. **Particiones de Disco:** ¿Qué es un sector LBA (*Logical Block Addressing*) en el contexto de almacenamiento de datos?
9. **HTTP Status Codes:** Investiga el significado de los códigos de estado HTTP 200 y 404; ¿qué intenta comunicar el servidor al cliente con cada uno?
10. **Máscara de Subred:** Explica qué es una máscara de subred `/24` y cómo determina el número de hosts disponibles en una red local.

---

## 3. Ingeniería Robótica

### Listas y Tuplas

1. **Parámetros DH:** ¿Para qué sirven los parámetros de *Denavit-Hartenberg* en la cinemática de robots y qué representa cada uno de sus cuatro valores?
2. **Odometría:** Explica qué es la odometría en robots móviles y por qué la relación de radio y distancia entre ruedas es crítica para el cálculo de trayectoria.
3. **IMU:** ¿Qué componentes físicos componen una *IMU* (*Inertial Measurement Unit*) y qué miden los ángulos de *Roll*, *Pitch* y *Yaw*?
4. **Cinemática Inversa:** Define el concepto de *Cinemática Inversa* y por qué es fundamental para mover un brazo robótico a una posición X, Y, Z específica.
5. **Frecuencia de Baudios:** ¿Qué es el *baud rate* en la comunicación serial y qué sucede si los dispositivos no están sincronizados en esta tasa?
6. **PID:** Explica brevemente los componentes de un controlador *PID* (Proporcional, Integral, Derivativo) y su importancia en la precisión de un motor.
7. **LIDAR/Sonar:** ¿Cuál es la diferencia física entre la detección de objetos por ultrasonido (Sonar) y por láser (LIDAR)?
8. **Espacio de Trabajo (Workspace):** ¿Qué diferencia hay entre el espacio de trabajo alcanzable y el espacio de trabajo dextro de un manipulador robótico?
9. **Encoder:** ¿Qué es un encoder rotativo y cómo permite al microcontrolador conocer la posición actual de un motor?
10. **Sensores de Bus (CAN/RS485):** Investiga qué es un bus de comunicación industrial (como CAN o RS485) y por qué permite conectar múltiples sensores a pocos pines.

---

## 4. Ingeniería Mecatrónica

### Listas y Tuplas

1. **PLC:** ¿Qué es un *PLC* (*Programmable Logic Controller*) y qué papel juega en la automatización industrial moderna?
2. **PSI:** Define la unidad de medida *PSI* (*Pounds per Square Inch*) y explica por qué es crucial monitorearla en sistemas neumáticos.
3. **Celda de Carga:** Explica el principio físico (piezoelectricidad o extensometría) bajo el cual funciona una celda de carga para medir peso.
4. **Fresadora CNC:** ¿Qué es el *G-Code* y cómo una serie de comandos secuenciales traducen un diseño digital en una pieza física?
5. **Relación de Transmisión:** Explica cómo el número de dientes en un engrane afecta la velocidad angular y el torque de salida.
6. **Interlocks:** En seguridad industrial, ¿qué es un *interlock* de seguridad y por qué se consideran dispositivos críticos de prevención de accidentes?
7. **Bomba Centrífuga:** ¿Qué significan los términos técnicos "frecuencia", "voltaje" y "fases" en la placa de identificación de un motor industrial?
8. **Termopar:** ¿Cuál es el fenómeno físico que permite a un termopar convertir una diferencia de temperatura en una pequeña señal de voltaje?
9. **Matriz de Transformación:** En robótica, ¿qué es una matriz de transformación homogénea y por qué se usa para cambiar la referencia de un punto entre dos sistemas coordenados?
10. **Modbus:** Investiga qué es el protocolo *Modbus* y por qué es el lenguaje universal para la comunicación entre dispositivos industriales.

---

## 5. Ingeniería en Videojuegos

### Listas y Tuplas

1. **Pixel Art:** Explica el concepto de resolución nativa en el contexto de videojuegos *pixel-art* y cómo afecta el renderizado de la imagen.
2. **Motor de Físicas:** ¿Qué es la gravedad en un motor de videojuegos y cómo se aplica como un vector en el cálculo de aceleración?
3. **Hitbox:** Diferencia entre *hitbox* (caja de colisión) y *hurtbox* (caja de daño); ¿por qué es vital que sus dimensiones sean eficientes?
4. **Loot Table:** ¿Qué es una *Loot Table* en juegos RPG y cómo se utiliza la probabilidad ponderada para equilibrar la economía del juego?
5. **Key Bindings:** Explica la importancia de la reasignación de teclas (*remapping*) para la accesibilidad en los juegos.
6. **RGBA:** ¿Por qué los colores en los motores gráficos suelen representarse como tuplas de 4 valores (RGBA) en lugar de solo 3 (RGB)?
7. **Atributos de Personaje:** ¿Qué diferencia existe entre un atributo base y un atributo derivado en el diseño de RPGs?
8. **Coordenadas de Interfaz (UI):** ¿Qué es el *sistema de coordenadas de pantalla* en comparación con el *sistema de coordenadas de mundo*?
9. **Versión de Software:** ¿Por qué es necesario seguir un estándar de versionamiento (ej. `Major.Minor.Patch`) al distribuir parches de software?
10. **Spritesheet:** ¿Qué es un *spritesheet* y por qué se organiza en columnas y filas para optimizar la carga de animaciones en memoria?

---

## 6. Ingeniería Mecánica

### Listas y Tuplas

1. **Módulo de Young:** Explica el significado físico del Módulo de Young en la Ley de Hooke aplicada a la deformación de materiales.
2. **Límite Elástico:** Define la diferencia entre *deformación elástica* y *deformación plástica* en un metal.
3. **Centro de Gravedad:** ¿Cómo afecta la posición del centro de gravedad a la estabilidad de un vehículo en una curva cerrada?
4. **Turbina de Gas:** Investiga el ciclo termodinámico (Brayton) bajo el cual opera una turbina de gas y la importancia de sus límites térmicos.
5. **Velocidad de Avance (Feed Rate):** ¿Qué diferencia hay entre la velocidad de avance y la velocidad de corte (RPM) en procesos de mecanizado?
6. **Tren de Engranajes:** ¿Qué es una relación de transmisión "multiplicadora" y "reductora" y en qué casos mecánicos se prefiere cada una?
7. **Normas ISO:** ¿Por qué es necesario que los tornillos y elementos de fijación sigan estándares internacionales como ISO o ANSI?
8. **Esfuerzo Cortante y Flexionante:** Diferencia conceptual entre esfuerzo cortante y esfuerzo flexionante en una viga estructural.
9. **Fricción:** Define los coeficientes de fricción estática y cinética; ¿por qué la estática suele ser mayor que la cinética?
10. **Cinemática:** En un mecanismo de 4 barras, ¿qué es una matriz de rotación y cómo ayuda a determinar la posición de los eslabones?

## Actuaría
1. **Siniestralidad:** Explica qué es un siniestro en el contexto de seguros y por qué es fundamental modelar su frecuencia y severidad para el cálculo de primas.
2. **Tasa de Interés:** Diferencia conceptualmente el interés simple del interés compuesto; ¿por qué este último es la base de la valuación financiera a largo plazo?
3. **Tabla de Mortalidad:** ¿Qué representa la función $q_x$ en una tabla de mortalidad y por qué es una estructura de datos inmutable para el actuario?
4. **Reserva Técnica:** Investiga qué es una reserva técnica y por qué un actuario debe clasificar los fondos por ramos de seguro (Vida, Autos, Gastos Médicos).
5. **Auditoría de Pólizas:** ¿Qué significa la "limpieza de datos" en una migración de sistemas legados a nuevos sistemas de gestión actuarial?
6. **Reincidencia:** En el análisis de siniestros, ¿por qué es vital identificar clientes reincidentes (intersección de siniestros en diferentes años) para la prevención de fraudes?
7. **Esperanza Matemática:** Explica cómo se calcula la esperanza matemática de un riesgo y cómo esta estructura permite a la aseguradora ser solvente.
8. **Modelo de Valor Presente:** ¿Qué significa traer flujos de dinero futuros a valor presente y qué papel juega la tasa de descuento en este cálculo?
9. **Modelos Estocásticos:** Define brevemente qué es un proceso estocástico y por qué los actuarios los usan para simular eventos que no tienen una certeza absoluta.
10. **Riesgo:** ¿Cómo se relaciona la teoría de conjuntos con la clasificación de riesgos en una población asegurada? (Ej. intersectar clientes fumadores con clientes mayores a 60 años).

## Ciencia de Datos
1. **Feature Engineering:** ¿Qué es la ingeniería de características (feature engineering) y por qué es considerada la etapa más importante en la creación de un modelo predictivo?
2. **Loss Function:** Define qué es una función de pérdida (loss function) y cuál es su objetivo durante el entrenamiento de un modelo de Machine Learning.
3. **One-Hot Encoding:** ¿Por qué la mayoría de los algoritmos de aprendizaje automático requieren que las variables categóricas (como ciudades o colores) sean transformadas mediante One-Hot Encoding?
4. **NLP (Procesamiento de Lenguaje Natural):** Explica qué es el análisis de frecuencia de palabras (como Bag of Words) y para qué sirve en el análisis de sentimiento.
5. **Dataset:** ¿Qué es un conjunto de datos (dataset) y cuál es la diferencia entre los datos de entrenamiento (train set) y los de prueba (test set)?
6. **Data Leakage:** Define qué es la "fuga de datos" (data leakage) y por qué invalida los resultados de un experimento de ciencia de datos.
7. **Outliers:** ¿Qué es un valor atípico (outlier) en un conjunto de datos y qué impacto tiene sobre la media aritmética?
8. **Normalización:** Explica por qué es necesario normalizar datos numéricos (como ingresos que van de 10k a 100k) antes de alimentar un modelo matemático.
9. **Matriz:** ¿Por qué el álgebra lineal, representada mediante matrices o tensores, es el motor computacional detrás de la Inteligencia Artificial?
10. **Exactitud vs. Precisión:** Diferencia entre los conceptos de exactitud (accuracy) y precisión (precision) al evaluar un modelo de clasificación.
