#include <stdio.h>
#include <stdlib.h>

int main(){
  char letra;
  char *p_letra = &letra; // POSICIÓN DE LETRA

  for (letra = 'A'; letra <= 'Z'; letra++) {
    printf("%c ", *p_letra);
  }

  printf("\n");

  return EXIT_SUCCESS;
}
