#include "punteros.h"
#include <time.h>
#include <string.h>

/* 4) Escribir una funcion que tome como argumento un entero positivo entre 1 y 7 y retorne
    un puntero a cadena con el nombre del dia de la semana correspondiente al
    argumento. Probar dicha funcion.
*/

void resuelveDesafioCuatro() {
    char nombre[11];
    time_t tiempo;
    srand((unsigned) time(&tiempo));

    int dia = rand() % 8 + 1;

    char *nombreDia = obtener(dia, nombre);

    printf("\nEs el dia numero %d, o sea es %s", dia, nombreDia);
}

char * obtener(int dia, char nombre[]) {
    char *pNombre;
    pNombre = nombre;

    switch (dia) {
        case 1:
            strcpy(nombre, "lunes");
            break;
        case 2:
            strcpy(nombre, "Martes");
            break;
        case 3:
            strcpy(nombre, "Miercoeles");
            break;
        case 4:
            strcpy(nombre, "Jueves");
            break;
        case 5:
            strcpy(nombre, "Viernes");
            break;
        case 6:
            strcpy(nombre, "Sabado");
            break;
        case 7:
            strcpy(nombre, "Domingo");
            break;
        default:
            printf("\nUps! Parece que hubo un error.\n");
    }

    printf("\nNombre contiene: %s", pNombre);

    return pNombre;
}
