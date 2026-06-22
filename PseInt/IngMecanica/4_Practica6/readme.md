## Ingeniería Mecánica

### Centrado fuertemente en estática, resistencia de materiales, fluidos, termodinámica y vibraciones.

1. **Curva Esfuerzo-Deformación (Tracción):** Test destructivo de acero en laboratorio.
   * **Instrucciones:** Grafica un tramo lineal (zona elástica), una cresta (cedencia) y una curva hasta la ruptura (zona plástica). Usa `plt.plot(x, y)` anotando el límite de fluencia con `plt.annotate`.
   * **Utilidad:** Identificar si un material resistirá el peso estructural de un edificio o chasis antes de deformarse permanentemente.
2. **Círculo de Mohr (Esfuerzos Principales):** Tensiones 2D en un elemento plano.
   * **Instrucciones:** Dibuja un círculo dado un centro y radio (calculados teóricamente). Asegura proporción 1:1 en la pantalla con `plt.gca().set_aspect('equal')`.
   * **Utilidad:** Encontrar el punto exacto y ángulo de esfuerzo cortante máximo para evitar fallas por cizalladura.
3. **Ciclo Termodinámico (Diagrama P-V):** Máquina de vapor o motor de 4 tiempos Otto.
   * **Instrucciones:** Traza isócoras (líneas verticales), isóbaras (horizontales) y curvas de expansión/compresión adiabática (curvas `P*V**k = c`). Forma el circuito cerrado con `plt.plot`.
   * **Utilidad:** Estudiar la eficiencia de motores térmicos y calcular el área bajo la curva (Trabajo mecánico generado).
4. **Cinemática de un Mecanismo de 4 Barras:** Trayectoria dibujada por el punto de acople.
   * **Instrucciones:** Genera la ecuación paramétrica del recorrido del acoplador. Dibuja la trayectoria en lazo cerrado tipo forma de "frijol" o "ocho" usando `plt.plot`.
   * **Utilidad:** Base de diseño de limpiaparabrisas, grúas o máquinas textiles; asegura que la pieza final se mueva como se planea.
5. **Diagrama de Moody Simplificado (Pérdida en Tuberías):** Fluido hidrodinámico vs Fricción.
   * **Instrucciones:** Número de Reynolds en Eje X y Factor de Fricción en Eje Y. Usa escala logarítmica en ambos ejes con el comando `plt.loglog`.
   * **Utilidad:** Ingeniería de fluidos/tuberías HVAC para seleccionar las bombas hidráulicas adecuadas.
6. **Curva de Bomba Centrífuga (Carga vs Caudal):** Punto de operación del sistema hidráulico.
   * **Instrucciones:** Intersección visual de dos gráficas: Curva de la bomba (parábola cóncava) y curva de resistencia de tubería (parábola convexa). Usa `plt.plot`.
   * **Utilidad:** Operación de turbomaquinaria; previene el fenómeno destructivo de "Cavitación".
7. **Perfil Aerodinámico (Coordenadas NACA):** Generar y visualizar el diseño del ala de un avión.
   * **Instrucciones:** Utiliza las fórmulas NACA de 4 dígitos para definir extradós e intradós de la lágrima. Grafica usando `plt.plot(x, y)` obligando el aspecto equal a la figura.
   * **Utilidad:** Análisis de dinámica de fluidos y levantamiento sustentador aerodinámico (Lift).
8. **Esfuerzo a la Fatiga (Curva S-N o Wöhler):** Rotura por desgaste repetitivo en ejes de trenes.
   * **Instrucciones:** Eje Y (Esfuerzo lineal), Eje X (Ciclos a ruptura, logarítmico). Dibuja una línea que descienda y luego se vuelva plana (Límite de fatiga). Usa `plt.semilogx`.
   * **Utilidad:** Evitar desastres catastróficos; dicta cuántos millones de giros resistirá el rin de un automóvil de F1.
9. **Distribución de Temperaturas en Conducción de Aletas:** Transferencia de calor 1D (Termodinámica).
   * **Instrucciones:** Distribución de temperatura que cae exponencialmente a lo largo de una aleta de aluminio en un radiador. Usa `plt.plot`.
   * **Utilidad:** Optimización térmica. Ayuda a diseñar disipadores eficaces para autos y refrigeradores.
10. **Diagrama de Cortante y Momento Flector (Vigas):** Estática estructural bajo cargas distribuidas.
    * **Instrucciones:** Dibuja áreas apiladas positivas y negativas que muestran las reacciones de una viga simplemente apoyada con una carga central mediante escalones `plt.step` e integraciones `plt.fill_between`.
    * **Utilidad:** Esencial en la ingeniería civil/mecánica para saber dónde poner los refuerzos de acero sin desperdiciar material.
