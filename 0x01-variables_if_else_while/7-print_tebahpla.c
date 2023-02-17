#include <stdio.h>
/**
 * main - A program
 * Return: value 0 (Success)
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
