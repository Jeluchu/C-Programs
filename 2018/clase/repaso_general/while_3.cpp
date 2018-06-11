// SUMA DE LOS N PRIMEROS NÚMEROS

#include <stdio.h>
#include <stdlib.h>

int main() {
  int count = 1, num, suma = 0;

  printf("Introduce el total de números a sumar: ");
  scanf(" %i", &num);

  while (count <= num) {
    suma += count;
    count++;
  }

  printf("La suma es: %i\n", suma);

  return EXIT_SUCCESS;
}
