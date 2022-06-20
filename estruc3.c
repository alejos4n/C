#include <stdio.h>

//estructura de datos

struct direccion
{
  char name[50];
  char calle[100];
  int numero;
  char ciudad[50];
};

struct point
{
  int x, y, z;
} p1;
// p1 es una variable para llamar a point


int main() {
  //cuerpo de la funcion

  struct point arr[10];

  //acceder a los elementos del arreglo
  arr[0].x = 10;
  arr[0].y = 20;

  //imprimo las posiciones
  printf("%d %d", arr[0].x, arr[0].y);

  return 0;
}
