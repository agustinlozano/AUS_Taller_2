#ifndef LISTA
#define LISTA

#include <stdio.h>
#include <stdlib.h>

struct movie{
    char *name;
    char *genre;
    int lunchYear;
    
    struct movie *next;
};

struct movie * store(struct movie *top, struct movie *new);
struct movie * insert(struct movie *top, struct movie *new);
struct movie * search(struct movie *top, char *n);
struct movie * delete(struct movie *top, char *c);
void toList(struct movie *top);

int ejecutarMenu(void);

#endif
