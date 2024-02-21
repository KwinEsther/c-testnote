#include "main.h"

/*
 * main - this is a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count++;
	}
}
