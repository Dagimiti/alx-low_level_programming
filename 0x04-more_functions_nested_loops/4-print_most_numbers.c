#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * don't print 2 and 4
 *
 * return: nothing
 */

void print_most_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar('0' + a);
		}
		a++;
	}
	_putchar('\n');
}
