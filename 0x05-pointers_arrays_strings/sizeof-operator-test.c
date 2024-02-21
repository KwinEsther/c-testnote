#include <stdio.h>
/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	

	printf("size of type char on my system is %lu bytes\n", sizeof(char));

	printf("size of type int on my system is %lu bytes\n", sizeof(int));

	printf("size of type float on my system is %lu bytes\n", sizeof(float));

	printf("size of type of the variable n on my system is %lu bytes\n", sizeof(n));


	return(0);
}
