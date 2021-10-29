#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp1, *fp2;
    int a;
    
    if ((fp1 = fopen("text.txt", "r")) == NULL || (fp2 = fopen("copia.txt", "w")) == NULL) {
        exit(1);
    }

    printf("Punteros asignados.\n");

    while ((a = fgetc(fp1)) != EOF) {
        fputc(a, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
