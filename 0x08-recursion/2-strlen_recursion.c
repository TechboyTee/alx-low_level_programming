#include "main.h"

/**
 * _strien_recursion - Return the length of a string.
 * @s: pointer  to string
 *
 * Return: The lenght of the string.
 */
int _strien_recursion(char s)

{
	int c;

	c = 0;
	if (*s == '\0')
		return (0);

	c = 1 +  _strlen_recursion(s + 1);

	return (c);
}
