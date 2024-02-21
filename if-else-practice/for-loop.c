#include <stdio.h>
/**
 * main - prints the alphabet in lowercase using the for loop
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;
	for(letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
		putchar('\n');
	}

	return (0);
}
