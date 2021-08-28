#include "desafios.h"

void imprimirArreglo(int arreglo[], int length) {
    printf("\n{");
    for (int l = 0; l<length; l++) {
        if (l == (length-1)) {
            printf("%d}\n", arreglo[l]);
            break;
        }
        printf("%d", arreglo[l]);
    }
}

void imprimirAscendentemente(int arreglo[], int length) {
    printf("\n");
    for (int i = 0; i<length; i++) {
        printf("Posicion %d es: %d\n", i, arreglo[i]);
    }
}

void imprimirDescendentemente(int arreglo[], int length) {
    printf("\n");
    for (int i = length-1; i>=0; i--) {
        printf("Posicion %d es: %d\n", i, arreglo[i]);
    }
}
