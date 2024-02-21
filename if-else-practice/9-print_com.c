#include <stdio.h>

int main(void)
{
	int n = 48;

	while(n < 59)
	{
		putchar(n);
		if(n != 58)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return(0);
}
