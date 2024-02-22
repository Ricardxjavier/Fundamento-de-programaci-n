#include <stdio.h>
#include <math.h>

int main() {
    int NUM, i, esPrimo = 1;

    printf("Introduce un n�mero entero positivo: ");
    scanf("%d", &NUM);

    if(NUM <= 1) {
        esPrimo = 0;
    } else {
        for(i = 2; i <= sqrt(NUM); i++) {
            if(NUM % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if(esPrimo) {
        printf("%d es un n�mero primo.\n", NUM);
    } else {
        printf("%d no es un n�mero primo.\n", NUM);
    }

    return 0;
}
