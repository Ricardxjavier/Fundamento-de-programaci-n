#include <stdio.h>

int main() {
    int N, num, pos = 0, neg = 0, zero = 0;
    printf("Introduce la cantidad de n�meros a ingresar: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        printf("Introduce el n�mero %d: ", i);
        scanf("%d", &num);
        if(num > 0) {
            pos++;
        } else if(num < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("Cantidad de n�meros positivos: %d\n", pos);
    printf("Cantidad de n�meros negativos: %d\n", neg);
    printf("Cantidad de n�meros nulos: %d\n", zero);
    return 0;
}
