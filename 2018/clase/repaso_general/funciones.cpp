// CELSIUS A FAHRENHEIT

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float fahrenheit(float celsius);
float kelvin(float celsius);

float fahrenheit(float celsius){

  float F = 0;

  F = (9 * celsius)/5 + 32;

  return F;

}


float kelvin(float celsius){

  float K = 0;

  K = celsius + 273.15;

  return K;

}



int main() {
    int opcion;
    float celsius, F, K;



    do {
      system("clear");
      printf("\n");

      printf("Introduce el dato de la temperatura en Celsius: ");
      scanf(" %f", &celsius);

      printf("\n");

      printf("Pulsa 1 'Convertir a grados Farenheit'\n"
             "Pulsa 2 'Convertir a grados Kelvin'\n");
      printf("Escoge la opción deseada: ");
      scanf(" %i", &opcion);

      switch (opcion) {
        case 1:
          F = fahrenheit(celsius);
          printf("Los grados en Farenheit son: %.2f\n", F);
          sleep(4000);
        break;

        case 2:
          K = kelvin(celsius);
          printf("Los grados en Kelvin son: %.2f\n", K);
          sleep(4000);
        break;

        case 0:
          return EXIT_SUCCESS;
        break;

      }

    } while(opcion !=0);
}
