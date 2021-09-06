/* Ejemplo sobre tamanio de datos */

#include <stdio.h>

int main(void) {
    int i = 8, *pi = &i;
    long long l = 8, *pl = &l;
    float f = 102.8, *pf = &f;
    double d = 678.44, *pd = &d;
    int vector[100];

    vector[0] = 44;

    printf("variable int, tam.bytes: %d \tdir.&i: %p \tvalor: %d\n",
        sizeof(i), &i, i);

    printf("puntero int, tam.bytes: %d \tdir.&pi: %p \tvalor: %p\n",
        sizeof(pi), &pi, pi);

    printf("\nvariable long, tam.bytes: %d \tdir.&l: %p \tvalor: %ld\n",
        sizeof(l), &l, l);

    printf("puntero long, tam.bytes: %d \tdir.&pl: %p \tvalor: %p\n",
        sizeof(pl), &pl, pl);

    printf("\nvariable float, tam.bytes: %d \tdir.&f: %p \tvalor: %.1f\n",
        sizeof(f), &f, f);

    printf("puntero float, tam.bytes: %d \tdir.&pf: %p \tvalor: %p\n",
        sizeof(pf), &pf, pf);

    printf("\nvariable double, tam.bytes: %d \tdir.&d: %p \tvalor: %.2lf\n",
        sizeof(d), &d, d);

    printf("puntero double, tam.bytes: %d \tdir.&pd: %p \tvalor: %p\n",
        sizeof(pd), &pd, pd);

    printf("\nvariable array, tam.bytes: %d \tdir.&vec[0]: %p \tvalor: %d\n",
        sizeof(vector[0]), &vector[0], vector[0]);

    printf("puntero array, tam.bytes: %d \tdir.&vec: %p \tvalor: %p\n",
        sizeof(vector), &vector, vector);


    return 0;
}
