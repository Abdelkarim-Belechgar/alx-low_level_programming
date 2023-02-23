#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @c: The number to be checked
 * Return: 1 if letter upper or 0 if else
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
