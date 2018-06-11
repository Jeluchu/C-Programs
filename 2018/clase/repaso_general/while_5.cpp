// MULTIPLOS DE 5 DESDE 1 HASTA N

#include <stdio.h>
#include <stdlib.h>

int main() {

  int num, i = 1;

  printf("Introduce el total de números a comprobar:");
  scanf(" %i", &num);

  while (i <= num) {
    if (i%5==0) {
        printf("%i es múltiplo\n", i);
    }
    i++;
  }

  return EXIT_SUCCESS;
}
