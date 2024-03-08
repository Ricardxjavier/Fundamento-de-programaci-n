#include <stdio.h>
#include <string.h>

void convertir_fecha(const char *fecha_original, char *fecha_convertida) {
    // Supongamos que la fecha original está en formato "dd/mm/aaaa"
    // y queremos convertirla a "aaaa-mm-dd"
    int dia, mes, anio;
    sscanf(fecha_original, "%d/%d/%d", &dia, &mes, &anio);
    sprintf(fecha_convertida, "%04d-%02d-%02d", anio, mes, dia);
}

int main() {
    char fecha_original[] = "15/03/2024";
    char fecha_convertida[11]; // Tamaño suficiente para "aaaa-mm-dd" + '\0'
    convertir_fecha(fecha_original, fecha_convertida);
    printf("Fecha convertida: %s\n", fecha_convertida);
    return 0;
}
