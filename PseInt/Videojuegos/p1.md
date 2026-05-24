### Videojuegos

1. **Daño con Armadura**: Pide el daño base del ataque de un monstruo y la armadura del jugador. Calcula el daño final restando la armadura.

2. **Daño Crítico**: Pide el daño del arma y el multiplicador de crítico (ej. 2.0). Multiplica ambos para obtener el daño final.

3. **Economía de Vidas Extra**: Cada vida cuesta 100 monedas. Pide el total de monedas del jugador. Usa TRUNC(monedas / 100) para saber cuántas vidas ganó.

4. **Monedas Restantes**: Con los datos anteriores, usa monedas MOD 100 para saber con cuántas monedas se queda en el inventario.

5. **Subida de Nivel**: Pide la Experiencia Total necesaria y la Experiencia Actual del jugador. Resta para imprimir cuántos puntos le faltan.

6. **Distancia Euclidiana (Cuadrática)**: Pide las coordenadas (x1, y1) del jugador y (x2, y2) del enemigo. Calcula la distancia al cuadrado: $(x2-x1)^2 + (y2-y1)^2$.

7. **Curación de Poción**: Pide la salud actual y el valor de curación de la poción. Suma ambos valores para obtener la nueva salud.

8. **Daño por Segundo (DPS)**: Pide el daño total de un ataque y los segundos que tarda la animación. Divide para obtener el DPS.

9. **Multiplicador de Combo**: Pide el daño base y el número de golpes de combo actuales. Calcula: Daño * (1 + (Golpes * 0.1)).

10. **Puntos por Tiempo**: Un nivel da 15 puntos por cada segundo sobrante. Pide los segundos en el reloj y multiplica por 15 para la bonificación.
