#include "main.h"

/**
 * factorial - Return the factorila of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: if n > 0 - the factorial of n.
 *         if n < 0 - to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
