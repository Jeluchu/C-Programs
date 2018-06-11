/*

  Hacer una estructura llamada "Alumno",
  en la cual se tendrán los siguientes
  valores: nombre, edad, promedio.

  Hay que pedir los datos al usuario para
  3 alumnos y comprobar cuál de los 3 tiene
  mejor primedio.

  Después hay que mostrar todos los datos
  del alumno.

*/

#include <stdio.h>
#include <stdlib.h>

#define N 0x100

// DEFINIMOS UNA ESTRUCTURA
struct Alumno{
  char nombre[N];
  int edad;
  float promedio;
};

int main() {

  struct Alumno alumnos[3];

  float mejorNota = 0.0;

  int i, posic;

  // PEDIMOS LOS DATOS AL USUARIO
  for (i = 0; i < 3; i++) {
    printf("%i. Introduce tu nombre: ", i+1);
    scanf(" %s", alumnos[i].nombre);
    fflush(stdin);

    printf("%i. Introduce tu Edad: ", i+1);
    scanf(" %i", &alumnos[i].edad);
    fflush(stdin);

    printf("%i. Introduce tu promedio: ", i+1);
    scanf(" %f", &alumnos[i].promedio);
    fflush(stdin);

    printf("\n");
  }


  // REALIZAMOS LA COMPARACIÓN DE NOTAS
  for(i = 0; i < 3; i++){
		if(alumnos[i].promedio > mejorNota){
			mejorNota = alumnos[i].promedio;
			posic = i;
		}
	}

  printf("\n");

  // IMPRIMIMOS EL ALUMNO CON MAYOR PROMEDIO
  printf("El nombre del alumno es %s\n", alumnos[posic].nombre);
  printf("La edad del alumno es %i años\n", alumnos[posic].edad);
  printf("El promedio de dicho alumno es %.2f\n", alumnos[posic].promedio);

  printf("\n");

  return EXIT_SUCCESS;
}
