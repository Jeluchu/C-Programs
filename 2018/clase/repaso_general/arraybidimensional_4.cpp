// MATRIZ DE ENTEROS PREGUNTANDO
// AL USUARIO EL Nº DE FILAS
// Y EL DE LAS COLUMNAS
// RELLENARLA Y MOSTRARLA


#include <stdio.h>
#include <stdlib.h>

int main() {
  int matriz[50][50], filas, columnas, i, j;

  printf("Introduce el número de filas: ");
  scanf(" %i", &filas);

  printf("Introduce el número de columnas: ");
  scanf(" %i", &columnas);

  for (i = 0; i < filas; i++) {
    for (j = 0; j < columnas; j++) {
      printf("Introduce un número Matriz[%i][%i]: ", i+1, j+1);
      scanf(" %i", &matriz[i][j]);
    }
  }

  printf("\n\n");

  for (i = 0; i < filas; i++) {
    for (j = 0; j < columnas; j++) {
      printf("%i ", matriz[i][j]);
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
