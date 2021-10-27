#include "listas.h"

/* lista simplemente enlazada */

int main(void){
    struct movie *top = NULL;
    struct movie *m1 = (struct movie *)malloc(sizeof(struct movie));
    struct movie *m2 = (struct movie *)malloc(sizeof(struct movie));
    
    char *movieName1 = "The lord of the rings: Return of the king";
    char *movieName2 = "Star Wars: The revenge of the Sith";
    struct movie *nodoBuscado;

    /* relleno los datos de mis peliculas */
    m1 -> name = movieName1;
    m1 -> genre = "Epic fantasy";
    m1 -> lunchYear = 2003;

    m2 -> name = movieName2;
    m2 -> genre = "Epic space-opera";
    m2 -> lunchYear = 2005;

    /* llamada al menu */
    printf("\tListas simplemente enlazadas");

    int respuesta = 1;
    while(respuesta != 0){
        respuesta = ejecutarMenu();

        switch(respuesta){
            case 1:
                top = store(top, m2);
                break;
            case 2:
                top = insert(top, m1);
                break;
            case 3:
                toList(top);
                break;
            case 4:
                nodoBuscado = search(top, movieName1);
                printf("\nElemento encontrado: %s\n", nodoBuscado -> name);
                break;
            case 5:
                top = delete(top, movieName1);
                top = delete(top, movieName2);
                break;
            case 6:
                respuesta = 0;
                break;
            default: 
                printf("\nUps! Parece que algo salio mal!\n");
        }
    }

    return EXIT_SUCCESS;
}
