#include <stdio.h>
#include <string.h>

#define MAX_EQUIPOS 20

// Estructura para representar un equipo
struct Equipo {
    char nombre[50]; // Nombre del equipo
    int partidos_jugados; // Número de partidos jugados
    int partidos_ganados; // Número de partidos ganados
    int partidos_empatados; // Número de partidos empatados
    int partidos_perdidos; // Número de partidos perdidos
    int goles_a_favor; // Número de goles a favor
    int goles_en_contra; // Número de goles en contra
    int diferencia_de_goles; // Diferencia de goles
    int puntos; // Puntos del equipo
};

// Función para actualizar la información de un equipo
void actualizar_equipo(struct Equipo *equipo, int goles_a_favor, int goles_en_contra) {
    equipo->partidos_jugados++;
    if (goles_a_favor > goles_en_contra) {
        equipo->partidos_ganados++;
        equipo->puntos += 3;
    } else if (goles_a_favor == goles_en_contra) {
        equipo->partidos_empatados++;
        equipo->puntos += 1;
    } else {
        equipo->partidos_perdidos++;
    }
    equipo->goles_a_favor += goles_a_favor;
    equipo->goles_en_contra += goles_en_contra;
    equipo->diferencia_de_goles = equipo->goles_a_favor - equipo->goles_en_contra;
}

// Función para intercambiar dos equipos
void intercambiar_equipos(struct Equipo *equipo1, struct Equipo *equipo2) {
    struct Equipo temp = *equipo1;
    *equipo1 = *equipo2;
    *equipo2 = temp;
}

// Función para ordenar la tabla de posiciones por puntos
void ordenar_tabla(struct Equipo equipos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (equipos[i].puntos < equipos[j].puntos) {
                intercambiar_equipos(&equipos[i], &equipos[j]);
            }
        }
    }
}

// Función para mostrar la tabla de posiciones
void mostrar_tabla(struct Equipo equipos[], int n) {
    printf("-----------------------------------------------------\n");
    printf("| Posición | Equipo           | Puntos | Goles | \n");
    printf("-----------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %3d       | %-15s | %5d   | %5d | \n",
               i + 1, equipos[i].nombre, equipos[i].puntos, equipos[i].diferencia_de_goles);
    }
    printf("-----------------------------------------------------\n");
}

int main() {
    struct Equipo equipos[MAX_EQUIPOS];

    // Inicializar la tabla de posiciones
    strcpy(equipos[0].nombre, "América");
    strcpy(equipos[1].nombre, "Puebla");
    strcpy(equipos[2].nombre, "Cruz Azul");
    strcpy(equipos[3].nombre, "Veracruz");
    strcpy(equipos[4].nombre, "Necaxa");
    strcpy(equipos[5].nombre, "Monterrey");
    // Inicializar el resto de los equipos
    // ...

    // Actualizar la información de los equipos
    actualizar_equipo(&equipos[0], 0, 2); // América 0 - Puebla 2
    actualizar_equipo(&equipos[2], 3, 2); // Cruz Azul 3 - Veracruz 2
    actualizar_equipo(&equipos[4], 2, 3); // Necaxa 2 - Monterrey 3
    // Actualizar la información de los demás equipos
    // ...

    // Ordenar la tabla de posiciones por puntos
    ordenar_tabla(equipos, 6); // Ordenar los 6 primeros equipos
    // Ordenar la tabla de posiciones de los demás equipos
    // ...

    // Mostrar la tabla de posiciones
    mostrar_tabla(equipos, 6); // Mostrar los 6 primeros equipos
    // Mostrar la tabla de posiciones de los demás equipos
    // ...

    return 0;
}
