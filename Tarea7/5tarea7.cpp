#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese la nota final del estudiante (0-100): ";
    cin >> nota;

    char calificacion;
    if (nota >= 90) {
        calificacion = 'A';
    } else if (nota >= 80) {
        calificacion = 'B';
    } else if (nota >= 70) {
        calificacion = 'C';
    } else if (nota >= 60) {
        calificacion = 'D';
    } else {
        calificacion = 'F';
    }

    cout << "Calificación: " << calificacion << endl;

    switch (calificacion) {
        case 'A':
            cout << "Excelente trabajo" << endl;
            break;
        case 'B':
            cout << "Buen trabajo" << endl;
            break;
        case 'C':
            cout << "Necesitas mejorar" << endl;
            break;
        case 'D':
            cout << "Debes esforzarte más" << endl;
            break;
        case 'F':
            cout << "No has aprobado" << endl;
            break;
        default:
            cout << "Calificación no válida" << endl;
            break;
    }

    return 0;
}
