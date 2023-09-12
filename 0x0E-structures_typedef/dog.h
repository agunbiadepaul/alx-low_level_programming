#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Define the stuct dog
 * @name: Pointer to dog name
 * @age: Dog's age
 * @owner: Pointer to dogs' owner
*/
struct dog
{
char *name;
float age;
char *owner;
};

/* Define a new type dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Function prototypes for function */

int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
