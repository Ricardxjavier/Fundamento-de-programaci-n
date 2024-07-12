#include <stdio.h>

// Función para escribir un arreglo en un archivo con un separador
void writeArrayToFile(FILE *file, int arr[], int size, const char *separator) {
    for (int i = 0; i < size; i++) {
        if (i > 0) {
            fprintf(file, "%s", separator);
        }
        fprintf(file, "%d", arr[i]);
    }
    fprintf(file, "\n");
}

int main() {
    FILE *file = fopen("fibonacci.txt", "w");
    if (!file) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    int fib[50];
    int fibOdd[50], fibEven[50];
    int oddCount = 0, evenCount = 0;
    int sumOdd = 0, sumEven = 0;

    // Generar los primeros 50 números de Fibonacci
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Separar los números impares y pares, y calcular sus sumas
    for (int i = 0; i < 50; i++) {
        if (fib[i] % 2 == 0) {
            fibEven[evenCount++] = fib[i];
            sumEven += fib[i];
        } else {
            fibOdd[oddCount++] = fib[i];
            sumOdd += fib[i];
        }
    }

    // Escribir los números de Fibonacci en el archivo
    writeArrayToFile(file, fib, 50, "-");

    // Escribir los números impares en el archivo
    writeArrayToFile(file, fibOdd, oddCount, "-");

    // Escribir los números pares en el archivo
    writeArrayToFile(file, fibEven, evenCount, "-");

    // Escribir la suma de impares y pares en el archivo
    fprintf(file, "Suma de impares: %d\n", sumOdd);
    fprintf(file, "Suma de pares: %d\n", sumEven);

    fclose(file);

    printf("Archivo 'fibonacci.txt' generado con éxito.\n");

    return 0;
}
