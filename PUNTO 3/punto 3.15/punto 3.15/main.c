#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int n1, n2;
    printf("Ingrese dos números: ");
    scanf("%d%d", &n1, &n2);
    printf("El MCD de %d y %d es %d\n", n1, n2, gcd(n1, n2));
    return 0;
}
