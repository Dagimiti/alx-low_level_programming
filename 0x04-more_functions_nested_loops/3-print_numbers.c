#include "main.h"

/**
 * print_numbers - print the numbers 0 to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int a;

	for (a >= 48 && a < 58)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
