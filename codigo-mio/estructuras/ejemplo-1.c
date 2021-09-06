//Empleado y estudiante

#include <stdio.h>
#include <stdlib.h>

struct fecha {
    int dia, mes, anio;
};

struct direccionStruct {
    char calle[30], ciudad[30],
        estado[15], pais[20];
    int cp;
};

struct nombreStruct {
    char nombre[20], apellidos[20];
};

struct nomdir {
    struct nombreStruct nombre;
    struct direccionStruct direccion;
};

struct posicion {
    char depto[5];
    char trabajo[20];
};

struct empleado {
    struct nomdir nombreDireccion;
    struct posicion trabajo;
    float salario;
    int numDepto;
    struct fecha fechaIngreso;
};

struct estudiante {
    struct nomdir nombreDireccion;
    char carrera[20];
    float promedio;
    int creditos;
};

int main()
{
    struct nomdir per1 = {
        {"Agustin", "L.B."},
        {"Brown", "Rosario", "Santa Fe", "Argentina", 2000}
    };

    struct nomdir per2 = {
        {"Carlos Alberto", "L."},
        {"San Lorenzo", "Pergamino", "Buenos Aires", "Argentina", 2700}
    };


    struct estudiante est = {
        {},
        "Sistemas", 8.5, 210
    };

    struct empleado emp = {
        {},
        {"dep1", "gestion consolas"},
        30000, 2,
        {5, 5, 2003}
    };

    est.nombreDireccion = per1;
    emp.nombreDireccion = per2;

    printf("\n\tDatos de personas cargadas en el programa\n");
    printf("- Primer persona\n");
    printf("Nombre: %s\n", per1.nombre.nombre);
    printf("Apellidos: %s\n", per1.nombre.apellidos);

    printf("\n- Segunda persona\n");
    printf("Nombre: %s\n", per2.nombre.nombre);
    printf("Apellidos: %s\n", per2.nombre.apellidos);

    printf("\n\tDatos de la persona empleada\n");
    printf("Nombre: %s\n", emp.nombreDireccion.nombre.nombre);
    printf("Apellidos: %s\n", emp.nombreDireccion.nombre.apellidos);
    printf("Fecha ingreso: %d/%d/%d\n", emp.fechaIngreso.dia, emp.fechaIngreso.mes,
           emp.fechaIngreso.anio);
    printf("Salario: %1.f\n", emp.salario);

    printf("\n\tDatos de la persona cursando estudios\n");
    printf("Nombre: %s\n", est.nombreDireccion.nombre.nombre);
    printf("Apellidos: %s\n", est.nombreDireccion.nombre.apellidos);
    printf("Area de estudio: %s\n", est.carrera);
    printf("Promedio: %f\n", est.promedio);
    printf("cantidad de creditos acumulados: %s\n", est.creditos);

    return EXIT_SUCCESS;
}
