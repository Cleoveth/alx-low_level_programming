#include "main.h"


/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@n: pointer to string.
 *
 *Return: pointer to uppercase string.
 */

char *string_toupper(char *n)
{
	int length;

	length = 0;

	while (n[length] != '\0')
	{
		if (n[length] >= 97 && n[length] <= 122)
		{
			n[length] = n[length] - 32;
		}
		length++;
	}
	return (n);
}
