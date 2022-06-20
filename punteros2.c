#include <stdio.h>

//dereferencing - deferenciacion

int main() {
  int var = 10;
  int *ptr = &var; //almacena la direccion de memoria de la variable var
  printf("el valor de var es %d\n", *ptr);
  printf("la direccion de memoria de var es %p\n", ptr);
  *ptr = 20;
  printf("cambio el valor del puntero a 20 *ptr %d\n", *ptr);
  return 0;
}
