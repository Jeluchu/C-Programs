// HCER UN BUCLE PARA IMPRIMIR EL ABECEDARIO

#include <stdio.h>
#include <stdlib.h>

int main() {

  char letra = 'a'; // HEXA = 61

  do {
    printf("%c\n", letra);
    letra++;
  } while(letra<='z');

  return EXIT_SUCCESS;
}
