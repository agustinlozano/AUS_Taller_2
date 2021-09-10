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
Dentro de nuestro curso nosotros habíamos visto una introducción en el primer semestre de la carrera, donde nos comentaron cuestiones básicas acerca de punteros. La idea de esta materia es ahondar más, para poder crear programas complejos que aprovechen el potencial de este tipo especial de variable.

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

### - Manejo de memoria dinámica
Como su nombre lo dice, este es una forma de conseguir espacio en memoria, dándote mas eficiencia y técnicamente hacer lo que requieras hacer con este.

#### Memoria dinámica
Es memoria que se reserva en tiempo de ejecución. Su principal ventaja frente a la estática, es que su tamaño puede variar durante la ejecución del programa. (En C, el programador es encargado de liberar esta memoria cuando no la utilice más). El uso de memoria dinámica es necesario cuando no se sabe el numero exacto de datos/elementos a tratar.

#### Memoria estática
Es el espacio en memoria que se crea al declarar variables de cualquier tipo de dato (primitivas [int,char...] o derivados [struct,matrices,punteros...]). La memoria que estas variables ocupan no puede cambiarse durante la ejecución y tampoco puede ser liberada manualmente.

### El lenguaje C y el manejo de la memoria
Todos los objetos tienen un tiempo de vida, es decir, el tiempo durante el cual se garantiza que el objeto exista. En C, existen 3 tipos de duración: estática, automática y asignada. Las variables globales y las variables locales declaradas con el especificador `static` tienen duración estática. Se crean antes de que el programa inicie su ejecución y se destruyen cuando el programa termina. Las variables locales no `static` tienen duración automática. Se crean al entrar al bloque en el que fueron declaradas y se destruyen al salir de ese bloque. Duración asignada se refiere a los objetos cuya memoria se reserva de forma dinámica. Como se explicó anteriormente, esta memoria se crea y se debe liberar de forma explícita. Los arreglos de longitud variable de C99 son un caso especial. Tienen duración automática, con la particularidad de que son creados a partir de su declaración.

La biblioteca estándar de C proporciona las funciones `malloc`, `calloc`, `realloc` y `free` para el manejo de memoria dinámica. Estas funciones están definidas en el archivo de cabecera stdlib.h`.

**malloc**

La función `malloc` reserva un bloque de memoria y devuelve un puntero void al inicio de la misma. Tiene la siguiente definición:

`void *malloc(size_t size);`

donde el parámetro `size` especifica el número de bytes a reservar. En caso de que no se pueda realizar la asignación, devuelve el valor nulo (definido en la macro `NULL`), lo que permite saber si hubo errores en la asignación de memoria.

Ej:
```C
int *puntero;

char *puntcarc;

puntero = (int *)malloc(4);

puntcarc = (char *)malloc(200);
```

A continuación se muestra un ejemplo de uso:
```C
int *i;
…
/* Reservamos la memoria suficiente para almacenar un int y asignamos su dirección a i */

i = malloc(sizeof(int));

/* Verificamos que la asignación se haya realizado correctamente */
if (i  == NULL) {
	/* Error al intentar reservar memoria */
}
```

Uno de los usos más comunes de la memoria dinámica es la creación de vectores cuyo número de elementos se define en tiempo de ejecución:
```C
int *vect1, n;
printf("Numero de elementos del vector: ");
scanf("%d", &n);

/* reservar memoria para almacenar n enteros */
vect1 = malloc(n * sizeof(int));

/* Verificamos que la asignación se haya realizado correctamente */
if (vect1  == NULL) {
	/* Error al intentar reservar memoria */
}
```


**calloc**

La función `calloc` funciona de modo similar a `malloc`, pero además de reservar memoria, inicializa a 0 la memoria reservada. Se usa comúnmente para arreglos y matrices. Está definida de esta forma:

`void *calloc(size_t nmemb, size_t size);`

El parámetro `nmemb` indica el número de elementos a reservar, y `size` el tamaño de cada elemento. El ejemplo anterior se podría reescribir con calloc de esta forma:
```C
int *vect1, n;
printf("Numero de elementos del vector: ");
scanf("%d", &n);

/* Reservar memoria para almacenar n enteros */
vect1 = calloc(n, sizeof(int));

/* Verificamos que la asignación se haya realizado correctamente */
if (vect1  == NULL) {
	/* Error al intentar reservar memoria */
}
```

**realloc**

La función `realloc` redimensiona el espacio asignado de forma dinámica anteriormente a un puntero. Tiene la siguiente definición:

`void *realloc(void *ptr, size_t size);`

Donde `ptr` es el puntero a redimensionar, y `size` el nuevo tamaño, en bytes, que tendrá. Si el puntero que se le pasa tiene el valor nulo, esta función actúa como `malloc`. Si la reasignación no se pudo hacer con éxito, devuelve un puntero nulo, dejando intacto el puntero que se pasa por parámetro. Al usar `realloc`, se debería usar un puntero temporal. De lo contrario, podríamos tener una fuga de memoria, si es que ocurriera un error en `realloc`.

Ejemplo de realloc usando puntero temporal:
```C
/* Reservamos 5 bytes */
void *ptr = malloc(5);
…
/* Redimensionamos el puntero (a 10 bytes) y lo asignamos a un puntero temporal */
void *tmp_ptr = realloc(ptr, 10);

if (tmp_ptr == NULL) {
	/* Error: tomar medidas necesarias */
}
else {
	/* Reasignación exitosa. Asignar memoria a ptr */
	ptr = tmp_ptr;
}
```
Cuando se redimensiona la memoria con `realloc`, si el nuevo tamaño (parámetro `size`) es mayor que el anterior, se conservan todos los valores originales, quedando los bytes restantes sin inicializar. Si el nuevo tamaño es menor, se conservan los valores de los primeros `size` bytes. Los restantes también se dejan intactos, pero no son parte del bloque regresado por la función.


**free o cfree**

La función `free` sirve para liberar memoria que se asignó dinámicamente. Si el puntero es nulo, `free` no hace nada. Además existe la función `cfree`, que sirve para liberar memoria de los elementos que han sido reservados con `calloc()`. Tienen la siguiente definición:

`void free(void *ptr); void cfree(void *ptr);`

El parámetro `ptr` es el puntero a la memoria que se desea liberar:
```C
int *i;
i = malloc(sizeof(int));
…
free(i);
```
Una vez liberada la memoria, si se quiere volver a utilizar el puntero, primero se debe reservar nueva memoria con `malloc` o `calloc`:
```C
int *i = malloc(sizeof(int));
…
free(i);

/* Reutilizamos i, ahora para reservar memoria para dos enteros */
i = malloc(2 * sizeof(int));
…
/* Volvemos a liberar la memoria cuando ya no la necesitamos */
free(i);
```

#### Buenas prácticas
Como se vio en las secciones anteriores, siempre que se reserve memoria de forma dinámica con `malloc`, `realloc` o `calloc`, se debe verificar que no haya habido errores (verificando que el puntero no sea `NULL`). Cuando se trata de verificar el valor de un puntero (y sólo en ese caso), se puede usar de forma indistinta 0 ó NULL. Usar uno u otro es cuestión de estilo. Como ya se vio, las funciones de asignación dinámica de memoria devuelven un puntero `void`. Las reglas de C establecen que un puntero `void` se puede convertir automáticamente a un puntero de cualquier otro tipo, por lo que no es necesario hacer una conversión (cast), como en el siguiente ejemplo:
```C
/* El puntero void devuelto por malloc es convertido explícitamente a puntero int */
int *i = (int *)malloc(sizeof(int));
```
Aunque no hay un consenso, muchos programadores prefieren omitir la conversión anterior porque la consideran menos segura. Si accidentalmente se olvida incluir el archivo `stdlib.h` (donde están definidas `malloc`, `calloc`, `realloc` y `free`) en un programa que use dichas funciones, el comportamiento puede quedar indefinido. Si omitimos la conversión explícita, el compilador lanzará una advertencia. Si, en cambio, realizamos la conversión, el compilador generará el código objeto de forma normal, ocultado el bug.

Una posible razón para usar la conversión explícita es si se escribe código en C que se vaya a compilar junto con código C++, ya que en C++ sí es necesario realizar esa conversión.

En cualquier caso, dado que el manejo de memoria es un tema complejo, y éste es un error muy común, se debe hacer énfasis en que cuando se trabaja con memoria dinámica, siempre se debe verificar que se incluya el archivo `stdlib.h`.

Tratar de utilizar un puntero cuyo bloque de memoria ha sido liberado con `free` puede ser sumamente peligroso. El comportamiento del programa queda indefinido: puede terminar de forma inesperada, sobrescribir otros datos y provocar problemas de seguridad. Liberar un puntero que ya ha sido liberado también es fuente de errores.

Para evitar estos problemas, se recomienda que después de liberar un puntero siempre se establezca su valor a `NULL`.
```C
int *i;
i = malloc(sizeof(int));
…
free(i);
i = NULL;
```

### - Estructuras
Una estructura (también llamada registro), es un tipo de dato que agrupa varios datos de tipo simple en un solo objeto. Las estructuras son __tipos de datos derivados__ - están construidos utilizando objetos de otros tipos.

Veamos rapidamente como estructuramos los temas en la materia con lo que respecta a __estructuras__:

	- Fundamento de estructuras,
	- Estructuras y apuntadores,
	- Funciones de tipo estructura,
	- Funciones con parámetros de estructuras,
	- Estructuras anidadas,
	- Arreglos de estructuras,
	- Uniones,
	- Coordenadas rectangulares y polares,
	- Distancia entre dos puntos,
	- Calculos de distancia

Ahora veremos un poco de código acerca de estructuras en C

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
