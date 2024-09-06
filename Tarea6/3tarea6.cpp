#include <iostream>

enum Bebida { Cafe, Te, Jugo };

const double precio_Cafe = 1.50;
const double precio_Te = 1.00;
const double precio_Jugo = 2.00;

double calcularCostoTotal(Bebida bebida, int cantidad) {
    double precio;
    switch (bebida) {
        case Cafe:
            precio = precio_Cafe;
            break;
        case Te:
            precio = precio_Te;
            break;
        case Jugo:
            precio = precio_Jugo;
            break;
        default:
            precio = 0.0;
            break;
    }
    return precio * cantidad;
}

int main() {
    int seleccion;
    int cantidad;

    std::cout << "Menú de bebidas:\n";
    std::cout << "0: Café ($1.50)\n";
    std::cout << "1: Té ($1.00)\n";
    std::cout << "2: Jugo ($2.00)\n";

    std::cout << "Seleccione una bebida (0-2): ";
    std::cin >> seleccion;

    std::cout << "Ingrese la cantidad deseada: ";
    std::cin >> cantidad;

    double costoTotal = calcularCostoTotal(static_cast<Bebida>(seleccion), cantidad);

    std::cout << "El costo total es: $" << costoTotal << std::endl;

    return 0;
}
