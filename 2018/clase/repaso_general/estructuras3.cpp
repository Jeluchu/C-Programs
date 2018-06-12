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

  // DECLARAMOS UN NÚMERO MAX DE STRUCT's
  struct Persona personas[5];

  int i;

  // GUARDAR LOS DATOS EN LAS VARIABLES
  for (i = 0; i < 5; i++) {
    printf("%i. Introduce tu nombre: ", i+1);
    scanf(" %[^\n]", &personas[i].nombre); // %[^\n] para incluir espacios
    fflush(stdin);

    printf("%i. Introduce tu edad: ", i+1);
    scanf(" %i", &personas[i].edad);
    fflush(stdin);

    printf("\n");
  }

  // IMPRIMIR LOS DATOS DE LAS VARIABLES
  for (i = 0; i < 5; i++) {
    printf("%i. Tu nombre es %s\n", i+1, personas[i].nombre);
    printf("%i. Tu edad es %i años\n", i+1, personas[i].edad);
    printf("\n");
  }

  return EXIT_SUCCESS;
}
