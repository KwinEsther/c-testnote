#include <stdio.h>

/*
 * main - This program prints the address of a variable
 *
 * Return: Always 0
 */
int main(void)
{
	int t;
	int r;
	char g;

	printf("The address of variable t is %p\n", &t);

	printf("The address of variable r is %p\n", &r);

	printf("The address of variable g is %p\n", &g);

	return(0);
}
