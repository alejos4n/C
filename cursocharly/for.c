#include <stdio.h>
#include <stdlib.h>

int main(){
  int num_1 = 9, num_2 = 10, resultado = 0, contador;

  for(contador = 1; contador <= 10; contador++){
    resultado += num_1;
  }

  printf("la multiplicacion de %d x %d es igual a %d", num_1, num_2, resultado);

  return 0;
}
