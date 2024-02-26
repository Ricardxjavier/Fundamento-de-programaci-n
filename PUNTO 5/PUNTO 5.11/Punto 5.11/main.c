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
    int numerosPerfectos[30];
    int i = 1, count = 0;
    while(count < 30) {
        if(esPerfecto(i)) {
            numerosPerfectos[count] = i;
            count++;
        }
        i++;
    }

    printf("Los primeros 30 números perfectos son:\n");
    for(int i = 0; i < 30; i++) {
        printf("%d\n", numerosPerfectos[i]);
    }

    return 0;
}
