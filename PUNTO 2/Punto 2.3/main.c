#include <stdio.h>

int main() {
    int N1, N2;  // Números enteros

    printf("Introduce dos números enteros: ");
    scanf("%d %d", &N1, &N2);

    if(N2 != 0 && N1 % N2 == 0) {
        printf("%d es divisible por %d.\n", N1, N2);
    } else {
        printf("%d no es divisible por %d.\n", N1, N2);
    }

    return 0;
}
