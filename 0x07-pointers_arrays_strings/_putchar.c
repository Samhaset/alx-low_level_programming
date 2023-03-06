#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on succeess 1.
 * on error, -1 is returened, and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
