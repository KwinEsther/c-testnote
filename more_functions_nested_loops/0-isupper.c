/**
 * main - This function checks for uppercase characters
 *
 * Return: Always 0
 */

int _isupper(int c)
{
	
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
