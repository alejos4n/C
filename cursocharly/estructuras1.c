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
  int x, y;
} p1;
// p1 es una variable para llamar a point

struct point2
{
  int x, y;
};

int main() {
  //cuerpo de la funcion

  //tanto la variable p1 y p2 se pueden declarar de ambas formas
  struct point2 p2;

  //inicializo las variables
  struct point1 p1 = {1, 2};

  //le asigno a x dentro de p1 o point1 el valor de 20
  p1.x = 20;
  //imprimo los valores en las varaibles p1 x y p1 y
  printf("x = %d, y = %d", p1.x, p1.y);

  return 0;
}
