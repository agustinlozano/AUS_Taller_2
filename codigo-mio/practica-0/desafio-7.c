/* 7. Que se ingrese una frase en un arreglo y se invierta el orden de la misma
    guardandose en otro. Mostrar ambos arrays
*/

#include "desafios.h"
#include <string.h>

int resuleveDesafioSiete(void) {
    char *frase = ingreso();

    if (frase == NULL) {
        return EXIT_FAILURE;
    }

    printf("Frase ingresada: %s\n", frase);

    invertirFrase(frase);

    return EXIT_SUCCESS;
}

char * ingreso(void) {
    char frase[256];
    int longitudFrase;

    printf("Ingrese una frase: ");
    scanf(" %[^,'\n']", frase);

    longitudFrase = strlen(frase);

    char *frase1 = (char *) malloc(longitudFrase);

    strncpy(frase1, frase, (int)longitudFrase);

    return frase1;
}

char * invertirFrase(char * frase) {
    int longitudFrase = (int)strlen(frase);
    int posicion = 0;

    char *fraseInvertida = (char *) malloc(longitudFrase);

    for (int i = longitudFrase; i >= 0; i--) {
        *(fraseInvertida + posicion) = *(frase + i);

        posicion++;
        //printf("\n%c", *(frase + i));
    }

    printf("Frase invertida: %s\n", fraseInvertida); // <-- Esta linea no me muestra la frase cuando corro el programa
                                                     // aparece lo siguiente:
                                                     //     $> Frase invertida: 

    return fraseInvertida;
}
