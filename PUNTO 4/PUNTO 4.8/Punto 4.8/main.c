#include <stdio.h>

int esPerfecto(int num) {
    int suma = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            suma += i;
        }
    }
    return suma == num;
}

int main() {
    int N;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &N);

    printf("Los números perfectos entre 1 y %d son:\n", N);
    for(int i = 1; i <= N; i++) {
        if(esPerfecto(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
