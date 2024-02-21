#include <stdio.h>
/*
 * main - The “Fizz-Buzz test” is an interview question
 * designed to help filter out the 99.5% of programming job 
 * candidates who can’t seem to program their way out of a wet paper bag.
 * write a program that prints the numbers from 1 to 100
 * followed by a new line. But for multiples of three 
 * print Fizz instead of the number and for the multiples
 * of five print Buzz. For numbers which are 
 * multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)

			printf("FIZZBUZZ " );

		else if (n % 3 == 0)
		
			printf("FIZZ ");
		
		else if (n % 5 == 0)
		
			printf("BUZZ ");
		
		else
			printf("%i ", n);
		n++;
	}
		printf("\n");

	return (0);
}
