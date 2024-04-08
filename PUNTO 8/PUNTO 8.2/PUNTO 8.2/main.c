#include <stdio.h>
#include <string.h>

// Estructura para las estad�sticas de un equipo de f�tbol
typedef struct {
    char nombreEquipo[50];
    int partidosJugados;
    int partidosGanados;
    int partidosEmpatados;
    int partidosPerdidos;
    int golesFavor;
    int golesContra;
    // Agrega m�s campos seg�n sea necesario
} EstadisticasEquipo;

// Funci�n para actualizar las estad�sticas de un equipo
void actualizarEstadisticas(EstadisticasEquipo *equipo) {
    // Implementa la l�gica para actualizar las estad�sticas
}

// Funci�n para mostrar la tabla de posiciones
void mostrarTablaPosiciones(EstadisticasEquipo *equipos, int numEquipos) {
    // Implementa la l�gica para mostrar la tabla de posiciones
}

// Funci�n principal
int main() {
    EstadisticasEquipo equipos[20]; // Array para almacenar los equipos
    int numEquipos = 0;             // Contador de equipos

    // Implementa la l�gica para interactuar con el usuario y manejar las estad�sticas
    // ...

    return 0;
}
