#include <stdio.h>
/*
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int *t;
	char *p;

	printf("the size of this pointer is %lu\n", sizeof(t));
	printf("the size of this pointer is %lu\n", sizeof(p));

	return(0);
}
