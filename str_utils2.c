#include "shell.h"

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: input string
 *
 * Return: integer
 */

int  _atoi(char *s)
{
	int sign, result, index;

	result = 0;
	sign = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
		{
			sign++;
		}
		if (s[index] > 47 && s[index] < 58)
		{
			while (s[index] > 47 && s[index] < 58)

				result = result * 10 - (s[index++] - 48);
				break;
		}
	}
	return (result *= sign % 2 == 0 ? -1 : 1);
}



/**
 * *_memset - Fills memory with a constant byte
 *
 * @s: pointer
 *
 * @b: char
 *
 * @n: unsigned int
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n -= 1;
	}
	return (s);
}
