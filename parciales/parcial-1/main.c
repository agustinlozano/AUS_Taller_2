#include "parcial1.h"

int main(void) {
    char *string1 = "Barad Dur";
    char *string2 = "The perfects elves";

    /* 1- Definir una funcion eco */
    printf("\tEjercicio 1\n");
    printf("Cadena original: %s\n", string1);
    printf("Cadena con eco: %s\n", eco(string1));

    /* 2- Definir una funcion elimSFinales */
    printf("\n\tEjercicio 2\n");
    printf("Cadena original: %s\n", string2);
    elimSFinales(string2);


    return EXIT_SUCCESS;
}
