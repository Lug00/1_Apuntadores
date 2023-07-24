// Ejercicio Promedio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main() {
    int totalDatos;
    double suma = 0.0;

    std::cout << "Ingrese los datos uno por uno y presione Enter al terminar." << std::endl;
    std::cout << "Cuando haya terminado, ingrese un valor negativo para calcular el promedio." << std::endl;

    // Bucle para ingresar datos y sumarlos
    int dato;
    totalDatos = 0;
    do {
        std::cout << "Ingrese un dato: ";
        std::cin >> dato;

        if (dato >= 0) {
            suma += dato;
            totalDatos++;
        }
    } while (dato >= 0);

    // Calcular y mostrar el promedio
    if (totalDatos > 0) {
        double promedio = suma / totalDatos;
        std::cout << "El promedio es: " << promedio << std::endl;
    }
    else {
        std::cout << "No se ingresaron datos válidos." << std::endl;
    }

    return 0;
}
