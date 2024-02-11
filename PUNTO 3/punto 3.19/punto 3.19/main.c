#include <stdio.h>

void print_figure(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for(int j = i-1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for(int j = i-1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    print_figure(n);
    return 0;
}
