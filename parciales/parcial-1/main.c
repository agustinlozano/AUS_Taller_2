#include "parcial1.h"

int main(void) {
    char *string1 = "Barad Dur";
    char *string2 = "The perfects elves";
    int **m = NULL;

    /* 1.- Definir una funcion eco */
    printf("\tEjercicio 1\n");
    printf("Cadena original: %s\n", string1);
    string1 = eco(string1);
    printf("Cadena con eco: %s\n", string1);

    /* 2.- Definir una funcion elimSFinales */
    printf("\n\tEjercicio 2\n");
    printf("Cadena original: %s\n", string2);
    elimSFinales(string2);

    /* 3.- Definir una funcion crear matriz */
    printf("\n\tEjercicio 3\n");
    int rows = 4;
    int col = 3;
    m = crearMatriz(col, rows);

    //Liberar memoria
    for(int i = 0; i < col; i++){
        free(m[i]);
    }
    free(m);

    free(string1);
    return EXIT_SUCCESS;
}
