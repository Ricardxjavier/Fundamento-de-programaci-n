#include <stdio.h>

int main() {
    int n, numHombres = 0, numMujeres = 0, hombresAltos = 0;
    float peso, altura, pesoHombres = 0, alturaMujeres = 0;
    char sexo;
    printf("Ingrese el número total de personas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingrese el peso, la altura (en metros) y el sexo (M/F) de la persona %d: ", i + 1);
        scanf("%f %f %c", &peso, &altura, &sexo);

        // Acumula el peso de los hombres y cuenta el número de hombres
        if (sexo == 'M' || sexo == 'm') {
            pesoHombres += peso;
            numHombres++;
            // Cuenta los hombres que miden más de 1.80 metros
            if (altura > 1.80) {
                hombresAltos++;
            }
        }
        // Acumula la altura de las mujeres y cuenta el número de mujeres
        else if (sexo == 'F' || sexo == 'f') {
            alturaMujeres += altura;
            numMujeres++;
        }
    }

    // Calcula el promedio del peso de los hombres
    if (numHombres > 0) {
        printf("El promedio del peso de los hombres es: %.2f\n", pesoHombres / numHombres);
    } else {
        printf("No se ingresaron datos de hombres.\n");
    }

    // Calcula la altura promedio de las mujeres
    if (numMujeres > 0) {
        printf("La altura promedio de las mujeres es: %.2f\n", alturaMujeres / numMujeres);
    } else {
        printf("No se ingresaron datos de mujeres.\n");
    }

    // Imprime el número de hombres que miden más de 1.80 metros
    printf("El número de hombres que miden más de 1.80 metros es: %d\n", hombresAltos);

    return 0;
}
