#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double sum = 0.0;

    printf("Introduce el valor de N: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        sum += pow(i, i);
    }

    printf("El resultado de la serie es: %.2f\n", sum);

    return 0;
}
