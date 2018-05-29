#include <stdlib.h>
#include <stdio.h>

int factorial(int n){
     while (n!=1){
          return n * factorial(n-1);
     }
     return 1;
}

int main() {

  printf("%i\n", factorial(5));

  return 0;
}
