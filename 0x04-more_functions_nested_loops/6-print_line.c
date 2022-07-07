#include "main.h"

/**
 * print_line - This function prints a straight line based on the value passed 
 * @n: How long the line is
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
