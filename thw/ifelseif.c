#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    //el programa pedirá argumentos y el nombre de él será el primer argumento
    if (argc == 1){
        printf("Solo ha ingresado un argumento \n");
    } else if (argc > 1 && argc < 4) {
        printf("estos son tus argumentos:\n");

        for (i = 0; i < argc; i++){
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("Tiene demasiados argumentos\n");
    }

    return 0;
}
