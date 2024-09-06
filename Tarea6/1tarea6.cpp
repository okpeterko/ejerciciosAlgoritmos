#include <iostream>
#include <string>

enum calificacion { A, B, C, D, F };

const int limite_A = 90;
const int limite_B = 80;
const int limite_C = 70;
const int limite_D = 60;
const int limite_F = 50;

calificacion obtcalificacion(int nota) {
    if (nota>=limite_A) return A;
    else if (nota>=limite_B) return B;
    else if (nota>=limite_C) return C;
    else if (nota>=limite_D) return D;
    else return F;
}

std::string calificacionToString(calificacion calificacion) {
    switch (calificacion) {
        case A: return "A";
        case B: return "B";
        case C: return "C";
        case D: return "D";
        case F: return "F";
        default: return "Desconocido";
    }
}

std::string convertirNumeroATexto(int numero) {
    const std::string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    const std::string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    const std::string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    
    if (numero < 10) {
        return unidades[numero];
    } else if (numero < 20) {
        return especiales[numero - 10];
    } else if (numero < 100) {
        int decena = numero / 10;
        int unidad = numero % 10;
        if (unidad == 0) {
            return decenas[decena];
        } else {
            return decenas[decena] + " y " + unidades[unidad];
        }
    } else if (numero == 100) {
        return "cien";
    }
    return "Número fuera de rango";
}

int main() {
    int nota;

    std::cout << "Ingresa la calificación numérica (0-100): ";
    std::cin >> nota;

    calificacion calificacion = obtcalificacion(nota);
    std::cout << "La calificación en letra es: " << convertirNumeroATexto(nota) << std::endl;
    
return 0;
}