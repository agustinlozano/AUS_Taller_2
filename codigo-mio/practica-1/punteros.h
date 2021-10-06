#ifndef PUNTEROS
#define PUNTEROS

#include <stdio.h>
#include <stdlib.h>

/* 2 */
void resuelveDesafioDos(void);

/* 3 */
void resuelveDesafioTres(void);
float * ingresarNumeros(int *indice);
char ejecutarMenuSalida();
void mostrarEnOrdenDescendente(float *reales, int contador);

/* 4 */
void resuelveDesafioCuatro(void);
char * obtener(int dia, char nombre[]);

/* 5 */
void resuelveDesafioCinco(void);
void obtenerDatos(float *kilos, float *precio);
void calcularImporte(float kilos, float precioPorKilo);
float aplicarDescuento(float *importe);

/* 6 */
int resuelveDesafioSeis(void);

/* 7 */
int resuelveDesafioSiete(void);
int getQuotient(int dividend, int divisor);
char getHexDigit(int decDigit);

/* 9 */
void resuelveDesafioNueve(void);
int ** crearMatrizIdentidad(int n);

#endif
