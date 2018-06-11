// FIBONACCI

#include <stdio.h>
#include <stdlib.h>

int main() {

  int numero, x = 0, y = 1, z = 1;

  printf("Introduce el número de elementos: ");
  scanf(" %i", &numero);

  printf("1, ");
  for (int i = 1; i < numero; i++) {
      z = x + y;
      x = y;
      y = z;

      printf("%i , ", z);
  }

  return EXIT_SUCCESS;
}
