#include <stdio.h>

int main() {
    int n, inverso = 0, digito;

    printf("Ingrese un numero entero de cuatro digitos: ");
    scanf("%d", &n);

    while(n != 0) {
        digito = n % 10;
        inverso = inverso * 10 + digito;
        n /= 10;
    }

    printf("Numero invertido: %d\n", inverso);

    return 0;
}
