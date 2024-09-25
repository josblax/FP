// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    // 1. Entero (int)
    int numeroEntero = 42;
    cout << "Entero: " << numeroEntero << endl;

    // 2. Entero corto (short int)
    short int numeroCorto = 32000;
    cout << "Entero corto: " << numeroCorto << endl;

    // 3. Entero largo (long int)
    long int numeroLargo = 1234567890L;
    cout << "Entero largo: " << numeroLargo << endl;

    // 4. Entero sin signo (unsigned int)
    unsigned int numeroSinSigno = 4000000000U;
    cout << "Entero sin signo: " << numeroSinSigno << endl;

    // 5. Entero corto sin signo (unsigned short int)
    unsigned short int numeroCortoSinSigno = 65000;
    cout << "Entero corto sin signo: " << numeroCortoSinSigno << endl;

    // 6. Entero largo sin signo (unsigned long int)
    unsigned long int numeroLargoSinSigno = 4000000000UL;
    cout << "Entero largo sin signo: " << numeroLargoSinSigno << endl;

    // 7. Entero con signo explícito (signed int)
    signed int numeroConSigno = -42;
    cout << "Entero con signo: " << numeroConSigno << endl;

    // 8. Entero corto con signo explícito (signed short int)
    signed short int numeroCortoConSigno = -32000;
    cout << "Entero corto con signo: " << numeroCortoConSigno << endl;

    // 9. Entero largo con signo explícito (signed long int)
    signed long int numeroLargoConSigno = -1234567890L;
    cout << "Entero largo con signo: " << numeroLargoConSigno << endl;

    // 10. Entero largo largo (long long int)
    long long int numeroLargoLargo = 123456789012345LL;
    cout << "Entero largo largo: " << numeroLargoLargo << endl;

    return 0;
}


