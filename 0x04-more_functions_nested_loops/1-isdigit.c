#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9) and returns 1 if c is a digit
 * @c: character under investigation
 *
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
