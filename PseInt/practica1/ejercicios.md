## Ejercicios Ingeniería Mecánica.

1. **Presión de Fluido**: Pide la fuerza aplicada (Newtons) y el área (m²). Calcula e imprime la presión resultante ($P = F / A$).

2. **Volumen de un Cilindro**: Pide el radio de la base y la altura. Calcula el volumen usando la aproximación de Pi como 3.1416 ($V = 3.1416 * radio^2 * altura$).

3. **Densidad de Material**: Pide la masa (kg) y el volumen (m³) de un bloque de metal. Calcula su densidad ($D = M / V$).

4. **Relación de Engranajes**: Pide los dientes del engranaje motor y del engranaje de salida. Calcula la relación dividiendo salida entre motor.

5. **Velocidad de Salida**: Usando los datos del ejercicio anterior, pide las RPM del motor y divídelas entre la relación calculada para obtener las RPM de salida.

6. **Trabajo Mecánico**: Pide la fuerza (N) aplicada a un bloque y la distancia (m) que se desplazó. Imprime el trabajo realizado en Joules ($W = F * d$).

7. **Potencia Mecánica**: Pide el trabajo realizado (J) del ejercicio anterior y el tiempo (s) que tardó. Calcula la potencia en Watts ($P = W / t$).

8. **Energía Cinética**: Pide la masa (kg) de un vehículo y su velocidad (m/s). Calcula su energía ($0.5 * masa * velocidad^2$).

9. **Conversión a Kelvin**: Pide una temperatura de operación en grados Celsius. Súmale 273.15 para convertirla a grados Kelvin.

10. **Eficiencia de Motor**: Pide la energía de entrada y el trabajo útil de salida. Divide salida entre entrada y multiplica por 100 para dar el porcentaje de eficiencia.

## Ejercicios Animación Digital

1. **Total de Fotogramas**: Pide la duración de una animación en segundos y la tasa de fotogramas (FPS). Multiplícalos para obtener el total de dibujos necesarios.
   
2. **Duración en Segundos**: Al revés, pide el total de fotogramas renderizados y los FPS del proyecto. Divide el primero entre el segundo para saber cuánto durará en segundos.

3. **Tiempo de Renderizado**: Pide el número de fotogramas pendientes y el tiempo (en minutos) que tarda la PC en renderizar uno solo. Calcula el total de minutos de espera.

4. **Pixeles Totales**: Pide el ancho y el alto de una imagen en pixeles (ej. 1920 y 1080). Multiplícalos para saber el total de pixeles a procesar.

5. **Escala 16:9**: Pide el nuevo ancho de un lienzo. Para mantener la proporción de cine (16:9), multiplica el ancho por 9 y divídelo entre 16 para obtener el alto exacto.

6. **Peso de Archivo Crudo**: Pide el total de pixeles de una imagen. Si cada pixel pesa 4 bytes (RGBA), multiplica para obtener el peso total del archivo en bytes.

7. **Conversión a Minutos de Animación**: Pide el total de segundos que dura el corto. Usa división entera (TRUNC(segundos / 60)) para saber los minutos completos.

8. **Segundos Sobrantes**: Pide el total de segundos del ejercicio anterior y usa MOD 60 para saber los segundos sueltos que sobran después de contar los minutos.

9. **Avance Lineal**: Pide la distancia (en pixeles) que debe recorrer un personaje y el número de fotogramas totales. Calcula cuántos pixeles debe moverse por fotograma (división).

10. **Cuadros Intermedios (Inbetweens)**: Pide el número del fotograma clave inicial y del final. Réstalos y quítale 1 para saber cuántos dibujos intermedios se deben hacer.

## Ejercicios Sistemas Computacionales

1. **Conversor de Almacenamiento**: Pide el tamaño de un archivo en Megabytes. Multiplica por 1024 para mostrar su peso en Kilobytes.

2. **Capacidad de Direccionamiento**: Pide el tamaño de un registro en bits (ej. 32). Calcula el número máximo de valores que puede almacenar ($2^{bits}$).

3. **Particionamiento Lógico**: Pide el tamaño total de un disco (GB) y el tamaño deseado por partición (GB). Usa TRUNC para calcular cuántas particiones exactas se pueden crear.

4. **Espacio sin Particionar**: Pide los mismos datos del ejercicio anterior, pero usa MOD para mostrar cuántos GB quedarán sobrando sin asignar.

5. **Latencia de Red (Ping)**: Pide el tiempo total (ida y vuelta) de un paquete en milisegundos. Divide entre 2 para estimar el tiempo de un solo trayecto.

6. **Tiempo de Descarga**: Pide el peso de un archivo (MB) y la velocidad de descarga de la red (MB/s). Calcula cuántos segundos tardará la descarga.

7. **Porcentaje de RAM**: Pide la RAM total del sistema y la RAM actualmente en uso. Calcula el porcentaje de uso actual (Usado / Total) * 100.

8. **Ciclos de Reloj**: Pide la frecuencia de un procesador en Hz y el tiempo de ejecución de un programa en segundos. Multiplica ambos para saber los ciclos gastados.

9. **Instrucciones por Ciclo (IPC)**: Pide el número de instrucciones de un programa y el total de ciclos calculados arriba. Divide instrucciones entre ciclos.

10. **Conversión a Horas de Uptime**: Pide el tiempo de actividad del servidor en minutos. Usa TRUNC(minutos / 60) para obtener las horas enteras y minutos MOD 60 para los minutos sobrantes.
