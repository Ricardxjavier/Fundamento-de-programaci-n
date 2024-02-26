#include <stdio.h>

int main() {
    int n, i, score, total = 0, passCount = 0, highScoreCount = 0;
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Ingrese la puntuación del estudiante %d: ", i+1);
        scanf("%d", &score);
        total += score;
        if(score >= 700) passCount++;
        if(score >= 1500) highScoreCount++;
    }
    printf("Promedio general: %.2f\n", (float)total/n);
    printf("Porcentaje de estudiantes que pasaron: %.2f%%\n", (float)passCount/n*100);
    printf("Número de estudiantes con puntuación mayor o igual a 1500: %d\n", highScoreCount);
    return 0;
}
