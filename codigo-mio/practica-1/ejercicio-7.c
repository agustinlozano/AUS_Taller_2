#include "punteros.h"
#include <math.h>

#define MAX_DIGITS 10

/* 7) Escribir una funcion que reciba como argumento un entero y retorne una cadena de
    caracteres en su representacion decimal. Idem para: representacion octal,
    hexadecimal y binaria (genere una funcion por cada una de estas opciones).
*/

int * convertDecimalToOctal(int decimal, int *octal);
char * convertDecimalToHexa(int decimal, char *hexa);
int * convertDecimalToBinary(int decimal);

int resuelveDesafioSiete() {
    int decimal = 1073741824;

    int *octalNum = (int *)malloc((MAX_DIGITS) * sizeof(int));
    if(octalNum == NULL) {
        return EXIT_FAILURE;
    }

    char *hexaNum = (char *)malloc(MAX_DIGITS);
    if(hexaNum == NULL) {
        return EXIT_FAILURE;
    }

        //Octal
    printf("\tEnteros positivos en octal\n");
    printf("Cada uno se representara a traves de 40bytes, por ello\n");
    printf("el maximo numero a representar sera de 10 digitos.\n");
    printf("Es decir, 1073.741.823 numeros en decimal.\n");
    convertDecimalToOctal(decimal, octalNum);

    for(int i = 0; i <= 9; i++){
        printf("%d", octalNum[i]);
    }
    printf("\n");
    /* En caso de que el usuario represente un numero fuera
     de rango, entonces el output del programa sera erroneo
     ya que le faltaran digitos a la representacion.
    */

        //Hexa
    printf("\tNumeros en hexadecimal");
    convertDecimalToHexa(decimal, hexaNum);

    free(octalNum);
    free(hexaNum);

    return EXIT_SUCCESS;
}

int * convertDecimalToOctal(int decimal, int *octalNum) {
    int remains[MAX_DIGITS];
    int index = 0;

    while(decimal != 0){
        remains[index] = decimal % 8;
        decimal = floor(decimal / 8);
        index++;
    }

    printf("\nIndice vale: %d", index);
    int numDigits = MAX_DIGITS - (index);
    printf("\nDigitos: %d", numDigits);

    for(int i = 0; i < MAX_DIGITS; i++){
        if(i >= numDigits) {
            index--;
            int digitoOctal = remains[index];
            octalNum[i] = digitoOctal;
        } else {
            octalNum[i] = 0;
        }
    }
    printf("\n");

    return octalNum;
}

char * convertDecimalToHexa(int decimal, char *hexaNum) {

    return hexaNum;
}
