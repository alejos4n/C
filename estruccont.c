#include <stdio.h>

//estructura de datos

struct direccion
{
  char name[50];
  char calle[100];
  int numero;
  char ciudad[50];
};

struct point1
{
  int x, y, z;
} p1;
// p1 es una variable para llamar a point

struct point2
{
  int x, y;
};

int main() {
  //cuerpo de la funcion

  struct point1 p1 = {.y = 0, .z = 1, .x = 2};
  struct point1 p2 = {.x = 20};

  printf("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
  printf("x cambia a valor %d\n", p2.x);

  return 0;
}
