#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to reverses
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, aux = 0;
	char temp;

	while (*(s + i) != '\n')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;
		aux++;
		i--;
	}
}
