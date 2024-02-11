#include <stdio.h>

int main() {
    int N;
    double sum = 0.0;
    printf("Introduce un n�mero entero positivo: ");
    scanf("%d", &N);

    if(N < 1) {
        printf("Por favor, introduce un n�mero entero positivo.\n");
        return 0;
    }

    for(int i = 1; i <= N; i++) {
        sum += 1.0/i;
    }

    printf("La suma de la serie es: %.2f\n", sum);
    return 0;
}
