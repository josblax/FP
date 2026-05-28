# Ejercicios para Ciencia de Datos (Limpieza y Análisis)

## Nota: Aquí el casting es crucial para manejar datos que vienen como texto (ej. de un archivo CSV).

1. **Limpieza de Precios**: Capturar precio (input + casting). Si está vacío o es $0$, asignar "Media del sector"; si no, usar el valor capturado.
2. **Validación de Porcentajes**: Capturar precision (input + casting). Si no está en rango $0-100$, mostrar "Error"; si no, guardar dato.
3. **Filtrado de Outliers**: Capturar valor (input + casting). Si valor > 3 * desviacion, marcar "Atípico"; si no, incluir en promedio.
4. **Validación de Sensores**: Capturar temp (input + casting). Si temp > 50 o temp < -20, activar "Alerta"; si no, registrar.
5. **Etiquetado VIP**: Capturar compras (input + casting). Si $> 1000$ "Premium", si $> 500$ "Regular", si no "Nuevo".
6. **Verificación de Email**: Capturar email (texto). Si no contiene "@", mostrar "Formato inválido"; si no, procesar registro.
7. **Tiempo de Respuesta**: Capturar tiempo (input + casting). Si $> 5000$, marcar "Solicitud lenta"; si no, "Óptimo".
8. **Validación de Stock**: Capturar cantidad (input + casting). Si cantidad negativa, mostrar "Error"; si no, calcular total ventas.
9. **Detección de Duplicados**: Capturar ID (input). Si ID ya existe en la lista (comparación), mostrar "Usuario duplicado"; si no, agregar.
10. **Calidad de Modelo:** Capturar exactitud y tiempo (input + casting). Si exactitud >= 0.90 AND tiempo < 2, guardar; si no, descartar.
