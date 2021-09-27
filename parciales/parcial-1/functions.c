#include "parcial1.h"
#include <string.h>

char * eco(const char *str) {
    int length = strlen(str);
    char *ecoString = (char *)malloc(length);

    char finalChar = str[length-1];

    for(int i = 0; i <= length+4; i++){
        ecoString[i] = str[i];
        if(i >= length && i < length+4){
            ecoString[i] = finalChar;

        } else if (i == length+4){
            ecoString[i] = '\0';
        } else {
            ecoString[i] = str[i];
        }
    }

    return ecoString;
}

void elimSFinales(char *str) {
    int length = strlen(str);
    char strResutl[length];
    int index = 0;

    for(int i = 0; i <= length; i++){
        char character = str[i];

        if(character == 's' && str[i+1] == ' '){
            continue;
        }else if(character == 's' && i == length-1){
            continue;
        }else if(i == length) {
            strResutl[index] = '\0';
        }else{
            strResutl[index++] = character;
        }
    }

    printf("Cadena resultante: %s\n", strResutl);
}
