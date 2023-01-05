#include "main.h"

/**
 * _strien_recursion - Return the length of a string.
 * @s: The string to be measured.
 *
 * Return: The lenght of the string.
 */
int _strien_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strien_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
