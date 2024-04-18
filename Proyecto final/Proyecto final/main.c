#include <stdio.h>

// Funci�n para calcular el inter�s simple
float calcularInteres(float capital, float tasa, int tiempo) {
    return capital * tasa * tiempo;
}

// Funci�n para calcular la cuota anual
float calcularCuota(float capital, int tiempo) {
    return capital / tiempo;
}

int main() {
    float capital, tasa, interes;
    int tiempo, cuotas;

    printf("Ingrese el capital solicitado: ");
    scanf("%f", &capital);

    printf("Ingrese la tasa de inter�s por a�o (en decimal): ");
    scanf("%f", &tasa);

    printf("Ingrese el tiempo para pagar (en a�os): ");
    scanf("%d", &tiempo);

    printf("Ingrese el n�mero de cuotas solicitadas al a�o: ");
    scanf("%d", &cuotas);

    // Calcular inter�s total
    interes = calcularInteres(capital, tasa, tiempo);

    // Calcular cuota anual
    float cuota = calcularCuota(capital, tiempo);

    // Mostrar resultados
    printf("\nInter�s total: %.2f\n", interes);
    printf("Cuota anual: %.2f\n", cuota);

    // Guardar los par�metros en un archivo de texto
    FILE *archivo;
    archivo = fopen("prestamo.txt", "w");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }

    // Escribir los par�metros en el archivo
    fprintf(archivo, "Capital solicitado: %.2f\n", capital);
    fprintf(archivo, "Tasa de inter�s: %.2f\n", tasa);
    fprintf(archivo, "Tiempo para pagar: %d a�os\n", tiempo);
    fprintf(archivo, "N�mero de cuotas al a�o: %d\n", cuotas);
    fprintf(archivo, "Inter�s total: %.2f\n", interes);
    fprintf(archivo, "Cuota anual: %.2f\n", cuota);

    // Cerrar el archivo
    fclose(archivo);

    printf("\nLos par�metros se han guardado en prestamo.txt\n");

    return 0;
}
