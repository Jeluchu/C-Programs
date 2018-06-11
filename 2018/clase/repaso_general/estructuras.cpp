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
  struct Persona persona1 = {"Alejandro",19};
  struct Persona persona2 = {"María",25};

  // IMPRIMIR LOS DATOS
  printf("Tu nombre es %s\n", persona1.nombre);
  printf("Tu edad es %i años\n", persona1.edad);

  printf("\n");

  printf("Tu nombre es %s\n", persona2.nombre);
  printf("Tu edad es %i años\n", persona2.edad);

  return EXIT_SUCCESS;
}
