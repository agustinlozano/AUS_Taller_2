#include "desafios.h"

/* 5. Que lea 10 numeros por teclado, los almacene en un array y muestre la suma,
    resta, multiplicacion y division de todos.
*/

void resuelveDesafioCinco(void) {
    int *pNumeros, arrNumeros[10];
    pNumeros = arrNumeros;

    printf("Los valores de memoria son: %p, %p\n", pNumeros, arrNumeros);

    //Rellenar arreglo
    for (int i = 0; i<10; i++) {
        int numeroIngresado;
        printf("\nIngrese un numero: ");
        scanf(" %d", &numeroIngresado);

        arrNumeros[i] = numeroIngresado;
    }

    printf("\nVeamos los valores ingresados a traves del puntero:");
    mostrarPunteroEntero(pNumeros, 10);

    printf("\nAqui vemos los resultados obtenidos:");
    sumarElementos(pNumeros, 10);
    restarElementos(pNumeros, 10);
    multiplicarElementos(pNumeros, 10);
    dividirElementos(pNumeros, 10);

    printf("\n\nFin del programa.\n");
}

void mostrarPunteroEntero(int *puntero, int posiciones) {
    printf("\n{");
    for (int l = 0; l<posiciones; l++) {
        if (l == (posiciones-1)) {
            printf("%d}\n", *(puntero+l));
            break;
        }
        printf("%d, ", *(puntero+l));
    }
}

void sumarElementos(int *p, int posiciones) {
    int suma = 0;
    for (int i = 0; i<posiciones; i++) {
        suma = suma + *(p+i);
    }

    printf("\nEl valor de la suma es: %d", suma);
}

void restarElementos(int *p, int posiciones) {
    int resta = 0;
    for (int i = 0; i<posiciones; i++) {
        resta = resta - *(p+i);
    }

    printf("\nEl valor de la resta es: %d", resta);
}

void multiplicarElementos(int *p, int posiciones) {
    int acumulador = 1, resultado;
    for (int i = 0; i<posiciones; i++) {
        acumulador = acumulador * (*(p+i));
    }

    resultado = acumulador;
    printf("\nEl valor de la multiplicacion es: %d", resultado);
}

void dividirElementos(int *p, int posiciones) {
    double acumulador = *p, resultado;

    for (int i = 0; i<posiciones; i++) {
        acumulador = acumulador / *(p+i+1);
    }

    resultado = acumulador;
    printf("\nEl valor de la division es: %lf", resultado);
}
