#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct: Define the stuct dog
*/
struct dog
{
char *name;
float age;
char *owner;
};

/* Function prototypes for function */

int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
