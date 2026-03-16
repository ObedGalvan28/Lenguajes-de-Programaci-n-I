/******************************************************************************
Autor:Obed Joacim Galván Alvarado
Fecha:16/03/25
Descripción:El siguiente código calcula la edad de una persona, para determinar
si es mayor de edad o menor de edad para ingresar a un Bar.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string edadTexto;
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edadTexto;

    // Validar máximo 2 dígitos
    if (edadTexto.length() > 2) {
        cout << "Error: solo puedes ingresar maximo 2 digitos." << endl;
        return 0;
    }

    // Convertir a entero
    edad = stoi(edadTexto);

    // Validar mayoría de edad
    if (edad >= 18) {
        cout << "Eres mayor de edad, puedes ingresar." << endl;
    } else {
        cout << "Upss, lo siento eres menor de edad no puedes ingresar." << endl;
    }

    return 0;
}