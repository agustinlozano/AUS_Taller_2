#include <stdio.h>
#include <stdlib.h>

/*  Tomar la entrada por teclado del usuario y a medida que va superando un valor 
    determinado, reserva adicionalmente la mitad de lo que tenia hasta ese momento.

        1) Arranca con reserva para dos char.                (2).
        2) Agrega un char mas. (2 / 2)          -> 1.        (3).
        3) Agrega un char mas. (3 / 2)          -> 1.5.      (4).
        4) Agrega dos char.    (4 / 2)          -> 2.        (6).

    char c = fgetc(stdin);
    Cuando el usuario termina de escribir (apreta enter "\n"). Redimensiono por ultima vez a tamaño final.
*/

int main(void) {
    //1. Reservo espacio para dos caracteres en un puntero.
    
    //2. Creo un bucle:  
    /*
        2.1) utilizo un variable tipo char y le asigno la funcion fgetc
        2.2) guardo el caracter en el puntero
        2.3) creo una condicion para salir del bucle luego de almacenar
        dos caracteres
    */
   
   //3. Mostrar el contenido del puntero.
   //4. Liberar el puntero.
}