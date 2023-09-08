#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/* Function prototypes */
void *malloc_checked(unsigned int b);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isdigit(char c);
char *multiply(char *num1, char *num2);
void errors(void);
int _strlen (char *s);
int is_digit(char *s);

#endif /* MAIN_H */
