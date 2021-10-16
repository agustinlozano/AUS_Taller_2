#ifndef STRUCT
#define STRUCT

#include <stdio.h>
#include <stdlib.h>

/* Estructura 1 */
typedef struct tiempo{
    int anio, mes, dia, hora, minuto, segundo;
} Tiempo;

typedef struct archivo{
    char *nombre;
    Tiempo ultimaMod;
} Archivo;

/* Estructura 2 */
typedef struct polinomio{
    int n;
    double *coeficiente;
} Polinomio;


/* Funciones */
/* 1 */
void resuelveDesafioUno(void);
int comparaTiempos(Tiempo *t1, Tiempo *t2);
void imprimeTiempo(Tiempo t);
void ordenarAlfa(Archivo *lista, int n);
void ordenaTemporal(Archivo *lista, int n);

/* 2 */
void resuelveDesafioDos(void);
Polinomio * creaPolinomio(int orden);

#endif
