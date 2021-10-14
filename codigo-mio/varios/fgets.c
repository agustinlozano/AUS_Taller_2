#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *cadena = (char *)malloc(15 * sizeof(char));
    if(cadena == NULL){
        return -1;
    }

    printf("\nIngrese una frase: ");
    fgets(cadena, 15, stdin);

    printf("\n%s", cadena);

    free(cadena);

    return 0;
}
