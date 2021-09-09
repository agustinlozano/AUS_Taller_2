#include "punteros.h"

/* 3) Crear un programa que lea un numero determinado (<100) de reales
    introducidos por teclado, los almacene en un vector para luego mostrarlos
    en orden inverso. Para recorrer el array debera usar aritmetica de punteros
    en lugar de indices del array.
*/

void resuelveDesafioTres(void) {
    float *reales;
    int contador = 0, *indice;

    indice = &contador;

    printf("Ingrese un numero real menor que cien");
    reales = ingresarNumeros(indice);

    mostrarEnOrdenDescendente(reales, contador);

    free(reales);
}

float * ingresarNumeros(int *indice) {
    float *numerosReales = (float *)malloc(100 * sizeof(float));
    int indiceLocal = *indice;

    printf("\nSi desea salir ingrese [y], sino presione cualquier otra tecla\n");

    char respuesta = 'n';
    while(respuesta == 'n') {
        float numeroIngresado;

        printf("\nEl numero es: ");
        scanf(" %f", &numeroIngresado);
        *(numerosReales + indiceLocal) = numeroIngresado;

        respuesta = ejecutarMenuSalida();

        indiceLocal++;
    }

    *indice = indiceLocal;

    return numerosReales;
}

char ejecutarMenuSalida() {
    char eleccion;
    printf("\nSalir? respuesta: ");
    scanf(" %c", &eleccion);

    if (eleccion != 'y') {
        eleccion = 'n';
    }

    return eleccion;
}

void mostrarEnOrdenDescendente(float *numerosReales, int contador) {
    int inicio = contador - 1;
    for(int i = inicio; i >= 0; i--){
        printf("\nEl valor en la posicion %d es: %f", i, *(numerosReales + i));
    }
}
