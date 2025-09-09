#include <iostream>
#include <cstdlib>
#include <ctime>

bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    srand(time(0));
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 500; i++) {
        int n = 50 + rand() % 51; 
        if (esPar(n))
            pares = pares + 1;
        else
            impares = impares + 1;
    }

    std::cout << "Pares: " << pares << std::endl;
    std::cout << "Impares: " << impares << std::endl;

    return 0;
}
