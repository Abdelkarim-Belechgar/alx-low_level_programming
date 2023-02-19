#include <stdio.h>
/**
 * main - A program
 * Return: value 0 (Success)
 */

int main(void)
{
	int a, fd, ld;
	int a2, fd2, ld2;

	while (a <= 98)
	{
		fd = (a / 10 + '0');
		ld = (a % 10 + '0');
		a2 = 0;
		while (a2 <= 99)
		{
			fd2 = (a2 / 10 + '0');
			ld2 = (a2 % 10 + '0');
			if (a < a2)
			{
				putchar(fd);
				putchar(ld);
				putchar(' ');
				putchar(fd2);
				putchar(ld2);

				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a2++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
