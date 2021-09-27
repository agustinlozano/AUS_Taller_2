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

