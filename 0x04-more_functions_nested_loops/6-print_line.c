#include "main.h"

/**
 * print_line - draws a straight line 
 * @n: intiger under investigation
 *
 * Return: nothing
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
