#include <stdio.h>

int main() {
  int n, i, y, s, r, f;

  // Leer el número de valores
  scanf("%d", &n);

  // Leer los valores
  for (i = 1; i <= n; i++) {
    scanf("%d", &y);

    // Calcular el valor de r
    if (y < 18) {
      r = 1;
    } else if (y <= 108) {
      r = 2;
    } else if (y <= 180) {
      r = 3;
    } else {
      r = 4;
    }

    // Calcular el valor de f
    switch (r) {
      case 1:
        f = r * r + 10;
        break;
      case 2:
        f = r * r - r + 18;
        break;
      case 3:
        f = r * r - r * r + 10;
        break;
      case 4:
        f = y;
        break;
    }

    // Imprimir el valor de f
    printf("%d\n", f);
  }

  return 0;
}
