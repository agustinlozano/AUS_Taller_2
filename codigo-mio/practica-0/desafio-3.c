#include "desafios.h"

/* 3. Que rellene un array con los 100 primeros numeros enteros y los muestre en
    pantalla en orden ascendente y luego descendente.
*/

void resuelveDesafioTres(void) {
    int numeros[100];

    for (int i = 0; i<100; i++) {
        numeros[i] = i+1;
    }

    printf("\nArreglo por posiciones de manera ascendente: ");
    imprimirAscendentemente(numeros, 100);

    printf("\nArreglo por posiciones de manera descendente: ");
    imprimirDescendentemente(numeros, 100);
}
