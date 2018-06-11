// FACTORIAL DE UN NÚMERO

#include <stdio.h>
#include <stdlib.h>

int main() {

  int numero, factorial = 1;

  printf("Introduce el número para hallar el factorial: ");
  scanf(" %i", &numero);

  for (int i = 1; i <= numero; i++) {
      factorial *= i;
  }

  printf("El factorial de número dado es %i\n", factorial);

  return EXIT_SUCCESS;
}
