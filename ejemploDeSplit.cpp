#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string texto = "uno,dos,tres,cuatro";
    char delimitador = ',';
    vector<string> palabras;
    stringstream ss(texto);
    string palabra;

    while (getline(ss, palabra, delimitador)) {
        palabras.push_back(palabra);
    }

    // Mostrar las palabras divididas
    for (const auto& p : palabras) {
        cout << p << endl;
    }

    return 0;
}