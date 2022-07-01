#include <stdio.h>

/**
 * main - prints all
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	char b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
