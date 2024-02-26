#include <stdio.h>

int main() {
    int array[100], n, i, j, k;

    printf("Introduce el número de elementos en el array: ");
    scanf("%d", &n);

    printf("Introduce los elementos del array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; ) {
            if(array[j] == array[i]) {
                for(k = j; k < n; k++) {
                    array[k] = array[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    printf("Array después de eliminar duplicados: ");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
