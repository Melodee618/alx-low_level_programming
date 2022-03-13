#include <stdio.h>

/**
 * main - Print digits
 *
 * Description: Print all single digits of base 10
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}
