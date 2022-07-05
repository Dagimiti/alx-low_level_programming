#include "main.h"

/**
 * _isalpha - checks character whether its upper or lowercase
 *
 * @a: a character to be checked
 * Return: 1 if a is a letter or 0 otherwise
 */
int _isalpha(int a)
{
	return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}
