#include "desafios.h"

/* 1. Realizar un programa que declare las variables x, y, z, les asigne los valores
    10, 20 y 30 e intercambie entre si sus valores de forma que el valor de x pasa a y,
    el de y pasa a z y el valor de z pasa a x (se pueden declarar variables auxiliares
    aunque se pide que se use el menor numero posible).
*/


void resuelveDesafioUno(void) {
    int x = 10, y = 20, z = 30;

    intercambiarValores(&x, &y, &z);
    mostrarValores(x, y, z);
}

void intercambiarValores(int *a, int *b, int *c) {
    int aux = *a;

    *a = *c;
    *c = *b;
    *b = aux;
}

void mostrarValores(int a, int b, int c) {
    printf("El valor de x es: %d\n", a);
    printf("El valor de y es: %d\n", b);
    printf("El valor de z es: %d\n", c);
}
