#include <stdio.h>

/**
 * main - This program will print the alphabet in lowercase
 * but in reverse, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}

