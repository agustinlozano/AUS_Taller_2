#include "listas.h"

/* funcion para recorrer la lista completa */

void toList(struct movie *top){
    struct movie *p = top;
    
    printf("\nLista de peliculas:\n");
    
    while(p){
        printf("%s, genero: %s, anio de lanzamiento: %d\n", p -> name, p -> genre, p -> lunchYear);
        p = p -> next;
    }
}
