#include "main.h"

/**
 * _strstr - find the first occurrence of the substring
 * @haystack: full string
 * @needle: substring
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *thaystack;
	char *kneedle;

	while (*haystack != '\0')
	{
		thaystack = haystack;
		kneedle = needle;

		while (*haystack != '\0' && *kneedle != '\0' && *haystack == *kneedle)
		{
			haystack++;
			kneedle++;
		}
		if (!*kneedle)
			return (thaystack);
		haystack = thaystack + 1;
	}
	return (0);
}
