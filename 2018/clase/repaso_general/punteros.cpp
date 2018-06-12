// USO BÁSICO DE PUNTEROS

#include <stdio.h>
#include <stdlib.h>

int main() {

  int n = 40;
  int numero = 50;
  int *p_numero;

  printf("El valor de la variable 'n' es %i\n", n);
  printf("La posición de memoria de es %p\n\n", &n);

  printf("\t---------------------\n\n");

  p_numero = &numero; // POSICIÓN DE MEMORIA DE NÚMERO

  printf("Valor de la variable 'numero'\n");
  printf("Dato sin puntero %i\n", numero);
  printf("Dato desde puntero %i\n\n", *p_numero);

  printf("Posición de memoria: \n");
  printf("Posición: %p\n", &numero);
  printf("Posición: %p\n", p_numero);

  return EXIT_SUCCESS;
}
