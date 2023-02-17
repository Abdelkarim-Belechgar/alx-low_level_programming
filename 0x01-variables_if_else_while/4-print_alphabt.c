#include <stdio.h>
/**
 * main - A program
 * Return: value 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
