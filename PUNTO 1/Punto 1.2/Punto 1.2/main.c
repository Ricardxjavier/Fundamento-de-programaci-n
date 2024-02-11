#include <stdio.h>

/* Aplicación de operadores. */
int main(void)
{
    int i = 5, j = 4, k, l, m;

    k = i * 3 + 3 - j * 2 - 3;
    printf("El valor de k es: %d\n", k);

    l = !(i || j) && (i && j);
    printf("El valor de l es: %d\n", l);

    m = (k == (i * 12 / 10)) || (j == (10 || j)) && ((k < (j || !j)));
    printf("El valor de m es: %d\n", m);

    return 0;
}

