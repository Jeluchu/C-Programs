/*

    Determinar si un número es primo o no.
    E indicar en que posición de memoria
    se guardó el número

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero,i,cont = 0;
	int *p_numero;

	printf("Introduce un numero: "); // PEDIMOS EL NÚMERO AL USUARIO
	scanf("%i",&numero);

	p_numero = &numero; // GUARDAMOS EN p_numero LA POSICIÓN DE LA MEMORIA NUMERO

	for(i=1;i<=*p_numero;i++){ // UTILIZAMOS EL BUCLE PARA SABER SI ES PRIMO O NO
		if(*p_numero%i==0){
			cont++;
		}
	}

	// COMPROBAMOS SI ES PRIMO

	if(cont>2){
		printf("El número %i no es primo",*p_numero);
		printf("Se encuentra en la posicion: %p\n\n",p_numero);
	}
	else{
		printf("El numero %i si es primo",*p_numero);
		printf("\nPosicion: %p\n\n",p_numero);
	}

	return EXIT_SUCCESS;
}
