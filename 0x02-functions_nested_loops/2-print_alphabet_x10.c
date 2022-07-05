#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 0;

	while (b < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
