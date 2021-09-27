#include "parcial1.h"

int main(void) {
    char *string = "Barad Dur";
    //char *pdString = (char *)malloc(10);
    printf("pString: %p\n", string);



    /* 1- Definir una funcion eco: */
    printf("\necoString: %s", eco(string));

    /* 2- */

    //free(pdString);

    return EXIT_SUCCESS;
}
