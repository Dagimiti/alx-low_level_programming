#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 *
 * @a: starting point
 * Return: returns nothing
 *
 */
void print_to_98(int a)
{
	if (a <= 98)
	{
		for (a = a; a<= 97; a++)
			printf("%d, ", n);
	}
	else
		for (a = a; a > 98; a--)
			printf("%d, ", n);
	printf("98\n");
}
