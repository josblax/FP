// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    // Declarar e imprimir un texto

    string texto0 = "Hola, mundo!";
    cout << texto0 << endl;

    // Unir dos textos en uno

    string textoa = "Hola, ";
    string textob = "mundo!";
    string saludo = textoa + textob;
    cout << saludo << endl;


    // Introducir un valor en una variable de texto (string)
    // usando el teclado

    string nombre;
    cout << "Introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << "!" << endl;


    // Introducir una linea completa de texto (string)
    cin.ignore();
    string nombreCompleto;
    cout << "Introduce una linea de texto: ";
    getline(cin, nombreCompleto);
    cout << "tu nombre completo : " << nombreCompleto << endl;
}
