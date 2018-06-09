#include <stdio.h>
#include <stdlib.h>

#define N 0x100

typedef struct {
  double matematicas;
  double lengua;
  double historia;
} Nota;

struct Alumno {
  char nombre[N];
  char apellidos[N];
  Nota asignaturas;
  void (*test)();
};


struct Alumno rellenar(){
  struct Alumno nuevo;
  printf("Introduce el nombre del alumno: ");
  scanf(" %s", nuevo.nombre);
  printf("Introduce los apellidos del alumno: ");
  scanf(" %s", nuevo.apellidos);

  printf("Introduce la nota de matemáticas: ");
  scanf(" %lf", &nuevo.asignaturas.matematicas);

  printf("Introduce la nota de lengua: ");
  scanf(" %lf", &nuevo.asignaturas.lengua);

  printf("Introduce la nota de historia: ");
  scanf(" %lf", &nuevo.asignaturas.historia);

  return nuevo;
};

void modificar(struct Alumno *alumno){
  *alumno = rellenar();
}

void dump(struct Alumno lista[N]){
  FILE * fichero = fopen("binary.txt", "wb");
  fwrite(lista, sizeof(struct Alumno), N, fichero);
  fclose(fichero);
}

struct Par{
  double nota;
  int id;
};

struct Par minimo_mates(struct Alumno lista[N]){
  struct Par minimo = {1000. , -1};
  for (int i = 0; i < N; i++) {
    if (minimo.nota > lista[i].asignaturas.matematicas) {
         minimo.nota = lista[i].asignaturas.matematicas;
         minimo.id = i;
    }
    return minimo;
  }
};


int fibonacci(int n){
  if( n == 0 || n == 1)
    return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}



int main(){

  struct Alumno lista[N];

  lista[0] = rellenar();


}
