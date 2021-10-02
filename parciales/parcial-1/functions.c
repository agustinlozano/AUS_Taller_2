#include "parcial1.h"
#include <string.h>

char * eco(const char *str){
    int length = strlen(str);
    char *ecoString = (char *)malloc(length);

    char finalChar = str[length-1];

    for(int i = 0; i <= length+4; i++){
        ecoString[i] = str[i];
        if(i >= length && i < length+4){
            ecoString[i] = finalChar;

        }else if (i == length+4){
            ecoString[i] = '\0';
        }else {
            ecoString[i] = str[i];
        }
    }

    return ecoString;
}

void elimSFinales(char *str){
    int length = strlen(str);
    char strResutl[length];
    int index = 0;

    for(int i = 0; i <= length; i++){
        char character = str[i];

        if(character == 's' && str[i+1] == ' '){
            continue;
        }else if(character == 's' && i == length-1){
            continue;
        }else if(i == length){
            strResutl[index] = '\0';
        }else{
            strResutl[index++] = character;
        }
    }

    printf("Cadena resultante: %s\n", strResutl);
}

int ** crearMatriz(int col, int rows){
    //Creamos la matriz
    int **m = (int **)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++) {
        m[i] = (int *)malloc(col * sizeof(int));
    }

    //Llenamos la matriz
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            m[i][j] = (i+1) + (j+1);
        }
    }

    //Mostrar matriz resultante
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    return m;
}

char ** crearMatrizChar(int col, int rows, int **matrizInt) {
    //Creamos la matriz
    char **matrizChar = (char **)malloc(rows * sizeof(char *));
    for(int i = 0; i < rows; i++){
        matrizChar[i] = (char *)malloc(col * sizeof(char));
    }

    //LLenamos la matriz utilizando los valores de matrizInt
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            matrizChar[i][j] = 48 + matrizInt[i][j];
        }
    }

    //Mostrar matriz resultante
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            printf("%c\t", matrizChar[i][j]);
        }
        printf("\n");
    }

    return matrizChar;
}
