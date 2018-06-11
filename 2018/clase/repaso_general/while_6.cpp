// SUMA 1-2+3-4....n

/*

 Impares (+)
 Pares (-)

 suma_pares   = -2-4-6...
 suma_impares = 1+3+5...

 suma = suma_pares + suma_impares

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, i = 1, suma = 0, suma_pares = 0, suma_impares = 0, negativo;

  printf("Introduce el número total de numeros a sumar: ");
  scanf(" %i", &n);

  while(i <= n){
    if(i%2==0){
      negativo = i *(-1);
      suma_pares += negativo;
    }
    else{
      suma_impares += i;
    }
    i++;
  }

  suma = suma_pares + suma_impares;

  printf("La suma total es: %i \n", suma);

  return EXIT_SUCCESS;
}
