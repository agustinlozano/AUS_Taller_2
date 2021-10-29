#include <stdio.h>

int main(void) {
    FILE *pFile;
    
    pFile = fopen("naturales.txt", "wt");

    // /* Recorrer el archivo */
    // for (int i = 0; i < 50; i++) {
    //     printf("numero: %d\n", /*?*/);
    // }

    /* valida que el archivo este creado correctamente*/
    if (pFile != NULL) {
        for (int i = 1; i <= 50; i++) {
            /* se escriben los numeros */
            fprintf(pFile, "%d", i);
        }
        
        /* Se cierra el archivo */
        if (!fclose(pFile)) {
            printf("El archivo ha sido cerrado\n");
        } else {
            printf("Error al cerrar el archivo\n");
        }
    } else {
        printf("Error al crear el archivo\n");
    }

    return 0;
}