#include <stdio.h>

int main() {
    int N, num, pos = 0, neg = 0, zero = 0;
    printf("Introduce la cantidad de números a ingresar: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        printf("Introduce el número %d: ", i);
        scanf("%d", &num);
        if(num > 0) {
            pos++;
        } else if(num < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("Cantidad de números positivos: %d\n", pos);
    printf("Cantidad de números negativos: %d\n", neg);
    printf("Cantidad de números nulos: %d\n", zero);
    return 0;
}
