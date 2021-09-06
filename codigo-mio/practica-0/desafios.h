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
void mostrarPunteroEntero(int *p, int posiciones);
void sumarElementos(int *p, int posiciones);
void restarElementos(int *p, int posiciones);
void multiplicarElementos(int *p, int posiciones);
void dividirElementos(int *p, int posiciones);

/* 6 */
void resuelveDesafioSeis(void);
void ordenarArreglo(int arreglo[], int posiciones);

/* 7 */
int resuelveDesafioSiete(void);
char * ingresarFrase(void);
char * invertirFrase(char * frase);

/* 12 */
int resuelveDesafioDoce(void);
void desglosarFrase(char * frase);
void mostrarPalabra(char palabra[]);
void limpiarArreglo(char palabra[]);

/* tools */
void imprimirArreglo(int arreglo[], int length);


#endif
