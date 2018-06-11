// UNA FUNCIÓN RECURSIVA ES UNA FUNCIÓN
// QUE SE LLAMA ASÍ MISMA

/*
    |  4! = 4 * 3!
    |  3! = 3 * 2!
    |  2! = 2 * 1!
    |  1! = 1
    |
    |> EL PROGRAMA COMIENZA A COMPROBAR

    |> UNA VEZ CUMPLIDA LA CONDICIÓN
    |
    |  1! = 1
    |  2! = 2 * 1
    |  3! = 3 * 2
    |  4! = 4 * 6 => 6 viene de '3! = 3 * 2'
    |
    |> EL TOTAL SERÁ 24
*/

#include <stdio.h>
#include <stdlib.h>

long factorial(int n);

int main(){

  int numero;

  printf("Introduce un número: ");
  scanf(" %i", &numero);

  printf("El factorial del número es %li\n", factorial(numero));

  return EXIT_SUCCESS;
}

long factorial(int n){

  if (n <= 1) {
     return 1;
  } else {
     return (n*factorial(n-1));
  }

}
