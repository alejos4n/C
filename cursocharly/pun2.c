#include <stdio.h>

//dereferencing - deferenciacion

int main() {
  printf("creo una variable entera con valor var = 10\n");
  int var = 10;
  printf("imprimo el valor de la variable %d\n", var);
  printf("muestro el valor de la variable var en memoria: %d \n", var);
  int *ptr = &var; //almacena la direccion de memoria de la variable var
  printf("el valor de var es %d\n", *ptr);
  printf("la direccion de memoria de var es %p\n", ptr);
  *ptr = 20;
  printf("cambio el valor del puntero a 20 *ptr %d\n", *ptr);
  //printf("imprimo *ptr %p\n", *ptr);
  printf("imprimo ptr %p\n", ptr);
  printf("imprimo *ptr %d\n", *ptr);
  // printf("imprimo ptr %d\n", ptr);
  return 0;
}
