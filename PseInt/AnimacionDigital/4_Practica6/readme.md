## Animación Digital
### Estos ejercicios se enfocan en la representación matemática del movimiento, color y física de partículas, fundamentales en los motores de render y animación (como Maya, Blender o Unity).

1. **Curva de Aceleración Suave (Ease-In / Ease-Out):** Generar una gráfica de la función Sigmoide que simule el arranque y frenado suave de un personaje.
   * **Instrucciones:** Usa `np.linspace` de -6 a 6. Aplica la fórmula `1 / (1 + np.exp(-x))`. Grafica con `plt.plot(x, y)`.
   * **Utilidad:** Los animadores usan curvas de interpolación para evitar movimientos robóticos y dar naturalidad (peso e inercia) a los objetos.
2. **Trayectoria de Partículas (Chispas):** Simular el trayecto parabólico de 5 chispas saliendo de una explosión.
   * **Instrucciones:** Genera un arreglo de tiempo `np.linspace`. Usa la ecuación de tiro parabólico para X y Y con diferentes velocidades iniciales `np.random.rand`. Usa `plt.scatter` o `plt.plot`.
   * **Utilidad:** El gráfico de dispersión ayuda a visualizar y programar Sistemas de Partículas en Efectos Visuales (VFX).
3. **Análisis de Luminancia (Gris):** Visualizar el balance de blancos de un frame.
   * **Instrucciones:** Genera un arreglo de 1000 píxeles aleatorios con `np.random.normal` (media 128, desviación 30). Usa `plt.hist(datos, bins=256)`.
   * **Utilidad:** El histograma es la herramienta estándar en postproducción (Premiere/DaVinci) para corregir el color y contraste de una escena.
4. **Rebote de Pelota (Amortiguamiento):** Modelar la altura de una pelota que rebota y pierde energía.
   * **Instrucciones:** Crea el tiempo con `np.linspace`. La altura es el valor absoluto de una onda senoidal atenuada: `np.abs(np.sin(x) * np.exp(-x/3))`. Usa `plt.plot`.
   * **Utilidad:** Muestra físicamente cómo el *Damping* (amortiguamiento) afecta la animación de sólidos elásticos.
5. **Esqueleto y Rigging (Cinemática):** Dibujar un brazo 2D (hombro, codo, muñeca).
   * **Instrucciones:** Crea listas de coordenadas X `[0, 2, 4]` y Y `[0, 3, 1]`. Usa `plt.plot` con `marker='o'` y un ancho de línea grueso (`linewidth=4`).
   * **Utilidad:** Entender cómo se conectan los huesos (Joints) y vértices en un software 3D para la cinemática directa.
6. **Ruido Perlin 1D (Temblor de Cámara):** Simular el movimiento caótico pero continuo de un "Camera Shake".
   * **Instrucciones:** Combina tres ondas senoidales de diferentes frecuencias y amplitudes: `np.sin(x) + 0.5*np.sin(3*x) + 0.2*np.sin(10*x)`. Usa `plt.plot`.
   * **Utilidad:** Es la base de la generación procedural para añadir "imperfecciones" realistas en cámaras virtuales.
7. **Sincronización Labial (Onda de Audio):** Visualizar un clip de voz para animar la boca de un personaje.
   * **Instrucciones:** Usa `np.sin(x)` multiplicada por ruido `np.random.uniform` para variar la amplitud. Grafica usando `plt.plot`.
   * **Utilidad:** Los animadores necesitan visualizar la forma de onda de los diálogos para colocar los *Keyframes* de la boca (Lip-sync).
8. **Malla 2D (Grid de Deformación):** Visualizar el esqueleto de un plano antes de aplicar un modificador (como "Wave").
   * **Instrucciones:** Usa `np.meshgrid` para generar una cuadrícula y grafica los puntos usando `plt.scatter(X, Y)`.
   * **Utilidad:** Ayuda a comprender la densidad poligonal y cómo los vértices se distribuyen en una malla de modelado 3D.
9. **Curva de Experiencia del Jugador / Historia:** Graficar el nivel de tensión narrativa de un cortometraje.
   * **Instrucciones:** Crea un arreglo manual de puntos críticos de tensión (X=Minutos, Y=Tensión) e interpola con `plt.step` (escalones) o `plt.plot`.
   * **Utilidad:** Sirve para evaluar si el "Story arc" tiene los picos de acción y reposo necesarios en la producción narrativa.
10. **Paleta de Colores Extraída:** Simular la frecuencia de los colores dominantes de un personaje.
    * **Instrucciones:** Crea un gráfico de pastel (`plt.pie`) usando proporciones ficticias `[40, 30, 20, 10]` y asígnales hex-codes en el argumento `colors`.
    * **Utilidad:** Vital en la preproducción y arte conceptual para garantizar la teoría del color y armonía visual.
