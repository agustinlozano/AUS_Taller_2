#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp1, *fp2;
    int a;
    long b;

    if ((fp1 = fopen("text.txt", "r")) == NULL || (fp2 = fopen("copia.txt", "w")) == NULL) {
        exit(1);
    }

    printf("Punteros asignados.\n");    

    while (fscanf(fp1, "%d, %ld", &a, &b)) {
        exit(1);
    }

    fprintf(fp2, "%d %ld\n", a, b);

    fclose(fp1);
    fclose(fp2);

    return 0;
}