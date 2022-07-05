#include "main.h"

/**
 * print_sign - checks an intiger whether itsnegative or positive number.
 *
 * @a: an intiger to be checked
 *
 * Return: 1 if a > 0, 0 if a == 0, -1 if a < 0.
 */
int print_sign(int a)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
