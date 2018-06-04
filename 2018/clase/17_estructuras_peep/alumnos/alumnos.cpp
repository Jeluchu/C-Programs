#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// SE DEFINE LA ESTRUCTURA
// Y SE LE AÑADE UN NOMBRE
typedef struct{
    char nombre[10];
} NombreAlumno;


void cambia_nombre(NombreAlumno alumno1){
    //COPIA EN ALUMNO1 --> FULANITO
    strcpy(alumno1.nombre, "Fulanito");
}

int main(int argc, char *argv[]){

    //SE DELCARA LA ESTRUCTURA
    //CON ALUMNO1 Y ALUMNO2
    NombreAlumno alumno1, alumno2;

    //COPIA EN ALUMNO1 --> MENGANITO
    strcpy(alumno1.nombre, "Menganito");
    alumno2 = alumno1;

    //COPIA EN ALUMNO2 --> MARQUITO
    strcpy(alumno2.nombre, "Marquito");
    printf("%s\n", alumno1.nombre);
    
    cambia_nombre(alumno1);

    printf("%s\n", alumno1.nombre);

    return EXIT_SUCCESS;
}
