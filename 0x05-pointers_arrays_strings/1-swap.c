#include "main.h"
/**
 * swap_int - swap numbers
 * @a: a number
 * @b: another number
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
