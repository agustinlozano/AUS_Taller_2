#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    //Crear cadena con malloc
    char *cadena = (char *)malloc(15 * sizeof(char));

    //Relleno la cadena y muestro
    strcpy(cadena, "Hello, world");
    printf("\nCadena org: \"%s\"\n", cadena);

    //Realocar - menos tamanio
    size_t largo = strlen(cadena);
    cadena = (char *)realloc(cadena, largo);

    printf("\nCadena realocada en tamanio: \"%s\", y su nuevo largo %d\n", cadena, largo);

    //Realocar - mas tamanio
    cadena = (char *)realloc(cadena, 16);
    strcat(cadena, "! :)");
    printf("\nCadena realocada y modificada: \"%s\"\n", cadena);

    printf("\nFin\n");
    free(cadena);

    return 0;
}
