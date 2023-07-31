#include "main.h"

/**
 * *_memcpy - fills memory with a constant byte
 * @dest: memory area
 * @src: source
 * @n: length to src to be copied
 * Return: the pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int tr;

	for (tr = 0; tr < n; tr++)
	{
		dest[tr] = src[tr];
	}
	return (dest);
}
