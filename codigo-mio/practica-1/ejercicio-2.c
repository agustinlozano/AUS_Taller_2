#include "punteros.h"
#include <string.h>

void resuelveDesafioDos(void) {
    int i = 5, j[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char x = 'a', text[] = "Texto en C";
    int *pi;
    char *pc;


    //1. Mostrar los mismos valores a traves del puntero pi
    printf("\n\t1. Primer punto");
    printf("\nDireccion de variable i: %p \tvalor contenido: %d\n", 
        &i, i);

    //2. Mostrar la direccion de i y su valor
    pi = &i;

    printf("\n\t2. Segundo punto");
    printf("\nContenido del puntero pi: %p \tvalor contenido en la variable apuntada: %d\n", 
        pi, *pi);

    //3. Recorrer el vector j mostrando para cada elemento, su direccion y su valor
    int longitudJ = 10;

    printf("\n\t3. Tercer punto");
    for (int i = 0; i<longitudJ; i++) {
        printf("\nPara el elemento en la posicion %d", i);
        printf("\nSu valor es: %d y su direccion de memoria: %p\n",
            j[i], &j[i]);
    }
    printf("\n");

    //Recorrer el vector j a traves del puntero pi usando algebra de punteros
    pi = j;

    printf("\n\t4. Cuarto punto");
    for (int i = 0; i<longitudJ; i++) {
        printf("\nPara el elemento apuntado en la posicion de memoria %p", 
            (pi + i));
        printf("\nSu valor es igual a: %d \n", *(pi + i));
    }
    printf("\n");


    //Hacer lo mismo con las variables char, el arreglo y el puntero
    int longitudText = strlen(text);
    pc = &x;

    printf("\n\t5. Quinto punto");
    printf("\nEl puntero pc ahora apunta a la direccion: %p, de la variable x", pc);
    printf("\nLa direccion de la variable x es igual a: %p\n", &x);

    pc = text;

    printf("\nEl puntero pc ahora apunta a la direccion: %p, del arrelgo text", pc);
    printf("\nLa direccion del arreglo de char es igual a: %p\n", text);

    printf("\nAhora recorremos cada letra del arreglo a traves del puntero");

    for (int i = 0; i<longitudText; i++) {
        char letra = *(pc + i);

        if (letra == ' ') {
            printf("\nEsto es un espacio vacio y su posicion de memoria es %p\n", 
                (pc + i));
        } else {
            printf("\nPara el elemento apuntado en la posicion de memoria %p", 
                (pc + i));
            printf("\nSu valor es igual a: %c \n", letra);
        }

    }
    printf("\n");

    //Muestre la direccion donde se almacenan ambos punteros
    printf("\n\t6. Sexto punto");
    printf("\nFinalmente, veamos la posicion de memoria de ambos punteros");
    printf("\nPara el puntero pi su direccion es: %p", pi);
    printf("\nPara el puntero pc su direccion es: %p", pc);

    printf("\nFin del prgrama.\n");
}