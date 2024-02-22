#include <stdio.h>

int main() {
    int NUM, i;
    unsigned long long factorial = 1;

    printf("Introduce un n�mero entero: ");
    scanf("%d", &NUM);

    if(NUM < 0)
        printf("Error! El factorial de un n�mero negativo no existe.\n");
    else {
        for(i = 1; i <= NUM; ++i) {
            factorial *= i;
        }
        printf("El factorial de %d es: %llu\n", NUM, factorial);
    }

    return 0;
}
