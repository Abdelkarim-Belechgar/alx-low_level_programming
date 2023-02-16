#include <stdio.h>
#include <unistd.h>
/**
	* main - A program that print a new line to the standard error.
	* Return: value 1 (Success)
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
