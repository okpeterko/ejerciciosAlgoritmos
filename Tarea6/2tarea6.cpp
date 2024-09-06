#include <iostream>

enum TipoEmpleado { Junior, Senior, Manager };

const double tarifa_Junior = 15.0;  // Tarifa por hora para Junior
const double tarifa_Senior = 25.0;  // Tarifa por hora para Senior
const double tarifa_Manager = 40.0; // Tarifa por hora para Manager
const int horas_regulares = 40;     // Máximas horas regulares

double calcularSalario(TipoEmpleado tipo, int horasTrabajadas) {
    double tarifa;
    switch (tipo) {
        case Junior:
            tarifa = tarifa_Junior;
            break;
        case Senior:
            tarifa = tarifa_Senior;
            break;
        case Manager:
            tarifa = tarifa_Manager;
            break;
    }

    double salario = 0.0;
    if (horasTrabajadas <= horas_regulares) {
        salario = horasTrabajadas * tarifa;
    } else {
        int horasExtras = horasTrabajadas - horas_regulares;
        salario = (horas_regulares * tarifa) + (horasExtras * tarifa * 1.5); // Pago de horas extras al 150%
    }

    return salario;
}

int main() {
    int tipoEmpleado, horasTrabajadas;
    
    std::cout << "Ingrese el tipo de empleado (0: Junior, 1: Senior, 2: Manager): ";
    std::cin >> tipoEmpleado;

    std::cout << "Ingrese las horas trabajadas en la semana: ";
    std::cin >> horasTrabajadas;

    double salario = calcularSalario(static_cast<TipoEmpleado>(tipoEmpleado), horasTrabajadas);

    std::cout << "El salario semanal es: $" << salario << std::endl;

    return 0;
}