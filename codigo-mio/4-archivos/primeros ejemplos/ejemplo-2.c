#include <stdio.h>
#include <stdlib.h>

#define BUFFERSIZE 100

int main(void) {
    FILE *fp1, *fp2;
    char area[BUFFERSIZE];
    
    if ((fp1 = fopen("text.txt", "r")) == NULL || (fp2 = fopen("copia.txt", "w")) == NULL) {
        exit(1);
    }

    printf("Punteros asignados.\n");

    while (fgets(area, BUFFERSIZE, fp1) != NULL) {
        fputs(area, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}