#include <stdio.h>

int main(){
  //le asigno a x el valor de 10
  int x = 10;
  //declaro variable tipo entero que apunte al puntero
  int *ptr;
  //uso & para llamar la direccion de memoria
  ptr = &x;
  //imprimo el valor de x
  printf("el valor de x es %d\n", x);
  printf("el valor del puntero *ptr es %p", &x);
  return 0;
}
