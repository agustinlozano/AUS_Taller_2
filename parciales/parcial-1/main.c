#include "parcial1.h"

int main(void) {
    char *string1 = "Barad Dur";
    char *string2 = "The perfects elves";
    int **matrizInt = NULL;
    char **matrizChar = NULL;

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
    printf("Primera parte: crear un matriz entera 4x3\n");
    int rows = 4;
    int col = 3;
    matrizInt = crearMatriz(col, rows);

    printf("\nSeguda parte: matriz de char a partir de la matriz entera\n");
    matrizChar = crearMatrizChar(col, rows, matrizInt);

    //Zona liberar memoria
    for(int i = 0; i < col; i++){
        free(matrizInt[i]);
    }
    free(matrizInt);

    for(int i = 0; i < col; i++){
        free(matrizChar[i]);
    }
    free(matrizChar);

    free(string1);
    return EXIT_SUCCESS;
}
