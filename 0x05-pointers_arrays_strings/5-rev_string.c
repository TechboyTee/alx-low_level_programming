#include "main.h"

/**
 * rev_string - reverse the string.
 * @s: pointer to string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, k, temp;

	i = o;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - i;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
