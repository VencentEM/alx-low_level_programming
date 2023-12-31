#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j + i + 1 < size)
					_putchar(' ');
				else
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
