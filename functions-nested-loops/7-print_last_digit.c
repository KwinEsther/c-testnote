#include "main.h"

int print_last_digit(int e)
{
	if (e < 0)
		e = e * -1;

	if (e < 10)
	{
		_putchar('0' + e);
		return (e);
	}
	else
	{
		_putchar('0' + e % 10);
		return (e % 10);
	}
}
