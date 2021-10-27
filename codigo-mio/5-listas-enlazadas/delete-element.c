#include "listas.h"
#include <string.h>

struct movie * delete(struct movie *top, char *c){
    struct movie *p = top, *prev = NULL;
    struct movie *aux;

    while (p){
        if(!strcmp(c, p -> name)){          //Si lo encontre
            if(prev == NULL){                   //Y es el primero
                aux = p -> next;
                free(p);
                return aux;
            }else{                              //el elemento a eliminar va
                prev -> next = p -> next;       //en el medio o al final
                free(p);
                return top;
            }
        }

        prev = p;                           //continuo buscando
        p = p -> next;                      //continuo buscando
    }

    return top;                             //No encontrado o lista vacia
}