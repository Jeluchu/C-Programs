#include <stdio.h>
#include <stdlib.h>

int main(){

    int lado, area, perimetro;

    system("toilet --gay -fpagga CUADRADO");

    /* Entrada de datos */
    printf("Lado: ");
    scanf(" %i", &lado);

    /* Calculo de datos */
    area = lado*lado;
    perimetro = 4*lado;

    /* Salida de datos */
    printf("Área: %i\n"
           "Perímetro: %i\n",
           area, perimetro);

    return EXIT_SUCCESS;
}
