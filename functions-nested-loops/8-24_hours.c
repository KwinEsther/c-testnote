#include "main.h"
#include <stdio.h>

void jack_bauer(void)
{
	int hour = 0;
	int minute;

	while(hour < 24)
	{
		minute = 0;

		while(minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			

			/* printf("%i:%i\n", hour, minute); */

			minute++;
		}
		hour++;
	}
}
