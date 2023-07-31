#include "main.h"

/**
 * _strpbrk - getthe length of a prefix sub
 * @s: string
 * @accept: bytes
 * Return: unisigned int
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
