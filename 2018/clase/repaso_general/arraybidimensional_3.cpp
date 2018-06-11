// MATRICES DE CARACTERES

#include <stdio.h>
#include <stdlib.h>

int main() {
  char matriz[2][3] = { {'a', 'b', 'c'},
                        {'d', 'e', 'f'} };
  int filas, columnas;

  for (filas = 0; filas < 2; filas++) {
    for (columnas = 0; columnas < 3; columnas++) {
      printf("%c ", matriz[filas][columnas]); //MOSTRAR LA MATRIZ
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
