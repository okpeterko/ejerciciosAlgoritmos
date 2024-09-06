#include <iostream>
using namespace std;

void tribunacci(int a, int b, int c, int limite) {
    int siguiente;
    
    cout << "Secuencia de Tribonacci: " << endl;
    cout << a << " " << b << " " << c << " ";

    while (true) {
        siguiente = a + b + c;
        if (siguiente >= limite) break;
        cout << siguiente << " ";
        a = b;
        b = c;
        c = siguiente;
    }

    cout << endl;
}

int main() {
    int num1, num2, num3, limite;

    // Pedir los tres primeros números de la secuencia
    cout << "Ingresa el primer número: ";
    cin >> num1;
    
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    
    cout << "Ingresa el tercer número: ";
    cin >> num3;
    
    // Pedir el límite para detener la secuencia
    cout << "Ingresa el número límite: ";
    cin >> limite;

    // Llamar a la función de tribunacci
    tribunacci(num1, num2, num3, limite);

    return 0;
}
