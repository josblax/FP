## Ingeniería en Videojuegos

### Ejercicios sobre telemetría, balance de meta, generación procedural y optimización de renderizado.

1. **Retención de Jugadores (Curva de Churn):** Caída de la base de usuarios en los primeros 30 días post-lanzamiento.
   * **Instrucciones:** Un eje descendente drástico al inicio que se aplana. Ecuación exponencial `100 * np.exp(-0.15*x)`. Usa `plt.plot` con área sombreada abajo (`fill_between`).
   * **Utilidad:** Métrica de negocio principal (KPI) en juegos Free-To-Play o móviles para medir la viabilidad financiera.
2. **Heatmap de Muertes (Level Design):** Dónde se frustran los jugadores en un calabozo.
   * **Instrucciones:** Genera puntos aleatorios, concentrando más puntos en zonas de "jefes" usando distribuciones normales. Grafica usando puntos semi-transparentes: `plt.scatter(alpha=0.3, c='red')` o densidades `plt.hexbin`.
   * **Utilidad:** El diseñador de niveles (Level Designer) analiza cuellos de botella y balancea la dificultad estructural del mapa.
3. **Distribución del "Meta" (Armas Más Usadas vs Daño):** Balance multijugador.
   * **Instrucciones:** Para 20 armas simuladas, grafica la Frecuencia de Uso (X) vs Daño por Segundo/DPS (Y). Usa `plt.scatter` nombrando los puntos extremos con `plt.text`.
   * **Utilidad:** Ayuda a los Game Designers a "Nerfear" o "Buffear" ítems fuera de balance (los *Overpowered* en la esquina superior derecha).
4. **Terreno Procedural (Generación de Montañas):** Entendiendo Perlin Noise / Ruido Fractal 1D.
   * **Instrucciones:** Suma ondas de múltiples frecuencias (Octavas) usando `np.sin` y ruido. Rellena el perfil terrestre hacia abajo usando `plt.fill_between(x, y, 0, color='saddlebrown')`.
   * **Utilidad:** Base matemática que juegos como Minecraft o No Man's Sky utilizan para generar mapas infinitos.
5. **Costo de Habilidades vs Poder (Árbol de Habilidades RPG):** Balanceo económico.
   * **Instrucciones:** Gráfico de barras `plt.bar` comparando costo de Maná/Oro contra los Puntos de Daño que produce. Agrupa las barras por habilidad.
   * **Utilidad:** Asegura que exista una progresión justa para que el jugador no rompa la economía interna del título.
6. **Profiling de Rendimiento (Frame Drops):** FPS in-game a lo largo de 60 segundos de estrés.
   * **Instrucciones:** Serie de tiempo aleatoria cerca de 60 FPS, pero con caídas bruscas a 15 FPS generadas a propósito. Usa `plt.plot` rojo para las caídas (condicional en numpy).
   * **Utilidad:** Identificar "Memory Leaks" o mallas hiper-densas (polycount) que traban el juego en consolas.
7. **Trayectoria Balística Afectada por Drag:** Proyectiles (Balas, Flechas, Granadas).
   * **Instrucciones:** Simulación de física integrando la gravedad y la resistencia del viento, que desvía la parábola pura. Muestra ambas (ideal vs real) con `plt.plot`.
   * **Utilidad:** El *Physics Programmer* necesita esto para programar armas realistas sin consumir recursos del motor (Unity/Unreal).
8. **Curva de Experiencia Requerida (XP Pacing):** Nivel del personaje vs Experiencia Acumulada.
   * **Instrucciones:** Fórmula poli-exponencial `y = x**2.5 * 100`. Grafícala usando `plt.plot`.
   * **Utilidad:** Evitar el "Grinding" excesivo en etapas avanzadas de los MMORPG (Ej. World of Warcraft).
9. **Distribución de Elo/Rankings (Matchmaking):** Campana de rangos desde Bronce hasta Grandmaster.
   * **Instrucciones:** Crea una distribución Normal. Corta en segmentos (bins) y asigna un color a cada sección (Gris, Oro, Platino...). Usa `plt.hist(stacked=True)`.
   * **Utilidad:** Validar matemáticamente que tu algoritmo agrupa correctamente a los jugadores justos en eSports.
10. **Gráfico de Radar para Stats de Personajes:** Fuerzas y debilidades.
    * **Instrucciones:** Crea gráficos de araña/polar proyectando 5 ejes (Fuerza, Magia, Agilidad...). Dibuja el polígono conectado cerrado en `plt.polar`.
    * **Utilidad:** La vista clásica de pantalla de selección de peleadores tipo Street Fighter o FIFA.
