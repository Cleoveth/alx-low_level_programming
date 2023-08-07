#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: source string
 * @needle: substring
 * Return: pointer to the substring or NULL
 */

char *_strstr(char *haystack, char *needle) {
	unsigned int y = 0, z = 0;

	while (haystack[y])
	{
		while (needle[z] && (haystack[y] == needle[0]))
		{
			if (haystack[y + z] == needle[z])
				z++;
			else
				break;
		}
		if (needle[z])
		{
			y++;
			z = 0;
		}
		else
			return (haystack + y);
	}
	return (0);
}
