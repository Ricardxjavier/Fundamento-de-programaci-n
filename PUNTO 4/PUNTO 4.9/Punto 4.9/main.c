#include <stdio.h>

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
    int NUM;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &NUM);

    if(esPrimo(NUM)) {
        printf("%d es un número primo.\n", NUM);
    } else {
        printf("%d no es un número primo.\n", NUM);
    }

    return 0;
}
