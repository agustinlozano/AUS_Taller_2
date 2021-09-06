//Lectura de cadena de caracteres

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * ingreso(void);

int main(void) {
    char *frase = ingreso();

    if (frase == NULL) {
        return EXIT_FAILURE;
    }

    printf("Frase ingresada: %s\n", frase);

    printf("Frase modificada: %s - largo %d\n", frase, (int)strlen(frase));

    free(frase);

    return EXIT_SUCCESS;
}

char * ingreso(void) {
    char frase[256];
    int longitudFrase;

    printf("Ingrese una frase: ");
    scanf(" %[^,'\n']", frase);      /* <-- Preguntar */

    longitudFrase = strlen(frase);

    char *frase1 = (char *) malloc(longitudFrase);

    strncpy(frase1, frase, (int)longitudFrase);

    return frase1;
}
