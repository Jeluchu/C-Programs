/*

  Dos estructuras, una llamada "promedio" que tendrá
  las siquietes variables: nota1, nota2, nota3;

  Y otra llamada "alumno" que tendrá las siguientes
  variables: nombre, sexo, edad.

  Hacer que la estructura "promedio" esté anidada
  en la estructura "alumno".

  A continuación pedir todos los datos para un alumno,
  calcular su promedio, y por último imprimir todos
  sus datos incluidos el promedio

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

  // DECLARAMOS LA VARIABLE DE LA ESTRUCTURA
  struct Alumno alumno1;

  float promedio = 0;

  // PEDIMOS AL USUARIO LOS DATOS
  printf("Introduce tu nombre: ");
  //gets --> PARA GUARDAR TODO CON ESPACIOS INCLUIDOS
  gets(alumno1.nombre);

  printf("Introduce tu sexo: ");
  gets(alumno1.sexo);

  printf("Introduce tu edad: ");
  scanf(" %i", &alumno1.edad);

  printf("Introduce tus notas: ");
  scanf(" %f %f %f", &alumno1.prom.nota1, &alumno1.prom.nota2, &alumno1.prom.nota3);

  // HACEMOS LA MEDIA DE LAS NOTAS
  promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;


  // IMPRIMIMOS LOS DATOS DEL USUARIO
  printf("- DATOS DEL ALUMNO -\n\n");

  printf("Nombre: %s\n", alumno1.nombre);
  printf("Sexo: %s\n", alumno1.sexo);
  printf("Edad: %i\n", alumno1.edad);
  printf("Promedio: %.2f\n", promedio);

  return EXIT_SUCCESS;
}
