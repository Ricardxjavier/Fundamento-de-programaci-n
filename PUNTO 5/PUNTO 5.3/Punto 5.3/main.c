#include <stdio.h>

int main() {
    int array[100], i;
    array[0] = 0;
    array[1] = 1;

    printf("Los primeros 100 números de Fibonacci son: \n");

    for(i = 2; i < 100; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }

    for(i = 0; i < 100; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
