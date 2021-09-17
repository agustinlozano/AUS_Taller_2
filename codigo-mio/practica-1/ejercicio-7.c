#include "punteros.h"
#include <math.h>
#include <string.h>

#define MAX_DIGITS 10

/* 7) Escribir una funci�n que reciba como argumento un entero y retorne una cadena de
    caracteres en su representaci�n decimal. �dem para: representaci�n octal,
    hexadecimal y binaria (genere una funci�n por cada una de estas opciones).
*/

int * convertDecimalToOctal(int decimal, int *octal);
char * convertDecimalToHexa(int decimal, char *hexa);
int * convertDecimalToBinary(int decimal, int *binary);

int resuelveDesafioSiete() {
    int decimal = 120;

    int *octalNum = (int *)malloc(MAX_DIGITS * sizeof(int));
    if(octalNum == NULL) {
        return EXIT_FAILURE;
    }

    char *hexaNum = (char *)calloc(MAX_DIGITS, sizeof(char));
    if(hexaNum == NULL) {
        return EXIT_FAILURE;
    }

    int *binaryNum = (int *)malloc(MAX_DIGITS * sizeof(int));
    if(binaryNum == NULL) {
        return EXIT_FAILURE;
    }

    //1.    Octal
    printf("\tEnteros positivos en octal\n");
    printf("Cada uno se representara a traves de 40bytes, por ello\n");
    printf("el maximo numero a representar sera de 10 digitos.\n");
    printf("Es decir, 1073.741.823 numeros en decimal.\n");
    convertDecimalToOctal(decimal, octalNum);

    printf("\nEl numero corresponde en octal a: ");
    for(int i = 0; i <= 9; i++){
        printf("%d", octalNum[i]);
    }
    printf("\n");
    /* En caso de que el usuario represente un numero fuera
     de rango, entonces el output del programa sera erroneo
     ya que le faltaran digitos a la representacion.
    */

    //2.    Hexa
    printf("\n\tEnteros positivos en hexadecimal");
    convertDecimalToHexa(decimal, hexaNum);

    printf("\nEl numero corresponde en hexadecimal a: ");
    printf("%s\n", hexaNum);

    //3.    Binary
    printf("\n\tEnteros positivos en binario");
    convertDecimalToBinary(decimal, binaryNum);


    printf("\n\nFin del programa.\n");

    free(octalNum);
    free(hexaNum);
    free(binaryNum);

    return EXIT_SUCCESS;
}

int * convertDecimalToBinary(int decimalNum, int *binaryNum) {
    int dividend, remain, quotient = 0, index = 0, base = 2;

    dividend = decimalNum;

    while(quotient != 1){
        quotient = getQuotient(dividend, base);

        remain = dividend - (quotient * base);
        *(binaryNum + index) = remain;
        index++;

        dividend = quotient;
    }

    remain = quotient;
    *(binaryNum + index) = remain;

    int length = index;
    int a, b = length;

    for(a = 0; a <= b ; a++){
        char aux = binaryNum[a];
        binaryNum[a] = binaryNum[b];
        binaryNum[b] = aux;
        b--;
    }

    printf("\nEl numero corresponde en binario a: ");
    for(int i = 0; i <= index; i++){
        printf("%d", binaryNum[i]);
    }

    return binaryNum;
}

int * convertDecimalToOctal(int decimal, int *octalNum) {
    int remains[MAX_DIGITS], base = 8, index = 0;

    while(decimal != 0){
        remains[index] = decimal % base;
        decimal = getQuotient(decimal, base);
        index++;
    }

    int numDigits = MAX_DIGITS - (index);

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

char * convertDecimalToHexa(int decimalNum, char *hexaNum) {
    int dividend, quotient, decDigit, index = 0, base = 16;

    dividend = decimalNum;

    while(quotient >= base){
        quotient = getQuotient(dividend, base);
        decDigit = dividend - (quotient * base);
        int hexDigit = getHexDigit(decDigit);
        hexaNum[index] = hexDigit;
        index++;

        if(quotient < base){
            decDigit = quotient;
            hexDigit = getHexDigit(decDigit);
            hexaNum[index] = hexDigit;
        } else {
            dividend = quotient;
        }
    }

    //Ordenar el numero mediante el puntero
    int length = index;
    int a, b = length;

    for(a = 0; a <= b ; a++){
        char aux = hexaNum[a];
        hexaNum[a] = hexaNum[b];
        hexaNum[b] = aux;
        b--;
    }

    return hexaNum;
}

int getQuotient(int dividend, int divisor) {
    int quotient = floor(dividend / divisor);

    return quotient;
}

char getHexDigit(int decDigit) {
    char hexDigit;

    switch(decDigit){
        case 0:
            hexDigit = '0';
            break;
        case 1:
            hexDigit = '1';
            break;
        case 2:
            hexDigit = '2';
            break;
        case 3:
            hexDigit = '3';
            break;
        case 4:
            hexDigit = '4';
            break;
        case 5:
            hexDigit = '5';
            break;
        case 6:
            hexDigit = '6';
            break;
        case 7:
            hexDigit = '7';
            break;
        case 8:
            hexDigit = '8';
            break;
        case 9:
            hexDigit = '9';
            break;
        case 10:
            hexDigit = 'A';
            break;
        case 11:
            hexDigit = 'B';
            break;
        case 12:
            hexDigit = 'C';
            break;
        case 13:
            hexDigit = 'D';
            break;
        case 14:
            hexDigit = 'E';
            break;
        case 15:
            hexDigit = 'F';
            break;
        default:
            printf("\nUps! Parece que hubo un error.\n");
    }
    return hexDigit;
}

