#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
