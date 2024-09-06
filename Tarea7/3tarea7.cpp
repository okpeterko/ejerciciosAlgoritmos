#include <iostream>
using namespace std;

int main() {
    int operacion;
    double num1, num2;

    cout << "Seleccione una operación: \n1. Suma\n2. Resta\n3. Multiplicación\n4. División" << endl;
    cin >> operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch (operacion) {
        case 1:
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Error: División por cero" << endl;
            }
            break;
        default:
            cout << "Operación no válida" << endl;
            break;
    }

    return 0;
}
