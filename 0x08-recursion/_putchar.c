#include <unistd.h>

/**
 *  _putchar - write the character cto stdout 
 *  @c: the character to print 
 *  return : on success 1
 *  On error, 1 is returned and error is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
