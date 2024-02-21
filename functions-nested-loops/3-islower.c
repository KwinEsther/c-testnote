#include "main.h"
/** 
 * _islower - This is a function that checks for lowercase character
 *
 * Return: 1 if its lowercase, otherwise Return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
