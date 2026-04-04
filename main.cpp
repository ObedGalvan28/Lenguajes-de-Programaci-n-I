/******************************************************************************
Autor:Obed Joacim Galvan Alvarado.
Fecha:04/04/2026
Descripción: El siguiente código nos ayudara a calcular el RFC sin homoclave de
una persona.
*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Convertir a mayúsculas
string mayusculas(string texto) {
    transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
    return texto;
}

// Buscar primera vocal interna
char primeraVocalInterna(string apellido) {
    for (int i = 1; i < apellido.length(); i++) {
        if (apellido[i] == 'A' || apellido[i] == 'E' || apellido[i] == 'I' ||
            apellido[i] == 'O' || apellido[i] == 'U') {
            return apellido[i];
        }
    }
    return 'X';
}

// Evitar malas palabras
void corregirPalabra(string &rfc) {
    string malas[] = {
        "BUEI","BUEY","CACA","CAGA","COGE","COJA","COJE","COJI",
        "COJO","CULO","FETO","GUEY","JOTO","KACA","KULO","MAME",
        "MAMO","MEAR","MEON","MION","MOCO","MULA","PEDA","PEDO",
        "PENE","PUTA","PUTO","QULO","RATA"
    };

    for (string palabra : malas) {
        if (rfc == palabra) {
            rfc[3] = 'X';
        }
    }
}

int main() {
    string nombre, apellidoPaterno, apellidoMaterno, fecha;
    string rfc;

    cout << "Ingresa tu primer nombre: ";
    cin >> nombre;

    cout << "Ingresa tu apellido paterno: ";
    cin >> apellidoPaterno;

    cout << "Ingresa tu apellido materno: ";
    cin >> apellidoMaterno;

    cout << "Ingresa tu fecha de nacimiento (dd/mm/aaaa): ";
    cin >> fecha;

    nombre = mayusculas(nombre);
    apellidoPaterno = mayusculas(apellidoPaterno);
    apellidoMaterno = mayusculas(apellidoMaterno);

    // Formar RFC
    rfc += apellidoPaterno[0];
    rfc += primeraVocalInterna(apellidoPaterno);
    rfc += apellidoMaterno[0];
    rfc += nombre[0];

    // Corregir malas palabras
    corregirPalabra(rfc);

    // Agregar fecha AAMMDD
    rfc += fecha.substr(8,2);
    rfc += fecha.substr(3,2);
    rfc += fecha.substr(0,2);

    cout << "\nTu RFC sin homoclave es: " << rfc << endl;

    return 0;
}