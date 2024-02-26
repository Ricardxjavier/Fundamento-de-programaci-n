#include <stdio.h>

int main() {
    int array[100], n, i, positivos = 0, negativos = 0, ceros = 0;

    printf("Introduce el número de elementos en el array: ");
    scanf("%d", &n);

    printf("Introduce los elementos del array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < n; i++) {
        if(array[i] > 0)
            positivos++;
        else if(array[i] < 0)
            negativos++;
        else
            ceros++;
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Ceros: %d\n", ceros);

    return 0;
}
