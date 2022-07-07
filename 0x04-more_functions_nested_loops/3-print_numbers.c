#include "main.h"

/**
 * print_numbers - print the numbers 0 to 9
 *
 * Return: nothing
 */

int print_numbers(void)
{
	int a;

	a = 48;
	while  (a < 58)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
