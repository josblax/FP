## Ingeniería en Sistemas Computacionales

## Ejercicios sobre rendimiento de software, arquitecturas, redes y uso de hardware.

1. **Monitoreo de CPU y RAM:** Visualizar la carga de un servidor web a lo largo de 24 horas.
   * **Instrucciones:** Usa `np.linspace` para 24 horas. Para CPU, usa ruido con picos; para RAM, una línea ascendente escalonada. Grafícalos usando `plt.plot` con leyendas separadas.
   * **Utilidad:** Simula un Dashboard de DevOps (tipo Grafana) vital para el monitoreo de infraestructura en la nube.
2. **Complejidad Algorítmica (Big O):** Comparar la escalabilidad de tres algoritmos de ordenamiento.
   * **Instrucciones:** Eje X es el tamaño de datos (`np.linspace`). Grafica Y1=X (Lineal), Y2=X^2 (Burbuja), Y3=X*log(X) (Merge Sort) usando `plt.plot`. Limita el eje Y con `plt.ylim`.
   * **Utilidad:** Visualizar teóricamente por qué un mal código puede colapsar al procesar millones de registros.
3. **Distribución de Latencia de Red (Ping):** Mostrar los tiempos de respuesta entre cliente y base de datos.
   * **Instrucciones:** Genera datos con `np.random.normal` (media 20ms) pero añade a mano 5 valores atípicos (300ms+). Muestra el resultado con `plt.hist`.
   * **Utilidad:** Diagnóstico de redes. Los picos (long tail) revelan cuellos de botella en la conexión a internet o queries lentos.
4. **Topología de Red (Grafos Simples):** Representar servidores conectados a un Switch central.
   * **Instrucciones:** Usa `plt.scatter` para ubicar un punto central y 5 puntos alrededor. Dibuja líneas (`plt.plot`) conectando el centro con el perímetro.
   * **Utilidad:** Base para modelar la arquitectura y rutas críticas de una red LAN o de microservicios.
5. **Carga de Trabajo Asíncrona (Threads):** Simular el tiempo de ejecución de 4 hilos procesando archivos.
   * **Instrucciones:** Usa `plt.barh` (barras horizontales) simulando un Gantt para mostrar en qué momento empieza y termina cada Thread.
   * **Utilidad:** Ayuda a visualizar la programación concurrente, bloqueos (Deadlocks) y procesamiento paralelo.
6. **Volumen de Lectura/Escritura en Disco:** Tráfico IOPS de una Base de Datos en el día.
   * **Instrucciones:** Crea dos arreglos (Lecturas y Escrituras). Úsalos dentro de un gráfico de áreas apiladas `plt.stackplot`.
   * **Utilidad:** Dimensionar el almacenamiento (SSD vs HDD) y entender los momentos de máxima demanda (cuándo hacer Backups).
7. **Pérdida de Paquetes vs Distancia WiFi:** Relación entre atenuación de señal y errores TCP.
   * **Instrucciones:** Usa `np.linspace` para la distancia. Eje Y son errores exponenciales con ruido. Grafica con `plt.scatter` usando colores fuertes.
   * **Utilidad:** Arquitectura de telecomunicaciones, para planear la ubicación de routers/repetidores.
8. **Deuda Técnica a lo largo de Sprints:** Líneas de código vs Bugs reportados.
   * **Instrucciones:** Genera semanas (eje X). Usa gráficos de barras `plt.bar` superpuestos (dos llamadas a bar con distinta anchura) o agrupados, para medir avance vs errores.
   * **Utilidad:** Métricas ágiles para líderes técnicos o Scrum Masters.
9. **Compresión de Imágenes (Espacio vs Calidad):** Decaimiento de peso en MB al reducir resolución.
   * **Instrucciones:** Crea curva de calidad (100% a 10%) e interpola peso usando función logarítmica. Usa `plt.plot` con rejilla `plt.grid`.
   * **Utilidad:** Algoritmos de optimización web. Aprender los "trade-offs" computacionales.
10. **Cuota de Mercado de Lenguajes de Programación:** Proporción de código en un repositorio (Python, Java, C++).
    * **Instrucciones:** Genera un arreglo `[45, 25, 20, 10]`. Grafícalo con un gráfico de pastel moderno: `plt.pie(explode=[0.1, 0, 0, 0])` (desprendiendo el más grande).
    * **Utilidad:** Análisis descriptivo de las tecnologías que sostiene una empresa.
