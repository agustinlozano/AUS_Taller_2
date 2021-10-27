#include "listas.h"
#include <string.h>

/* Busqueda de elementos */
/* funcion de recuperacion de elementos de listas simplemente enlazadas 

    n: nombre del elemento de la lista buscado
*/

struct movie * search(struct movie *top, char *n){
    struct movie *p = top;

    while(p){
        if(!strcmp(n, p -> name)) {
            return p;
        }else{
            p = p -> next;
        }
    }

    return p;
}
