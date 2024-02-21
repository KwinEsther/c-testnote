#include <stdio.h>
/**
 * main - printing the alphabet in lowecase using the do-while loop
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet = 'a';

		do
		{
			printf("%c\n", alphabet);
			alphabet++;
		}
		while(alphabet <= 'z');
	return (0);
}

