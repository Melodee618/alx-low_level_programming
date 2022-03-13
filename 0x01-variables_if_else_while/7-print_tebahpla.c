#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar(10);
	return (0);
}
