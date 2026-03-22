/******************************************************************************
Autor: Obed Joacim Galván Alvarado.
Fecha: 22/03/26
Descripción: El siguiente código nos ayuda a generar la suma, resta, multiplicacio
y división de dos numeros ingresados por el usuario.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    // Solicitar primer número
    cout << "Hola, escribe tu primer numero: ";
    cin >> num1;

    // Solicitar segundo número
    cout << "Bien, escribe tu segundo numero: ";
    cin >> num2;

    // Mostrar resultados
    cout << "\nEste es el resultado de la suma, resta, multiplicacion y division:\n";
    cout << "1. Suma: " << num1 + num2 << endl;
    cout << "2. Resta: " << num1 - num2 << endl;
    cout << "3. Multiplicacion: " << num1 * num2 << endl;
    cout << "4. Division: " << num1 / num2 << endl;

    return 0;
}