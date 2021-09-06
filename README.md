## Mis programas en lenguaje C

  Este repositorio contiene varios de mis programas hechos en C,
  los cuales he ido haciendo a medida que avanza el curso en el
  cuatrimestre.

  Este curso está dentro de la materia **taller de programación II**,
  la cual forma parte del plan de estudios en mi carrera.

### [UNR](https://unr.edu.ar/) - [Instituto Politécnico Superior de Rosario](https://www.ips.edu.ar/).

## Temas abordados - en construcción -
Luego de habernos introducido al lenguaje mediante la programación imperativa procedural, en el semestre anterior, 
comenzamos ahora en este nuevo curso a indagar en cuestiones mas profundas y complejas del lenguaje C. 

Tales temas son, **gestión de memoria**, **punteros**, **estructuras**,… (continuar)


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
