#include <stdio.h>

/**
 * main - This code will print the alphabet except q and e in lowercase
 * followed by a new line.
 *
 * Return: 0 Always
 */

int main(void)
{
	int i = 97;

	while(i <= 122)
	{
	
		if(i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}

