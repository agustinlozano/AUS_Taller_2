/* Bidimension con puntero Repetiremos un ejemplo similar al del array bidi-
   mensional, definiremos, valorizaremos y mostraremos una matriz, pero generada
   dinamicamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int filas, columnas, w;
    int **m = NULL;

    printf("Elija el numero de filas que tiene su matriz: ");
    scanf(" %d", &filas);

    printf("\nElija el numero de columnas que tiene su matriz: ");
    scanf(" %d", &columnas);

    //Se crea la matriz de forma dinamica
    m = (int **)malloc(sizeof(int *)*filas);

    for(int i = 0; i<filas; i++){
        m[i] = (int *)malloc(sizeof(int)*columnas);
    }

    //Pide el valor de cada elemnto de la matriz
    printf("Se completa la matriz con valores random");

    for(int i = 0; i<filas; i++) {
        for(int j = 0; j<columnas; j++) {
            m[i][j] = 1 + rand() % 9; 
        }
    }

    printf("\nLa matriz es: \n");

    for(int i = 0; i<filas; i++) {
        for(int j = 0; j<columnas; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    //Libero la memoria utilizada por la matriz
    for(int i = 0; i<filas; i++) {
        free(m[i]);
    }

    free(m);

    return EXIT_SUCCESS;
}
