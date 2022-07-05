#include "main.h"

/**
 * print_alphabet -prints the alphabet in lower case
 *
 */
void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('n');
}
