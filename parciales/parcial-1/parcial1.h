#ifndef PARCIAL1
#define PARCIAL1

#include <stdio.h>
#include <stdlib.h>

#define ECO 4
#define POSICIONES_ASCII 48

/* 1 */
char * eco(const char * str);

/* 2 */
void elimSFinales(char * str);

/* 3 */
int ** crearMatriz(int col, int rows);
char ** crearMatrizChar(int col, int rows, int **matrizInt);

#endif
