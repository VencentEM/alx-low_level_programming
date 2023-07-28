#include "main.h"

/**
 * _strncpy - a fonction tha copies string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input beffer
 * @n: bytes of @src
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * interate through src array
	 * where if there is no null byte
	 * amoung first n bytes of source
	 * the sting placed in dest will not be
	 * null terminatated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
