#include <stdio.h>

int main() {
    int N, i;
    unsigned long long productoria = 1; // Usamos unsigned long long para manejar números grandes

    printf("Introduce el valor de N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        productoria *= i;
    }

    printf("La productoria de los %d primeros números naturales es: %llu\n", N, productoria);

    return 0;
}
