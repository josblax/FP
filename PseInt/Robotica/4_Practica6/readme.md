## Ingeniería Robótica

### Enfoque en cinemática, sensores, odometría espacial y control de hardware.

1. **Cinemática Inversa (Espacio de Trabajo):** Mapear hasta dónde llega un brazo robótico articulado.
   * **Instrucciones:** Genera miles de combinaciones aleatorias de dos ángulos (Theta1, Theta2). Calcula las coordenadas (X,Y) finales con trigonometría (seno/coseno de numpy). Dibuja todos los puntos con `plt.scatter(s=1, alpha=0.1)`.
   * **Utilidad:** Delimita físicamente la "jaula" de trabajo de un robot industrial KUKA o FANUC para evitar colisiones humanas.
2. **Mapeo LIDAR (Radar 2D):** Representar la vista de un sensor ultrasónico escaneando 360 grados.
   * **Instrucciones:** Usa `np.linspace` de 0 a 2*pi para el ángulo, y simula distancias a una pared con `np.random.uniform`. Grafica en sistema polar usando `plt.polar`.
   * **Utilidad:** Los robots móviles (como las aspiradoras Roomba o coches autónomos) perciben el mundo usando mapeo polar.
3. **Respuesta PID (Error vs Tiempo):** Sintonizar un dron intentando mantener altura.
   * **Instrucciones:** Modela un Setpoint (línea punteada) y dibuja una onda amortiguada de un sistema subamortiguado que intenta llegar a esa línea. Usa `plt.plot`.
   * **Utilidad:** El Proporcional-Integral-Derivativo (PID) es el corazón del control robótico; los gráficos permiten ver si el sistema es estable.
4. **Odometría Diferencial (Path):** Trayectoria de un robot móvil de dos ruedas (X, Y) en el piso.
   * **Instrucciones:** Acumula incrementos simulados en X y Y. Grafica el recorrido con `plt.plot(x, y)` y mantén el aspecto igual con `plt.gca().set_aspect('equal')`.
   * **Utilidad:** Saber exactamente cómo la computadora cree que se movió el robot (Dead Reckoning) frente a la realidad.
5. **Consumo Energético de Motores (Torque vs Corriente):** Evaluando servomotores al cargar peso.
   * **Instrucciones:** Crea una relación lineal ascendente con un poco de ruido entre torque (kg/cm) y Amperios consumidos. Grafica usando `plt.scatter`.
   * **Utilidad:** Evitar quemar las tarjetas electrónicas (Motor Drivers) seleccionando el hardware correcto según las curvas del fabricante.
6. **Filtrado de Kalman (Ruido del Sensor):** Acondicionamiento de señales ruidosas.
   * **Instrucciones:** Genera una onda seno (verdad), añádele ruido alto con `np.random.normal` (sensor crudo). Superpone ambas con `plt.plot`.
   * **Utilidad:** En robótica nunca se confía en los datos crudos del sensor; se grafican para diseñar filtros digitales.
7. **Lectura de Encoder Óptico:** Señal en cuadratura para medir velocidad de una llanta.
   * **Instrucciones:** Crea dos ondas cuadradas desfasadas 90 grados utilizando la función `np.sign(np.sin(x))`. Usa `plt.step` (escalones).
   * **Utilidad:** Cómo interpreta el cerebro del robot si la llanta gira adelante o en reversa.
8. **Planificación de Ruta (Pathfinding):** Robot sorteando obstáculos en una cuadrícula.
   * **Instrucciones:** Crea una matriz 10x10 llena de ceros (libre) y unos (obstáculos). Usa `plt.imshow(cmap='Greys')` para visualizar el laberinto del robot.
   * **Utilidad:** Es la interfaz gráfica para probar algoritmos de IA como A* o Dijkstra.
9. **Estabilidad de Marcha (ZMP - Zero Moment Point):** Peso de un robot humanoide al caminar.
   * **Instrucciones:** Grafica el Centro de Masa (X,Y) sobreyectado en los polígonos de soporte (los pies) usando `plt.plot` para la trayectoria y rectángulos superpuestos.
   * **Utilidad:** Garantizar que un robot bípede (tipo Boston Dynamics) no se caiga.
10. **Alineación de Sistema de Visión Artificial:** Reconocimiento de centroides en una cámara.
    * **Instrucciones:** Dibuja un polígono (la "caja" de un objeto detectado) y su centro exacto. Usa `plt.scatter` para el centroide y `plt.plot` para el cuadro delimitador.
    * **Utilidad:** Control visual de calidad y robótica guiada por cámara.
