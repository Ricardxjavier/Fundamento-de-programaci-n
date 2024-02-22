#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double resultado = 1.0;

    printf("Introduce un número entero: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            resultado -= pow(i, i);
        } else {
            resultado += pow(i, i);
        }
    }

    printf("El resultado de la serie es: %lf\n", resultado);

    return 0;
}
