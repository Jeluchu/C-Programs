/*

  Utilizar las 2 estructuras del ejercicio
  "estructurasanidadas2.cpp", pero en este caso
  pediremos los datos para N alumnos, y
  calcularemos cual de todos tiene el
  mejor promedio e imprimiremos sus datos

*/

#include <stdio.h>
#include <stdlib.h>

#define N 0x100

// DECLARAMOS LAS VARIABLES
struct Promedio{
  float nota1;
  float nota2;
  float nota3;
};

struct Alumno{
  char nombre[N];
  char sexo[N];
  int edad;
  struct Promedio prom;
};

int main() {

  struct Alumno alumnos[100];
  int n,i,promay;
	float promedio[100], mayor = 0.0;

  printf("Introduce la cantidad de alumnos: ");
  scanf(" %i", &n);
  fflush(stdin);

  for (i = 0; i < n; i++) {
    // PEDIMOS AL USUARIO LOS DATOS
    printf("%i. Introduce tu nombre: ", i+1);
    scanf(" %s", alumnos[i].nombre);
    fflush(stdin);

    printf("%i. Introduce tu sexo: ", i+1);
    scanf(" %s", alumnos[i].sexo);
    fflush(stdin);

    printf("%i. Introduce tu edad: ", i+1);
    scanf(" %i", &alumnos[i].edad);
    fflush(stdin);

    printf("%i. Introduce tus notas: ", i+1);
    scanf(" %f %f %f", &alumnos[i].prom.nota1, &alumnos[i].prom.nota2, &alumnos[i].prom.nota3);

    // REALIZAMOS LA MEDIA DE LAS NOTAS
    promedio[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;

    // COMPROBAMOS CUÁL ES LA MAYOR
    if(promedio[i] > mayor){
      mayor = promedio[i];
      promay = i;
    }

    printf("\n");

  }

  printf("- ¡FELICIDADES ALUMNO CON MAYOR PROMEDIO! -\n\n");
  printf("\tNombre: %s\n",alumnos[promay].nombre);
  printf("\tSexo: %s\n",alumnos[promay].sexo);
  printf("\tEdad: %i\n",alumnos[promay].edad);
  printf("\tPromedio: %.2f\n\n",promedio[promay]);

  return EXIT_SUCCESS;
}
