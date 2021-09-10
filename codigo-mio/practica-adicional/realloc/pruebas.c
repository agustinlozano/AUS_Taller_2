#include <stdio.h>
#include <stdlib.h>

/*  Tomar la entrada por teclado del usuario y a medida que va superando un valor
    determinado, reserva adicionalmente la mitad de lo que tenia hasta ese momento.

        1) Arranca con reserva para dos char.                (2).
        2) Agrega un char mas. (2 / 2)          -> 1.        (3).
        3) Agrega un char mas. (3 / 2)          -> 1.5.      (4).
        4) Agrega dos char.    (4 / 2)          -> 2.        (6).

    char c = fgets(stdin);
    Cuando el usuario termina de escribir (apreta enter "\n"). Redimensiono por ultima vez a tama�o final.
*/

int main(void) {
    char *ptr = (char *)malloc(2 * sizeof(char));
    int count = 0;

    if (ptr == NULL) {
        perror("Error\n");
        return EXIT_FAILURE;
    }

    printf("\nPosicion 0 memoria: %p, posicion 1 memoria: %p\n", ptr+0, ptr+1);

    while(ptr) {
        printf("\nIngrese un caracter: ");
        char c = fgetc(stdin);

        *(ptr + count) = c;
        count++;

        if(count == 2){
            break;
        }
    }

    printf("\nPtr: %s, contador: %d\n", *ptr, count);

    free(ptr);

    return EXIT_SUCCESS;
}
