## Mis programas en lenguaje C

  Este repositorio contiene varios de mis programas hechos en C,
  los cuales he ido haciendo a medida que avanza el curso en el
  cuatrimestre.

  Este curso está dentro de la materia **taller de programación II**,
  la cual forma parte del plan de estudios en mi carrera.

### [UNR](https://unr.edu.ar/) - [Instituto Politécnico Superior de Rosario](https://www.ips.edu.ar/).

## Temática y contenidos - en construcción -
**Presentación**:
Continuar con el aprendizaje de la programación procedural introducida con anterioridad en la asignatura Taller de Programación I dando un fuerte
conocimientos en programación algorítmica, estructuras de datos complejas y el
desarrollo de programas. Este nuevo curso servirá de guía en las bases, se pretende lograr independencia intelectual, formarlo en programación de alto nivel dotándolo con buenas prácticas y usos de la misma.

**Contenidos mínimos**:
Punteros, gestión de memoria, estructuras, implementación de algoritmos de recorrido, funciones de librerías, estructuramiento de programas complejos, manejo de archivos.


### - Punteros
Dentro de nuestro curso nosotros habíamos visto una introducción en el primer semestre de la carrera, donde nos comentaron cuestiones básicas acerca de punteros. La idea de esta materia es ahondar más, para poder crear programas complejos que aprovechen el potencial de este tipo de especial de variable.

Veamos rapidamente como estructuramos los temas en la materia con lo que respecta a ___punteros___:

**Introduccion**:

	- Memeoria y puntero,
	- Operadores,
	- Punteros y arrays,
	- Aritmética de punteros

**Avanzando**:

	- Punteros a punteros,
	- Arrays bidimencionales,
	- Pasaje por parametros,
	- Punteros genéricos,
	- Gestion de memoria dinamica

### - Estructuras
Una estructura (también llamada registro), es un tipo de dato que agrupa varios datos de tipo simple en un solo objeto.

Se declaran con la palabra clave `struct`

```C
struct nombre {
	char miembroChar;
	double miembroDouble;
	int miembroInt;
};
```
Cada campo está formado por la declaración de una o más variables de otro tipo. Ejemplo:

```C
struct persona{
	char nombre;
	int edad;
};
```
Una vez definida la estructura se pueden declarar variables de ese tipo:

```C 
struct persona juan, maria;
```
La asignación se hace mediante el operador dot "."

`juan.edad = 23`

### - Estructuras y apuntadores
Para acceder a una estructura mediante un apuntador se utiliza la siguiente notación:  

```C
(*estructura).miembro
    /* o bien */
estructura -> miembro
```
Es necesario crear mediante malloc la estructura antes de usarla.
