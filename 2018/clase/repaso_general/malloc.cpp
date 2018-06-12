// USO DEL MALLOC

#include <stdio.h>
#include <stdlib.h>

int main(){

  float *a;

  // MALLOC RESERVA MEMORIA
  a = malloc(sizeof(char)); // sizeof(int) TAMAÑO DE UNA VARIABLE ENTERA

  *a = 'a';

  printf("%c\n", *a);

  return EXIT_SUCCESS;
}
