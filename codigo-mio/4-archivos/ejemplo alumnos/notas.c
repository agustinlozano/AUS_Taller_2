#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *f;
    char nombre[10], apellido[10];
    float nota1, nota2;

    /* Abrir el archivo */
    f = fopen("notas.txt", "r");
    
    if (f == NULL) {
        printf("No se pudo leer el archivo de notas\n");
        exit(1);
    }

    /* Leer mientras haya datos */
    int n;
    do {
        n = fscanf(f, "%s %s %f %f\n", nombre, apellido, &nota1, &nota2);
    } while (n != 0);

    fclose(f);
    return 0;
}