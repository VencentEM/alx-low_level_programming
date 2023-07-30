#include "main.h"
/**  
 * rot13 - that encodes a string using rot13
 * @chars:   
 * Return: s
 */

char rot13(chars)
{
	 char fh[] = {'A', 'B', 'C', 'D', 'E', 'F',
		 'G', 'H', 'I', 'J', 'K', 'L',
		 'M', 'N', 'O', 'P', 'Q', 'R',
		 'S', 'T', 'U', 'V', 'W', 'X',
		 'Y', 'Z', 'a', 'b', 'c', 'd',
		 'e', 'f', 'g', 'h', 'i', 'j',
		 'k', 'l', 'm', 'n', 'o', 'p',
		 'q', 'r', 's', 't', 'u', 'v',
		 'w', 'x', 'y', 'z'};
	 char sh[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		  'T', 'U', 'V', 'W', 'X', 'Y',
		  'Z', 'A', 'B', 'C', 'D', 'E',
		  'F', 'G', 'H', 'I', 'J', 'K',
		  'L', 'M', 'n', 'o', 'p', 'q',
		  'r', 's', 't', 'u', 'v', 'w',
		  'x', 'y', 'z', 'a', 'b', 'c',
		  'd', 'e', 'f', 'g', 'h', 'i',
		  'j', 'k', 'l', 'm'};
	 unsigned int i, j;
	 for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(fh) / sizeof(char); j++)
		{
			if (s[i] == fh[j])
			{
				s[i] = sh[j];
				break;
			}
		}
	}
	return (s);
}
