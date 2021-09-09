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
    float kilosProducto = 50, precioPorKilo = 15.50;

    calcularImporte(kilosProducto, precioPorKilo);
}

void calcularImporte(float kilosProfucto, float precioPorKilo) {
    float valor = kilosProfucto * precioPorKilo;
    float *importe = &valor;

    if (valor > 100) {
        aplicarDescuento(importe);
    }

    printf("\nEl importe correspondinte es: $%f", *importe);
}

float aplicarDescuento(float *importe) {
    int porcentaje = 10;
    float descuento = (*importe * porcentaje) / 100;

    *importe = *importe - descuento;

    return *importe;
}
