#include "main.h"

/**
 * _isupper - return 1 when c is uppercase
 * @c: integer under examination
 *
 * Return: always 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
