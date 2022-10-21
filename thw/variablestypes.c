#include <stdio.h>

int main(int argc, char*argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56454.4545;
    char initial = 'A';
    char fist_name[] = "Alejandro";
    char lastname[] = "Sanch";

    printf("Usted está a %d kilometros de distancia. \n", distance);
    printf("Usted tiene %f niveles de carga \n", power);
    printf("usted tiene %f nivels de reserva \n", super_power);
    printf("Mi inicial es %c \n", initial);
    printf("Mi primer nombre es %s \n", fist_name);
    printf("Tengo un apellido %s \n", lastname);
    printf("mi nombre completo es %s %c %s \n", fist_name, initial, lastname);

    int bugs = 100;
    double bug_rate = 1.2;

    printf("usted tiene %d bugs en la linea %f \n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("el universo entero tiene %ld \n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("los bugs esperados son %f \n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("esta es solo una porcion del universo %e \n", part_of_universe);

    //codigo sin sentido alguno
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("vamos a ver que imprime el codigo raro %d%% \n", care_percentage);

    return 0;
}

