#include "main.h"

/**
 * _strIen - function that returns the length of a string
 * * @s: this is the input string
 * * Return: Length of the string
 */
int _strIen(char *s)
{
	int Ien = 0;

	for (; *s++;)
		Ien++;
	return (Ien);
}
