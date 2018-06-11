// MATRICES DE ENTEROS
// EN ELLAS, DECLARAMOS
// LOS VALORES DESDE UN ARRAY

#include <stdio.h>
#include <stdlib.h>

int main() {
  int matriz[2][3] = { {51, 52, 53},
                       {54, 55, 56} }; //VALORES

  int filas, columnas;

  for (filas = 0; filas < 2; filas++) {
    for (columnas = 0; columnas < 3; columnas++) {
      printf("%i ", matriz[filas][columnas]); //MOSTRAR LA MATRIZ
    }
    printf("\n");
  }


  return EXIT_SUCCESS;
}
