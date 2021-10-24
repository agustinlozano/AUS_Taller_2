#include "listas.h"

int ejecutarMenu(void){
    int respuesta = 0;
    printf("\n1. Insertar nodo de lista desordenada");
    printf("\n2. Insertar nodo de lista ordenada");
    printf("\n3. Recorrer una lista completa");
    printf("\n4. Buscar elemento de una lista");
    printf("\n5. Borrar elemento de una lista");
    printf("\n6. Salir");
    printf("\nSu respuesta: ");
    scanf(" %d", &respuesta);

    return respuesta;
}
