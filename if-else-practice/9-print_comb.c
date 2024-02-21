#include <stdio.h>
/**
 * main - this program that prints all possible combinations of
 * single-digit numbers separated by (,), followed by a space
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		if(n == 9)
		{
			putchar(n + 48);
		}
		else
		{
			putchar(n + 48);
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
