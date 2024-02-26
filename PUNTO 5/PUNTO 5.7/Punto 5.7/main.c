#include <stdio.h>

int main() {
    float toneladas[12];
    float total = 0, promedio;
    int meses_sobre_promedio = 0, mes_maximo = 0;

    // Supongamos que los datos de toneladas se ingresan aquí
    for(int i = 0; i < 12; i++) {
        printf("Ingrese las toneladas cosechadas en el mes %d: ", i+1);
        scanf("%f", &toneladas[i]);
        total += toneladas[i];
        if(toneladas[i] > toneladas[mes_maximo]) {
            mes_maximo = i;
        }
    }

    promedio = total / 12;

    for(int i = 0; i < 12; i++) {
        if(toneladas[i] > promedio) {
            meses_sobre_promedio++;
        }
    }

    printf("Promedio anual de toneladas cosechadas: %.2f\n", promedio);
    printf("Meses con cosecha superior al promedio: %d\n", meses_sobre_promedio);
    printf("Mes con la mayor cantidad de toneladas cosechadas: %d (toneladas: %.2f)\n", mes_maximo+1, toneladas[mes_maximo]);

    return 0;
}
