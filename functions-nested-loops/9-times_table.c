#include "main.h"
/**
 * main - This function prints the 9 times table starting
 * from 0
 *
 * Return: Always 0
 */

void times_table(void)
{
	int row = 0;
	int column = 0;
	int result;

	while (row < 10)
	{
		column = 0;

		while (column < 10)
		{
			result = row * column;

			if(result < 10)
			{
				_putchar(result + '0');
			}
			
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}


			if(column < 9)
			{
				_putchar(',');
				_putchar(' ');
			

				if(result < 10)
			
				{
					_putchar(' ');
				}
			}

			column++;
		}
		
		_putchar('\n');
		row++;

	}
}
