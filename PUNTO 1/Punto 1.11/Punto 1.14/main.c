#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, x3, y3; // Coordenadas de los puntos P1, P2 y P3
    float area; // Área del triángulo

    printf("Ingrese las coordenadas del punto P1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Ingrese las coordenadas del punto P2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Ingrese las coordenadas del punto P3 (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Calcular el área del triángulo
    area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    printf("El área del triángulo es: %.2f\n", area);

    return 0;
}
