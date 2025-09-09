#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    std::string sucursales[25];
    int ventas[25];
    int suma = 0;

    srand(time(0));

    for (int i = 0; i < 25; i++) {
        sucursales[i] = "Sucursal " + std::to_string(i + 1);
        ventas[i] = 1000 + rand() % 4001;
        suma += ventas[i];
    }

    double promedio = suma / 25.0;

    std::cout << "Todas las sucursales y sus ventas:\n";
    for (int i = 0; i < 25; i++) {
        std::cout << sucursales[i] << " - " << ventas[i] << std::endl;
    }

    std::cout << "\nPromedio de ventas: " << promedio << std::endl;

    std::cout << "Sucursales con ventas mayores al promedio:\n";
    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio) {
            std::cout << sucursales[i] << " - " << ventas[i] << std::endl;
        }
    }

    return 0;
}
