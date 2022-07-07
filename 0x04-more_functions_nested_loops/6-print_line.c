#include "main.h"

/**
 * print_line - prints a straight line 
 * @n: how long the line is
 * return: nothing
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
