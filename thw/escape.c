#include <stdio.h>

/*en este programa se imprimen algunos caracteres de escape encontrados en internet y su uso*/

int main()
{
    //uso variables para despues imprimir segun el uso
    int edad = 10;

    printf("imprimo algo con \a ""\\a \n", edad);
    printf("\n imprimo otra cosa una barra invertida \\");
    printf("\n imprimo comillas simples \'");
    printf("\n imprimo comillas dobles \" ");
    printf("\n imprimo una tabulacion \t de texto");
    printf("\n imprimo una tabulacion vertical \v");

    return 0;
}
