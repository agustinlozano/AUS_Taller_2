#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char string[10] = "Agustin";
    int length = strlen(string);
    int a, b = length - 1;

    for(a = 0; a != b; a++){
        char aux = string[a];
        string[a] = string[b];
        string[b] = aux;
        b--;
    }

    printf("\n%s", string);
    return EXIT_SUCCESS;
}
