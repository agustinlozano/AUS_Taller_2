#include "listas.h"

/* Lista desordenada */

/* Funcion de creacion de listas 
    
    top: puntero al comienzo de la lista
    new: puntero al nuevo elemento a insertar
   
   Estos datos deben haber sido reservados a traves de
   memoria dinamica anteriormente.
*/

struct movie * store(struct movie *top, struct movie *new){
    struct movie *last = top;                   /* puntero que recorre la lista hasta el final */
    
    if(top == NULL){ return new; }              /* si no exite lista la crea */

    while(last != NULL){                        /* hasta el ultimo elemento */
        last = last -> next; 
    }
                                                /* ahora next apunta al ultimo elemento */
    last -> next = new;                         /* asigar el nuevo elemento al final */

    return top;
}
