#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int suma = 0;
    int n;

    srand(time(0)); 

    for (int i = 0; i < 10; i++) {
        n = rand() % 11; 
        printf("Número generado: %d\n", n);
        suma = suma + n;
    }

    float promedio = suma / 10.0;

    printf("Suma: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
