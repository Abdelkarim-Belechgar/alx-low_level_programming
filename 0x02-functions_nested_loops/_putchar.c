#include <unistd.h>

/**
 * _putchar - main
 * @c : the character to be checked
 * Return: success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
