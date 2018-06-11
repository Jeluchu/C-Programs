/*

  Hacer una estructura llamada "Corredor",
  en la cual se tendrán los siguientes
  valores: nombre, edad, sexo, club.

  Hay que pedir los datos al usuario para
  un corredor y asignarle una categoría
  de competición:

      - Juvenil: Hasta 18 años
      - Senior: Hasta 40 años
      - Veterano: +40 años

  Después hay que mostrar todos los datos
  del corredor, incluyendo la categoría
  de competición.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100
#define M 20

struct Corredor{
  char nombre[N];
  int edad;
  char sexo[M];
  char club[M];

};

int main(){

  char categoria[M];

  // CREAMOS UNA VARIABLE STRUCT
  struct Corredor corredor1;

  // RECOGER LOS DATOS DEL CORREDOR
  printf("Introduce tu nombre: ");
  scanf(" %s", corredor1.nombre);
  fflush(stdin);

  printf("Introduce tu edad: ");
  scanf(" %i", &corredor1.edad);
  fflush(stdin);

  printf("Introduce tu sexo: ");
  scanf(" %s", corredor1.sexo);
  fflush(stdin);

  printf("Introduce tu club: ");
  scanf(" %s", corredor1.club);
  fflush(stdin);

  // COPIAR UNA CADENA DE CARACTERES A UN VALOR
  if (corredor1.edad <= 18) {
      strcpy(categoria, "Juvenil");
  } else if (corredor1.edad <= 40){
      strcpy(categoria, "Senior");
  }else{
      strcpy(categoria, "Veterano");
  }

  printf("\n");

  // IMPRIMIR DATOS DEL Corredor
  printf("- DATOS DEL CORREDOR -\n\n");
  printf("Categoría: %s\n", categoria);
  printf("Nombre: %s\n", corredor1.nombre);
  printf("Sexo: %s\n", corredor1.sexo);
  printf("Edad: %i\n", corredor1.edad);
  printf("Club: %s\n\n", corredor1.club);

  return EXIT_SUCCESS;
}
