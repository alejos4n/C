#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    //va por cada letra en argv
    //y argv[0]?
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    //hacemos un array con departamentos
    char *states[] = {"Antioquia", "Cundi", "Atlantico", "amazonas"};

    int num_states = 4;

    for (i = 0; i < num_states; i++){
        printf("Departamento %d: %s\n", i, states[i]);
    }

    return 0;
}
