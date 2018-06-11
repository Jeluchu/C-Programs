// MATRICES DE FLOTANTES
// EN ELLAS, PEDIMOS AL USUARIO
// LOS VALORES DE LA MATRIZ

#include <stdio.h>
#include <stdlib.h>

int main() {
  float matriz[2][3];
  int filas, columnas;

  for (filas = 0; filas < 2; filas++) {
    for (columnas = 0; columnas < 3; columnas++) {
      printf("Introduce un número Matriz[%i][%i]: ", filas+1, columnas+1);
      scanf("%f", &matriz[filas][columnas]);
    }
    printf("\n");
  }

  for (filas = 0; filas < 2; filas++) {
    for (columnas = 0; columnas < 3; columnas++) {
      printf("%.2f  ", matriz[filas][columnas]);
    }
    printf("\n");
  }

  printf("\n");
  return EXIT_SUCCESS;
}
