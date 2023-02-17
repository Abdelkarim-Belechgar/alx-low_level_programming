#include <stdio.h>
/**
 * main - A program
 * Return: value 0 (Success)
 */

int main(void)
{
	char a = 'a';
	int b;

	for (b = 0; b < 10; b++)
		putchar(b + '0');
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
