#include <stdlib.h>
#include <stdio.h>

int suma(int n){
     while (n!=1){
          return n + suma(n-1);
     }
     return 1;
}

int main() {

  printf("%i\n", suma(5));

  return 0;
}
