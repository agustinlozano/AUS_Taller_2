#include <stdio.h>
#include <stdlib.h>

//Escriba funciones que operen sobre cadenas de caracteres

typedef enum { MAYUSCULAS, MINUSCULAS } mayMib;

int strLargo(const char *origen);
int strVacio(const char *origen);
void strCopia(char *destino, const char *origen);
char * reverse(char *string);
void strIzq(char *destino, const char *origen);
void strDer(char *destino, const char *origen);
void strAmbos(char *destino, const char *origen);

int resuelveDesafioSeis(void) {
    char *text1 = "Sera cierto?";

    //1
    int largo = strLargo(text1);
    printf("El largo de la cadena es: %d\n", largo);

    //2
    int strEstado = strVacio(text1);
    if(strEstado == 0){
        printf("El estado de la cadena es: vacio\n");
    } else {
        printf("El estado de la cadena es: no vacio\n");
    }

    //3
    char *textoDestino = (char *)malloc(largo);
    if (textoDestino == NULL) {
        return EXIT_FAILURE;
    }

    strCopia(textoDestino, text1);
    printf("\nCadena destino contiene: %s", textoDestino);

    //4
    char *cadenaInvertida = reverse(text1);
    printf("\nCadena invertida: %s", cadenaInvertida);


    //char *result = (char *)malloc(largo);
    //char *reves;
    /*
    if (result == NULL) {
        return EXIT_FAILURE;
    }
    */

    free(textoDestino);
    return EXIT_SUCCESS;
}

int strLargo(const char *origen) {
    int length, indice = 0;
    char caracter = 'a';

    while(caracter != '\0'){
        caracter = *(origen + indice);
        indice++;
    }

    length = indice - 1;

    return length;
}

int strVacio(const char *origen) {
    int estado;
    int length = strLargo(origen);

    if(length == 0){
        estado = length;
    } else {
        estado = 1;
    }

    return estado;
}

void strCopia(char *destino, const char *origen) {
    int length = strLargo(origen);

    for(int i = 0; i<length; i++){
        *(destino + i) = *(origen + i);
    }
}

char * reverse(char *string) {
    int largo = strLargo(string);
    int b = largo - 1;

    for(int a = 0; a != b; a++){
        char temp = *(string + a);
        *(string + a) = *(string + b);
        *(string + b) = temp;
        b--;
    }

    printf("\nString invertido: %s, largo: %d", string, largo);

    return string;
}
