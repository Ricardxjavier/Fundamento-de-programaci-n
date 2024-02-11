#include <stdio.h>

int main() {
    int N, sexo, edad;
    double peso, altura, sumaPesoM = 0, sumaAlturaM = 0, sumaPesoF = 0, sumaAlturaF = 0;
    int contM = 0, contF = 0;

    printf("Introduce la cantidad de personas: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        printf("Introduce el peso, la altura, el sexo (1 para hombre, 0 para mujer) y la edad de la persona %d: ", i);
        scanf("%lf %lf %d %d", &peso, &altura, &sexo, &edad);

        if(edad >= 18) {
            if(sexo == 1) {
                sumaPesoM += peso;
                sumaAlturaM += altura;
                contM++;
            } else if(sexo == 0) {
                sumaPesoF += peso;
                sumaAlturaF += altura;
                contF++;
            }
        }
    }

    printf("Promedio de peso y altura de hombres (edad ≥ 18): %.2f kg, %.2f m\n", sumaPesoM/contM, sumaAlturaM/contM);
    printf("Promedio de peso y altura de mujeres (edad ≥ 18): %.2f kg, %.2f m\n", sumaPesoF/contF, sumaAlturaF/contF);
    return 0;
}

