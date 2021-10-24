#include "listas.h"

/* 1- Lista ordenada */
/* Funcion insertar: para crear listas ordenadas de elementos struct Movie 
    
    top: puntero al comienzo de la lista
    new: puntero al nuevo elemento a insertar

   Estos datos deben haber sido reservados a traves de
   memoria dinamica anteriormente.
*/

struct movie * insert(struct movie *top, struct movie *new){
    struct movie *current = top;                            /* puntero para moverse por la lista */
    struct movie *prev = NULL;                              /* puntero al elemento anterior al current */

    /* busqueda del punto de insercion */
    while((current != NULL) && (current -> lunchYear <=  new -> lunchYear)){
        prev = current;
        current = current -> next;
    }

    /* Insercion */
    if(prev != NULL){                                       /* insercion en el medio o el final */
        prev -> next = new;
    }else{                                                  /* insercion al comienzo */
        top = new;
    }

    new -> next = current;
    
    return top;
}
