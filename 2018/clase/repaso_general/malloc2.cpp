// UTILIZAR MALLOC PARA RESERVAR MEMORIA
// PARA UN NOMRBRE (STRING)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char nombre[20], *p_nombre;
  int longitud;

  strcpy(nombre, "Jesús"); // JESÚS\0

  longitud = strlen(nombre);

  p_nombre = malloc((longitud+1)*sizeof(char));

  strcpy(p_nombre, nombre);

  printf("Nombre: %s\n", p_nombre);

  free(p_nombre);

  return EXIT_SUCCESS;
}
