#include <stdio.h>
/**
 * main - This program prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	int i = 97;
	int o = 65;

	while (i <= 122)
	{	
	putchar(i);
	i++;
	}

	while (o <= 90)
	{
	putchar(o);
	o++;
	}
	putchar('\n');

	return (0);
}
