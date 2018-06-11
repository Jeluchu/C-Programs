// ESTRUCTURAS

#include <stdio.h>
#include <stdlib.h>

#define N 0x100

// DEFINIMOS LA ESTRUCTURA
struct Persona{
  char nombre[N];
  int edad;
};

int main() {

  // DECLARACIÓN DE VARIABLES E INTRODUCCIÓN DE DATOS
  struct Persona persona1;
  struct Persona persona2;

  // PETICIÓN DE DATOS
  printf("Introduce tu nombre: ");
  scanf(" %s", &persona1.nombre);
  fflush(stdin);

  printf("Introduce tu edad: ");
  scanf(" %i", &persona1.edad);
  fflush(stdin);

  printf("\n");

  printf("Introduce tu nombre: ");
  scanf(" %s", &persona2.nombre);
  fflush(stdin);

  printf("Introduce tu edad: ");
  scanf(" %i", &persona2.edad);
  fflush(stdin);

  printf("\n");

  // IMPRESIÓN DE DATOS
  printf("Tu nombre es %s\n", persona1.nombre);
  printf("Tu edad es %i años\n", persona1.edad);

  printf("\n");

  printf("Tu nombre es %s\n", persona2.nombre);
  printf("Tu edad es %i años\n", persona2.edad);

  return EXIT_SUCCESS;
}
