#include <stdio.h>

// Función para calcular el interés simple
float calcularInteres(float capital, float tasa, int tiempo) {
    return capital * tasa * tiempo;
}

// Función para calcular la cuota anual
float calcularCuota(float capital, int tiempo) {
    return capital / tiempo;
}

int main() {
    float capital, tasa, interes;
    int tiempo, cuotas;

    printf("Ingrese el capital solicitado: ");
    scanf("%f", &capital);

    printf("Ingrese la tasa de interés por año (en decimal): ");
    scanf("%f", &tasa);

    printf("Ingrese el tiempo para pagar (en años): ");
    scanf("%d", &tiempo);

    printf("Ingrese el número de cuotas solicitadas al año: ");
    scanf("%d", &cuotas);

    // Calcular interés total
    interes = calcularInteres(capital, tasa, tiempo);

    // Calcular cuota anual
    float cuota = calcularCuota(capital, tiempo);

    // Mostrar resultados
    printf("\nInterés total: %.2f\n", interes);
    printf("Cuota anual: %.2f\n", cuota);

    // Guardar los parámetros en un archivo de texto
    FILE *archivo;
    archivo = fopen("prestamo.txt", "w");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }

    // Escribir los parámetros en el archivo
    fprintf(archivo, "Capital solicitado: %.2f\n", capital);
    fprintf(archivo, "Tasa de interés: %.2f\n", tasa);
    fprintf(archivo, "Tiempo para pagar: %d años\n", tiempo);
    fprintf(archivo, "Número de cuotas al año: %d\n", cuotas);
    fprintf(archivo, "Interés total: %.2f\n", interes);
    fprintf(archivo, "Cuota anual: %.2f\n", cuota);

    // Cerrar el archivo
    fclose(archivo);

    printf("\nLos parámetros se han guardado en prestamo.txt\n");

    return 0;
}
