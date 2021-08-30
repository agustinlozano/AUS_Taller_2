#ifndef TALLER
#define TALLER

#include <stdio.h>
#include <stdlib.h>

/* 1 */
void resuelveDesafioUno(void);
void intercambiarValores(int *a, int *b, int *c);
void mostrarValores(int a, int b, int c);

/* 3 */
void resuelveDesafioTres(void);
void imprimirAscendentemente(int arreglo[], int length);
void imprimirDescendentemente(int arreglo[], int length);

/* 4 */
void resuelveDesafioCuatro(void);
void rellenarNumerosPares(int arreglo[]);
void rellenarNumerosImpares(int arreglo[]);

/* 5 */
void resuelveDesafioCinco(void);
void mostrarPunteroEntero(int *puntero, int posiciones);
void sumarElementos(int *p, int posiciones);
void restarElementos(int *p, int posiciones);
void multiplicarElementos(int *p, int posiciones);
void dividirElementos(int *p, int posiciones);

/* tools */
void imprimirArreglo(int arreglo[], int length);


#endif
