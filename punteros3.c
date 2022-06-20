#include <stdio.h>

int main() {
  //declaro una variable con valor 10
  int x = 10;
  //declaro variable puntero a entero
  int *ptr;
  //le asigno el valor de la memoria donde esta x
  ptr = &x;

  printf("el valor de la variable x es %d\n", x);
  printf("el valor en la direccion de memoria de x es %d\n", *ptr);
  printf("la direccion en memoria donde esta la variable x es %p\n", ptr);
  printf("la direccion de memoria donde esta ptr es %p\n", &ptr);
  return 0;
}
