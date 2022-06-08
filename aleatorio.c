#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *main - punto de entrada
 *Returno seimpre 0
 **/

int main(void){
  int numero;

  srand(time(0));
  numero = rand() - RAND_MAX / 2;
  if (numero > 0)
    printf("%d es positivo\n", numero);
  else if (numero == 0)
    printf("%d el numero es cero\n", numero);
  else
    printf("%d el numero es negativo\n", numero);
  return 0;
}
