# switch case...
Explicación:
switch (opcion): Evalúa la variable opcion.
case 1:: Si opcion es igual a 1, ejecuta el bloque de código correspondiente.
break;: Termina la ejecución del switch para evitar que se ejecuten los siguientes casos.
default:: Se ejecuta si ninguna de las opciones anteriores coincide.

```C++

    int opcion = 2;

    switch (opcion) {
        case 1:
            std::cout << "Opción 1 seleccionada." << std::endl;
            break;
        case 2:
            std::cout << "Opción 2 seleccionada." << std::endl;
            break;
        case 3:
            std::cout << "Opción 3 seleccionada." << std::endl;
            break;
        default:
            std::cout << "Opción no válida." << std::endl;
            break;
    }

    



```
