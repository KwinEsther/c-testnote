#include <stdio.h>

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
