#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
