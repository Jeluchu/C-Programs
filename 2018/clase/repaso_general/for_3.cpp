// NÚMEROS PRIMOS

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, numero, count = 0;

  printf("Introduce un número: ");
  scanf(" %i", &numero);

  for (i = 1; i <= numero; i++) {
      if (numero%i==0) {
          count++;
      }
  }

  if (count > 2) {
    printf("El número no es primo\n");
  } else{
    printf("El número es primo\n");
  }

  return EXIT_SUCCESS;
}
