#include "main.h"

/**
 * _strien_recursion - Return the length of a string.
 * @s: The string to be measured.
 *
 * Return: The lenght of the string.
 */
int _strien_recursion(char *s)
{
	int ien = 0;

	if (*s)
	{
		ien++;
		ien += _strien_recursion(s + 1);
	}
	
	return(0);
}
