#include "desafios.h"

/* 6. Que lea 10 numeros por teclado, los almacene en un array y los ordene de
    forma ascendente.
*/

void resuelveDesafioSeis(void) {
    int arrNumeros[10];

    for (int i = 0; i<10; i++) {
        int numeroIngresado;
        printf("\nIngrese un numero: ");
        scanf(" %d", &numeroIngresado);

        arrNumeros[i] = numeroIngresado;
    }

    imprimirArreglo(arrNumeros, 10);
    ordenarArreglo(arrNumeros, 10);
    imprimirArreglo(arrNumeros, 10);
}

void ordenarArreglo(int arreglo[], int posiciones) {
    int primerNumero, segundoNumero;

    for (int i = 0; i<posiciones; i++) {

        for (int j = i+1; j<posiciones; j++) {
            primerNumero = arreglo[i];
            segundoNumero = arreglo[j];

            if (segundoNumero < primerNumero) {
                arreglo[i] = segundoNumero;
                arreglo[j] = primerNumero;
                imprimirArreglo(arreglo, posiciones);
            }
        }
    }
}
