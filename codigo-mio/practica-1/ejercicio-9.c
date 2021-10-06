#include "punteros.h"

/* 9) Escriba una funcion que reciba como argumento un entero positivo (n) y que genere
 * en forma dinamica una matriz identidad de dimension n.
 */

void resuelveDesafioNueve(void) {
    int **mIdentidad;
    int dimension;

    printf("Crear matriz identidad de dimension n x n\n");
    printf("\nIngrese el valor que determina la dimension de la matriz: ");
    scanf(" %d", &dimension);

    mIdentidad = crearMatrizIdentidad(dimension);

    for(int i = 0; i < dimension; i++){
        free(mIdentidad[i]);
    }
    free(mIdentidad);
}

int ** crearMatrizIdentidad(int n) {
    int **mIdentidad = (int **)malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++){
        mIdentidad[i] = (int *)malloc(n * sizeof(int));
    }

    //rellenar
    int posicionDiagonal = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == posicionDiagonal){
                mIdentidad[i][j] = 1;
            }else{
                mIdentidad[i][j] = 0;
            }
        }
        posicionDiagonal++;
    }

    //Mostrar matriz resultante
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", mIdentidad[i][j]);
        }
        printf("\n");
    }

    return mIdentidad;
}
