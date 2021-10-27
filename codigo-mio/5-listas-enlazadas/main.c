#include "listas.h"

/* lista simplemente enlazada */

int main(void){
    struct movie *top = NULL;
    struct movie *m1 = (struct movie *)malloc(sizeof(struct movie));
    struct movie *m2 = (struct movie *)malloc(sizeof(struct movie));

    /* relleno los datos de mis peliculas */
    m1 -> name = "The lord of the rings: Return of the king";
    m1 -> genre = "Epic fantasy";
    m1 -> lunchYear = 2003;

    m2 -> name = "Star Wars: The revenge of the Sith";
    m2 -> genre = "Epic space-opera";
    m2 -> lunchYear = 2005;

    /* llamada al menu */
    printf("\tListas simplemente enlazadas");

    int respuesta = 1;
    while(respuesta != 0){
        respuesta = ejecutarMenu();

        switch(respuesta){
            case 1:
                top = store(top, m1);
                break;
            case 2:
                top = insert(top, m2);
                break;
            case 3:
                toList(top);
                break;
            case 4:
                //search()
                break;
            case 5:
                //delete();
                break;
            case 6:
                respuesta = 0;
                break;
            default: 
                printf("\nUps! Parece que algo salio mal!\n");
        }
    }

    // printf("\nLista de peliculas!");
    // printf("\nNombre: %s, genero: %s, anio de lanzamiento: %d\n", lista -> name, lista -> genre, lista -> lunchYear);
    // printf("\nNombre: %s, genero: %s, anio de lanzamiento: %d\n", lista -> name, lista -> genre, lista -> lunchYear);
    
    return EXIT_SUCCESS;
}
