#include "main.h"

/**
 * _islower - lowercase character
 * @c : the character to be checked
 * Return : 1 for lowercase or 1 for anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
