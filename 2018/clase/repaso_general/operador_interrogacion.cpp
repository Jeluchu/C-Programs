#include <stdio.h>
#include <stdlib.h>

int main(){

  int numero;

  printf("Introduce un número: ");
  scanf(" %i", &numero);

  //(CONDICIÓN) ?  (LO QUE HACE SI ES VERDAD)  :   (LO QUE HACE SI ES FALSO)
  (numero%2==0) ? printf("El número es par\n") : printf("El número es impar\n");

  return EXIT_SUCCESS;
}
