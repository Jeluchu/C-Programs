#include <stdlib.h>
#include <stdio.h>

int main() {

   int opcion;

   do{
   
     printf("Introduce un número: ");
     scanf(" %i", &opcion);
   
   }while((opcion<1) || (opcion>5));

   return EXIT_SUCCESS;


}
