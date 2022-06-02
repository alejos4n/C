#include <stdio.h>

int main(){
  //declaro dos variables
  //el array de la var text imprimira hola sin dejar espacios
  char text[] = {'h','o','l','a'};
  //la var text1 cuando imprima Hola tendra un espacio adicional
  char text1[] = "Hola";

  //imprimimos se vera holaHola, Hola
  printf("%s, %s", text, text1);
  return 0;
}
