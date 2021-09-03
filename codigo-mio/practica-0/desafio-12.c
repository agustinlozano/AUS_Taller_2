/* 12. Dada una frase en una cadena, mostrar en pantalla cada palabra que la
   compone
*/

#include "desafios.h"
#include <string.h>

int resuelveDesafioDoce(void) {
    char *frase = ingresarFrase();

    if (frase == NULL) {
        return EXIT_FAILURE;
    }

    desglosarFrase(frase);

    return EXIT_SUCCESS;
}

void desglosarFrase(char * frase) {
    char palabra[20];
    int longitudFrase = (int)strlen(frase), contador = 0;

    printf("\nPalabras que correspnden a la frase ingresada:\n");

    for(int i = 0; i<=longitudFrase; i++) {
        int caracter = *(frase + i);

        if(caracter == ' ' || i == longitudFrase) {
            mostrarPalabra(palabra);
            limpiarArreglo(palabra);

            contador = 0;
            continue;
        } else {
            palabra[contador] = caracter;

            contador++;
            continue;
        }
    }
}

void mostrarPalabra(char palabra[]) {
    printf("\n%s\n", palabra);
}

void limpiarArreglo(char palabra[]) {
    for(int i = 0; i<20; i++){
        palabra[i] = ' ';
    }
}
