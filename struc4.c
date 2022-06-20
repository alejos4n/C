#include <stdio.h>

struct puntero
{
  int x, y;
};


int main() {
  //cuerpo de la funcion
  //asigno los valores 1 y 2 a las variables del puntero
  struct puntero p1 = {1, 2};

  //muestro los datos de los punteros
  printf("muestro los valores de los punteros\n");
  printf("p1.X vale %d\n p1.Y vale %d\n", p1.x, p1.y);

  //declaro la variable y leasignamos el valor en memoria de p1
  struct puntero *p2 = &p1;

  //accedemos a los datos de la direccion memoria e imprimimos
  printf("el valor en memoria p1.x es %p\n", &p2->x);
  printf("la valor en memoria en p1.y es %p\n", &p2->y);

  
  return 0;
}
