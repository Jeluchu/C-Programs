/*

    Hacer una variable de tipo int, otra de tipo float
    y por ultimo una de tipo char, almacenar datos
    en cada una de las variables y posteriormente indicar
    la posición de memoria donde se encuentran guardados
    los datos de cada variable.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10, *p_n = &n;
  float n2 = 10.5, *p_n2 = &n2;
  char n3 = 'a', *p_n3 = &n3;

  printf("Variables enteras:\n");
  printf("Dato: %i\n", *p_n); // DATO
  printf("Posición: %p\n\n", p_n); // POSICIÓN EN MEMORIA

  printf("Variable flotante\n");
  printf("Dato: %.2f\n", *p_n2);
  printf("Posición: %p\n\n", p_n2);

  printf("Variable caracter\n");
  printf("Dato: %c\n", *p_n3);
  printf("Posición: %p\n\n", p_n3);

  return EXIT_SUCCESS;
}
