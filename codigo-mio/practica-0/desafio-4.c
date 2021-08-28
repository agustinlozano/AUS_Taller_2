#include "desafios.h"

/* 4. Que rellene un array con los numeros pares y otro con los impares compren-
    didos entre 1 y 100 y los muestre en pantalla en orden ascendente y descendente
*/

void resuelveDesafioCuatro(void) {
    int numerosPares[50], numerosImpares[50];

    rellenarNumerosPares(numerosPares);
    rellenarNumerosImpares(numerosImpares);

    imprimirAscendentemente(numerosPares, 50);
    imprimirAscendentemente(numerosImpares, 50);
}

void rellenarNumerosPares(int pares[]) {
    int posicion = 0;
    for (int i = 0; i<100; i++) {
        int numeroAnalizado = i+1;

        if (numeroAnalizado % 2 == 0) {
            pares[posicion] = numeroAnalizado;
            posicion++;
        }
    }
}

void rellenarNumerosImpares(int impares[]) {
    int posicion = 0;
    for (int i = 0; i<100; i++) {
        int numeroAnalizado = i+1;

        if (numeroAnalizado % 2 == 0) {
            impares[posicion] = numeroAnalizado-1;
            posicion++;
        }
    }
}
