#include <stdio.h>

int main() {
    float SAL;  // Salario del profesor
    float incremento;  // Incremento del salario
    float nuevoSalario;  // Nuevo salario del profesor

    printf("Introduce el salario del profesor: ");
    scanf("%f", &SAL);

    // Calcular el incremento del salario
    if (SAL <= 18000) {
        incremento = SAL * 0.12;
    } else if (SAL <= 30000) {
        incremento = SAL * 0.08;
    } else if (SAL <= 50000) {
        incremento = SAL * 0.07;
    } else {
        incremento = SAL * 0.06;
    }

    // Calcular el nuevo salario
    nuevoSalario = SAL + incremento;

    printf("El nuevo salario del profesor es: %.2f\n", nuevoSalario);

    return 0;
}
