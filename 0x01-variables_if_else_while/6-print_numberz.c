#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i = 1;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
