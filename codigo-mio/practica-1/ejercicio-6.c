#include "punteros.h"

//Escriba las siguientes funciones que operen sobre cadenas de caracteres

int strLargo(const char *origen);
int strVacio(const char *origen);
void strCopia(char *destino, const char *origen);
void strIzq(char *destino, const char *origen);
void strDer(char *destino, const char *origen);
void strAmbos(char *destino, const char *origen);
char * reverse(char *string);

int resuelveDesafioSeis(void) {
    char *text = " Sera cierto? ";
    printf("Cadena original contiene: \"%s\"\n", text);

    //1
    int length = strLargo(text);
    printf("\nEl largo de la cadena es: %d\n", length);

    //2
    printf("\nEl estado de la cadena es: %s\n", (strVacio(text)? "no vacia" : "vacia"));

    //3
    char *textoDestino = (char *)malloc(length);
    if (textoDestino == NULL) {
        return EXIT_FAILURE;
    }

    strCopia(textoDestino, text);
    printf("\nCadena copia contiene: \"%s\"\n", textoDestino);

    //4
    //char *cadenaInvertida = reverse(text);
    //printf("\nCadena invertida: %s", cadenaInvertida);

    //5
    char *textoDestino2 = (char *)malloc(length);
    strIzq(textoDestino2, text);
    printf("\nFrase sin espacios a la izquierda: \"%s\"\n", textoDestino2);

    //6
    char *textoDestino3 = (char *)malloc(length);
    strDer(textoDestino3, text);
    printf("\nFrase sin espacios a la derecha: \"%s\"\n", textoDestino3);

    //7
    char *textoDestino4 = (char *)malloc(length);
    strAmbos(textoDestino4, text);
    printf("\nFrase sin espacios en los extremos: \"%s\"\n", textoDestino4);

    free(textoDestino);
    free(textoDestino2);
    free(textoDestino3);
    free(textoDestino4);

    return EXIT_SUCCESS;
}

int strLargo(const char *origen) {
    int length, index = 0;
    char character = 'a';

    while(character != '\0'){
        character = *(origen + index);
        index++;
    }

    length = index - 1;

    return length;
}

int strVacio(const char *origen) {
    int state;
    int length = strLargo(origen);

    if(length == 0){
        state = length;
    } else {
        state = 1;
    }

    return state;
}

void strCopia(char *destino, const char *origen) {
    int length = strLargo(origen);

    for(int i = 0; i<length; i++){
        *(destino + i) = *(origen + i);
    }
}

char * reverse(char *string) {
    int length = strLargo(string);
    int b = length - 1;

    for(int a = 0; a != b; a++){
        char aux = *(string + a);
        *(string + a) = *(string + b);
        *(string + b) = aux;
        b--;
    }

    printf("\nString invertido: %s, largo: %d", string, length);

    return string;
}

void strIzq(char *destino, const char *origen) {
    int firstPosition = 0;
    char character = *(origen + firstPosition) ;

    if(character == ' '){
        int length = strLargo(origen);
        for(int i = 0; i<length; i++){
            *(destino + i) = *(origen + i+1);
        }
    } else {
        printf("\nLa frase en cuestion no tiene un espacio al comienzo.\n");
    }
}

void strDer(char *destino, const char *origen) {
    int length = strLargo(origen) - 1;
    char character;

    while(character == ' '){
        character = *(origen + length);
        length--;
    }

    for(int i = 0; i < length; i++){
        *(destino + i) = *(origen + i);
    }
}

void strAmbos(char *destino, const char *origen) {
    strDer(destino, origen);
    strIzq(destino, destino);
}
