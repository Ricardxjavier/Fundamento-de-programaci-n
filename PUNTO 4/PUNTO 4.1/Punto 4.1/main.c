#include <stdio.h>

int main() {
    int N, numero, sumaPares = 0, sumaImpares = 0, cuentaPares = 0, cuentaImpares = 0;
    float promedioPares, promedioImpares;

    printf("Ingrese la cantidad de n�meros: ");
    scanf("%d", &N);

    if(N < 1 || N > 500) {
        printf("El n�mero de datos debe estar entre 1 y 500.\n");
        return -1;
    }

    for(int i = 0; i < N; i++) {
        printf("Ingrese el n�mero %d: ", i+1);
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            sumaPares += numero;
            cuentaPares++;
        } else {
            sumaImpares += numero;
            cuentaImpares++;
        }
    }

    if(cuentaPares > 0) {
        promedioPares = (float)sumaPares / cuentaPares;
        printf("Promedio de n�meros pares: %.2f\n", promedioPares);
    } else {
        printf("No se ingresaron n�meros pares.\n");
    }

    if(cuentaImpares > 0) {
      promedioImpares = (float)sumaImpares / cuentaImpares;
      printf("Promedio de n�meros impares: %.2f\n", promedioImpares);
   } else {
       printf("No se ingresaron n�meros impares.\n");
   }

   return(0);
}
