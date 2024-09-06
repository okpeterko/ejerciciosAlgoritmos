#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;
    cout << "Ingrese el primer lado: ";
    cin >> lado1;
    cout << "Ingrese el segundo lado: ";
    cin >> lado2;
    cout << "Ingrese el tercer lado: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triángulo es equilátero" << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "El triángulo es isósceles" << endl;
    } else {
        cout << "El triángulo es escaleno" << endl;
    }

    return 0;
}
