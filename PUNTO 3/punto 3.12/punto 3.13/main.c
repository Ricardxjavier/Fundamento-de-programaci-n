#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
    if(num <= 1) return 0;
    if(num == 2) return 1;
    if(num % 2 == 0) return 0;
    for(int i = 3; i * i <= num; i += 2) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N1, N2;
    printf("Introduce dos números enteros positivos: ");
    scanf("%d %d", &N1, &N2);
    for(int i = N1; i <= N2 - 2; i++) {
        if(esPrimo(i) && esPrimo(i + 2)) {
            printf("(%d, %d)\n", i, i + 2);
        }
    }
    return 0;
}
