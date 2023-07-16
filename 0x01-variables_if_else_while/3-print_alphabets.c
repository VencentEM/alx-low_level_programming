#include <stdio.h>

/**
 * main - entry point
 *
 * Descption: print all alphabet in lowercase then uppercase
 *
 * Return: 0(success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
