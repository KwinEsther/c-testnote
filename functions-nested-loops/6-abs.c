#include "main.h"
/**
 * main - This is a function that computes the absolute value of an integer
 *
 * Return: 0 Always
 */
int _abs(int e)
{
	if (e >= 0)
	{
		return (e);
	}
	else if (e < 0)
	{
		return (e * -1);
	}
	else
	{
	return (0);
	}
}
