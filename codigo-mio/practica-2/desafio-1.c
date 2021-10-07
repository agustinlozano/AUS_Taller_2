#include "struct.h"

void resuelveDesafioUno(void) {
    Tiempo t1, t2, t3;
    Archivo a1, a2, a3;

    //Rellenar los tiempos
    t1.anio = 2021;
    t1.mes = 3;
    t1.dia = 11;
    t1.hora = 12;
    t1.minuto = 30;
    t1.segundo = 30;

    t2.anio = 2021;
    t2.mes = 2;
    t2.dia = 25;
    t2.hora = 13;
    t2.minuto = 10;
    t2.segundo = 30;

    t3.anio = 2021;
    t3.mes = 8;
    t3.dia = 26;
    t3.hora = 4;
    t3.minuto = 30;
    t3.segundo = 30;

    //Rellenar los archivos
    a1.nombre = "Agustin.log";
    a1.ultimaMod = t1;

    a2.nombre = "Celeste.txt";
    a2.ultimaMod = t2;

    a3.nombre = "Vicente.gif";
    a3.ultimaMod = t3;

    //Crear lista de archivos
    int lengthL = 3;
    Archivo lista[3] = {a3, a2, a1};

    //llamada a la funcion ordena alfa
    ordenarAlfa(lista, lengthL);

    //Llamada a funcion comparar tiempo
    //comparaTiempos(&t1, &t2);

    //Llama a la funcion imprimir tiempo
    //imprimeTiempo(t2);

    //printf("\nEstado: %d", estadoComparacion);
}

