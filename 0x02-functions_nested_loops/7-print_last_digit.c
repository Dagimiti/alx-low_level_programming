#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: the number under review
 *
 * Return: the last digit of the number.
 */
int print_last_digit(int a)
{
	int n;

	if (a < 0)
		a = -a;

	n = a % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');

	return (n);
}
