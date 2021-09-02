//Lectura de cantidad de numeros dinamicamente

#include <stdio.h>
#include <stdlib.h>

int leerCantidad(void);
void leer(int cantidad, int *numeros);
void imprimir(int cantidad, int *numeros);


int main(void) {
    int cantidad = leerCantidad();
    int *numeros = (int *) malloc(cantidad * sizeof(int));

    if (numeros == NULL) {
        return EXIT_FAILURE;
    }

    leer(cantidad, numeros);
    imprimir(cantidad, numeros);

    free(numeros);
    
    return EXIT_SUCCESS;
}

int leerCantidad() {
    int cantidad;
    printf("\nCuantos numeros va a ingresar? ");
    printf("\nSu respuesta: ");
    scanf(" %d", &cantidad);

    return cantidad;
}

void leer(int cantidad, int *numeros) {
    printf("\nAhora vamos a ingresar algunos numeros por teclado.");
    
    for (int i = 0; i<cantidad; i++) {
        printf("\nIngrese el numero %d: ", i+1);
        scanf(" %d", numeros+i);
    }
}

void imprimir(int cantidad, int *numeros) {
    printf("\nLos numeros ingresados son:");

    for (int i = 0; i<cantidad; i++) {
        printf("\n%d", *(numeros+i));
    }
}