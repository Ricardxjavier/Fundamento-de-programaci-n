#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Abrir el archivo doc.dat en modo lectura
  FILE *archivo = fopen("doc.dat", "r");

  // Verificar si el archivo se abrió correctamente
  if (archivo == NULL) {
    printf("Error al abrir el archivo.\n");
    return 1;
  }

  // Leer el contenido del archivo
  char contenido[1000];
  fgets(contenido, sizeof(contenido), archivo);

  // Cerrar el archivo
  fclose(archivo);

  // Verificar si la ortografía es correcta
  int ortografia_correcta = 1;
  for (int i = 0; i < strlen(contenido) - 1; i++) {
    // Verificar si la letra actual es 'b'
    if (contenido[i] == 'b') {
      // Verificar si la letra anterior es 'm'
      if (contenido[i - 1] != 'm') {
        ortografia_correcta = 0;
        printf("Error ortográfico: 'b' debe ir después de 'm'.\n");
        break;
      }
    }

    // Verificar si la letra actual es 'p'
    if (contenido[i] == 'p') {
      // Verificar si la letra anterior es 'm'
      if (contenido[i - 1] != 'm') {
        ortografia_correcta = 0;
        printf("Error ortográfico: 'p' debe ir después de 'm'.\n");
        break;
      }
    }

    // Verificar si la letra actual es 'v'
    if (contenido[i] == 'v') {
      // Verificar si la letra anterior es 'n'
      if (contenido[i - 1] != 'n') {
        ortografia_correcta = 0;
        printf("Error ortográfico: 'v' debe ir después de 'n'.\n");
        break;
      }
    }
  }

  // Imprimir el resultado
  if (ortografia_correcta) {
    printf("La ortografía es correcta.\n");
  } else {
    printf("La ortografía es incorrecta.\n");
  }

  return 0;
}
