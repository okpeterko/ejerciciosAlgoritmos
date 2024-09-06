#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese la edad: ";
    cin >> edad;

    if (edad >= 0 && edad <= 12) {
        cout << "Niño" << endl;
    } else if (edad >= 13 && edad <= 17) {
        cout << "Adolescente" << endl;
    } else if (edad >= 18 && edad <= 64) {
        cout << "Adulto" << endl;
    } else if (edad >= 65) {
        cout << "Adulto mayor" << endl;
    } else {
        cout << "Edad no válida" << endl;
    }

    return 0;
}