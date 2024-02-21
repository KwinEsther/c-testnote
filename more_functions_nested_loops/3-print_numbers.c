#include "main.h"
/**
 *  main - This function prints the numbers from 0 to 9
 *  followed by a new linw
 *
 *  Return: Always 0
 */
void print_numbers(void)
{
	int number = '0';
	
	while (number <= '9')
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
