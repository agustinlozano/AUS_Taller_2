#include "punteros.h"

/* 5) Escribir una funcion void que tome como argumentos: la cantidad de kilos de
    determinado producto adquirido por un cliente y el precio por kilo del mismo (ambos
    numeros flotantes); la misma debe calcular el importe de la compra. El descuento
    efectuado a compras superiores a 100$ es del 10%, con lo cual la funcion debera
    tambien calcular el nuevo monto, si es que corresponde el descuento. Usar
    argumentos pasados como punteros, donde corresponda.
*/

//FAlta: que el usuario ingrese los datos por teclado.

void resuelveDesafioCinco() {
    float *pKilosProducto, *pPrecioKilo;
    float kilos = 0, precioKilo = 0;
    pKilosProducto = &kilos;
    pPrecioKilo = &precioKilo;

    printf("\tGestion de compra\n");
    obtenerDatos(pKilosProducto, pPrecioKilo);

    printf("\nEl producto ingresado tiene un peso de %.1fkg,", kilos);
    printf("\ny ademas posee un precio por kilo de $%.2f\n", precioKilo);
    calcularImporte(kilos, precioKilo);
}

void obtenerDatos(float *pKilos, float *pPrecio) {
    float kilos, precioKilo;

    printf("\nIngresar los kilos del producto: ");
    printf("\nSu respuesta: ");
    scanf(" %f", &kilos);

    printf("\nIngresar precio por kilo del producto: ");
    printf("\nSu respuesta: ");
    scanf(" %f", &precioKilo);

    *pKilos = kilos;
    *pPrecio = precioKilo;
}

void calcularImporte(float kilos, float precioKilo) {
    float valor = kilos * precioKilo;
    float *importe = &valor;

    if (valor > 100) {
        aplicarDescuento(importe);
        printf("\nFinalmente, el importe final corresponde a: $%.2f\n", *importe);
    } else {

        printf("Finalmente, el importe final corresponde a: $%.2f\n", *importe);

    }
}

float aplicarDescuento(float *importe) {
    int porcentaje = 10;
    float descuento = (*importe * porcentaje) / 100;

    *importe = *importe - descuento;

    printf("Se aplica un descuento del 10 porciento.\n");

    return *importe;
}
