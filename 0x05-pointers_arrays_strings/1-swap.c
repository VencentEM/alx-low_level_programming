#include "main.h"

/**
 * swap_int - swap the value of two integres
 * using two input parameter
 *
 * @a: input paramater 1
 * @b: input parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
