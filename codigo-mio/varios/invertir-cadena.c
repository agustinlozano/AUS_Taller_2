#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char cadena[10] = "Agustin";
    int longitud = strlen(cadena);
    int a, b = longitud - 1;

    for(a = 0; a != b; a++){
        char temp = cadena[a];
        cadena[a] = cadena[b];
        cadena[b] = temp;
        b--;
    }

    printf("\n%s", cadena);
    return  0;
}
