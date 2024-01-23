#include <stdio.h>
/**
 * main - this program prints the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
