// ESTRUCTURAS ANIDADAS

#include <stdio.h>
#include <stdlib.h>

#define N 0x100

// DEFINIMOS UNA ESTRUCTURA
struct info_direccion{
  char direccion[N];
  char ciudad[N];
  char provincia[N];
};

struct empleado{
  char nombre[N];
  struct info_direccion dir_empleado;
  double salario;
};


int main() {

  struct empleado empleados[2];

  int i;

  // RECOGEMOS LOS DATOS DE LOS EMPLEADOS
  for (i = 0; i < 2; i++) {
    printf("%i. Introduce tu nombre: ",  i+1);
    scanf(" %[^\n]", &empleados[i].nombre);
    fflush(stdin);

    printf("%i. Introduce tu dirección: ",  i+1);
    scanf(" %[^\n]", &empleados[i].dir_empleado.direccion);
    fflush(stdin);

    printf("%i. Introduce tu ciudad: ",  i+1);
    scanf(" %s", &empleados[i].dir_empleado.ciudad);
    fflush(stdin);

    printf("%i. Introduce tu provincia: ",  i+1);
    scanf(" %s", &empleados[i].dir_empleado.provincia);
    fflush(stdin);

    printf("%i. Introduce tu salario: ",  i+1);
    scanf(" %lf", &empleados[i].salario);
    fflush(stdin);

    printf("\n");
  }

  printf("\n");

  // IMPRIMIMOS LOS DATOS DE LOS EMPLEADOS
  for (i = 0; i < 2; i++) {
      printf("- DATOS DEL EMPLEADO %i\n\n", i+1);
      printf("Nombre: %s\n", empleados[i].nombre);
      printf("Dirección: %s\n", empleados[i].dir_empleado.direccion);
      printf("Ciudad: %s\n", empleados[i].dir_empleado.ciudad);
      printf("Provincia: %s\n", empleados[i].dir_empleado.provincia);
      printf("Salario: %.2lf €\n", empleados[i].salario);
      printf("\n");
  }

  return EXIT_SUCCESS;
}
