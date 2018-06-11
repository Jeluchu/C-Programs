// DE NÚMEROS ENTEROS A NÚMEROS BINARIOS

#include <stdio.h>
#include <stdlib.h>

void binario(int n);

int main() {
  int numero;

  do {
    printf("Introduce un número: ");
    scanf(" %i", &numero);
  } while(numero < 0);

  binario(numero);

  return EXIT_SUCCESS;
}

void binario(int n) {
  if (n > 1) binario(n/2);

  printf("%i", n%2);
  }
