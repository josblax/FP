## Mecatrónica

### Fusión de mecánica, electrónica y sistemas de control; fuerte en dinámica y automatización.

1. **Diagrama de Bode (Magnitud):** Análisis en frecuencia de un filtro electrónico Paso-Bajos.
   * **Instrucciones:** Eje X es logarítmico (Frecuencias). Eje Y cae exponencialmente después de cierto umbral. Grafica usando `plt.semilogx`.
   * **Utilidad:** Diseño de tarjetas de control e instrumentación analógica (rechazar interferencia electromagnética).
2. **Curva de Carga de Capacitor:** Simulación del encendido de una fuente de alimentación.
   * **Instrucciones:** Eje de tiempo lineal. La ecuación es `Voltaje = V_max * (1 - np.exp(-t/(R*C)))`. Usa `plt.plot` y añade una asintota horizontal para el voltaje nominal.
   * **Utilidad:** Comprensión de transitorios electrónicos y diseño de timers.
3. **Perfil de Control Trapezoidal de Motor:** Planificador de movimiento (Motion Control).
   * **Instrucciones:** Crea un arreglo Y que suba en diagonal (aceleración), se mantenga plano (velocidad máxima), y baje en diagonal (desaceleración). Usa `plt.plot` con `plt.fill_between` para el área.
   * **Utilidad:** Automatización en CNC y bandas transportadoras para no derramar piezas ni romper mecánicas.
4. **Histéresis Magnética de un Núcleo:** Comportamiento de solenoides y transformadores.
   * **Instrucciones:** Usa ecuaciones paramétricas de seno y coseno deformadas para generar el lazo cerrado de histéresis. Dibuja la curva B-H con `plt.plot`.
   * **Utilidad:** Análisis de pérdida de eficiencia energética en actuadores electromecánicos.
5. **Señal PWM (Modulación por Ancho de Pulso):** Controlar el brillo de un LED o potencia de motor.
   * **Instrucciones:** Genera una señal digital (0 y 1) donde los "1s" duren el 30% del ciclo usando la operación módulo o comparadores. Grafica con `plt.step`.
   * **Utilidad:** Comprender cómo los microcontroladores (Arduino, PIC) entregan potencia variable simulando señales analógicas.
6. **Espectro de Vibraciones (Mantenimiento Predictivo):** Frecuencias de resonancia de una turbina.
   * **Instrucciones:** Usa la Transformada Rápida de Fourier (puedes simular el output con unos pocos picos artificiales altos) y grafica en el dominio de la frecuencia usando diagrama de palillos: `plt.stem`.
   * **Utilidad:** Diagnóstico de baleros rotos o desbalanceo mecánico mediante acelerómetros antes de que la máquina explote.
7. **Control PID de Nivel de Tanque:** Dinámica de fluidos y electroválvulas.
   * **Instrucciones:** Grafica el Setpoint (nivel deseado), perturbaciones (fugas) y cómo reacciona el llenado. Usa dos gráficas combinadas con `plt.subplots`.
   * **Utilidad:** Implementación clásica de mecatrónica en la industria petrolera o alimenticia.
8. **Cinemática 3D Simplificada:** Brazo articulado en el espacio.
   * **Instrucciones:** Carga las herramientas 3D (`from mpl_toolkits.mplot3d import Axes3D`). Genera coordenadas (X, Y, Z) conectadas por líneas y usa `ax.plot` en 3D.
   * **Utilidad:** Representar el entorno real espacial del robot, clave para programación offline.
9. **Respuesta Térmica de un Disipador Electrónico:** Temperatura en el tiempo.
   * **Instrucciones:** Curva de calentamiento logarítmica vs tiempo continuo usando `np.log` combinada con `plt.plot` y `plt.axhline` para la Temperatura Límite de Falla del Silicio.
   * **Utilidad:** Evitar la destrucción térmica de microprocesadores e IGBTs de potencia.
10. **Lectura de Instrumentación Compleja (IMU):** Giróscopo, acelerómetro y magnetómetro.
    * **Instrucciones:** Crea 3 subgráficos apilados verticalmente usando `fig, axs = plt.subplots(3, 1)`. Asigna a cada uno una serie de datos aleatorios.
    * **Utilidad:** Construcción de interfaces Hombre-Máquina (HMI) para lectura de sensores de vuelo o navegación.
