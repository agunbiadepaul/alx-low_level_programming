#ifndef DOG_H
#define DOG_H

#include <stdio.h>
struct dog
{
    char *name;
    float age;
    char *owner;
};

int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
