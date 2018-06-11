// SUMA DE LOS n NÚMEROS PARES

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int i, suma = 0, n;

  printf("Introduce la cantidad de números a sumar: ");
  scanf(" %i", &n);

  for (int i = 0; i <= n; i+=2) { // i = i + 2
      if (i%2==0) {
          suma += i; // Suma de los nº pares
      }
  }

  printf("La suma de los nº pares es %i\n", suma);

  return EXIT_SUCCESS;
}
