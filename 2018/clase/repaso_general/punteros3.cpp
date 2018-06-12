/*

    Comprobar si un nÚmero es par o impar,
    y señalar la posicion de memoria donde
    se está guardando el número

*/


#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero, *p_numero;

	printf("Introduce un numero: "); // PEDIMOS EL NÚMERO AL USUARIO
	scanf("%i",&numero);

	p_numero = &numero;  // GUARDAMOS LA POSICIÓN DE MEMORIA DEL NÚMERO

	if(*p_numero%2==0){ // SE COMPRUEBA SI ES PAR
		printf("El numero %i es par",*p_numero);
		printf("\nPosicion: %p\n\n",p_numero); // IMPRIMIMOS SU POSICIÓN EN MEMORIA
	}
	else{
		printf("El numero %i es impar",*p_numero);
		printf("Posicion: %p\n\n",p_numero);
	}

  return EXIT_SUCCESS;
}
