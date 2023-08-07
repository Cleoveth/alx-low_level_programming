#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to search from
 * @accept: string where search bytes are located
 * Return: a pointer to s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
