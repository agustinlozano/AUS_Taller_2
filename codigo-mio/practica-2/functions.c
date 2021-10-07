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
            int hora1, hora2;

            hora1 = t1 -> hora;
            hora2 = t1 -> hora;

            if(hora1 == hora2){
                return 0;
            }else if(hora1 < hora2){
                resultado = 1;
            }else{
                resultado = -1;
            }

        }else if(mes1 < mes2){
            resultado = 1;
        }else{
            resultado = -1;
        }

    }else if(anio1 < anio2){
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

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            char *str1 = lista[j].nombre;
            char *str2 = lista[j+1].nombre;

            if(strcmp(str1, str2) > 0){  //Si (str1 > str2)
                char *tmp = str1;
                lista[j].nombre = str2;
                lista[j+1].nombre = tmp;
            }
        }
    }
}

void ordenaTemporal(Archivo *lista, int n) {

}
