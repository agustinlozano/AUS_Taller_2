#include "struct.h"
#include <string.h>

int comparaTiempos(Tiempo *t1, Tiempo *t2){
    int anio1, anio2;
    int resultado = 1;

    anio1 = t1 -> anio;
    anio2 = t2 -> anio;

    if(anio1 == anio2){
        int mes1, mes2;

        mes1 = t1 -> mes;
        mes2 = t2 -> mes;

        if(mes1 == mes2){
            int day1, day2;

            day1 = t1 -> dia;
            day2 = t1 -> dia;

            if(day1 == day2){
                return 0;
            }else if(day1 > day2){
                resultado = 1;
            }else{
                resultado = -1;
            }

        }else if(mes1 > mes2){
            resultado = 1;
        }else{
            resultado = -1;
        }

    }else if(anio1 > anio2){
        resultado = 1;
    }else{
        resultado = -1;
    }

    return resultado;
}

void imprimeTiempo(Tiempo t) {
    int anio = t.anio;
    int mes = t.mes;
    int dia = t.dia;
    int hora = t.hora;
    int minuto = t.minuto;
    int segundo = t.segundo;

    printf("\n%d/%d/%d %d:%d:%d", dia, mes, anio, hora, minuto, segundo);
}

void ordenarAlfa(Archivo *lista, int n) {
    char *ordenedList[n];

    for(int i = 0; i < n; i++){
        ordenedList[i] = lista[i].nombre;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            char *str1 = ordenedList[j];
            char *str2 = ordenedList[j+1];

            if(strcmp(str1, str2) > 0){  //Si (str1 > str2)
                char *tmp = str1;
                ordenedList[j] = str2;
                ordenedList[j+1] = tmp;
            }
        }
    }

    printf("\nLista ordenada de nombres");
    for(int i = 0; i < n; i++){
        printf("\n%s", ordenedList[i]);
    }
    printf("\n");
}

void ordenaTemporal(Archivo *lista, int n) {
    Tiempo ordenedDates[n];

    for(int i = 0; i < n; i++){
        ordenedDates[i] = lista[i].ultimaMod;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            Tiempo date1 = ordenedDates[j];
            Tiempo date2 = ordenedDates[j+1];

            if(comparaTiempos(&date1, &date2) > 0){  //Si (date1 > date2)
                Tiempo tmp = date1;
                ordenedDates[j] = date2;
                ordenedDates[j+1] = tmp;
            }
        }
    }

    printf("\nLista ordenada de fechas");
    for(int i = 0; i < n; i++){
        imprimeTiempo(ordenedDates[i]);
    }
    printf("\n");
}
