#include "main.h"

/**
 * cap_string - capitalizes all words of a string, Separators of words
 * @s: input string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int count = 0, i;
	int sepr[] = {32, 9, 10, 44, 59, 46, 33, 34, 40, 41, 63, 123, 125};

	if (*(s + count) > 96 && *(s + count) < 123)
	{
		*(s + count) = *(s + count) - 32;
	}
	count++;
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == sepr[i])
			{
				if ((*(s + (count + 1)) > 96) && (*(s + (count + 1)) < 123))
				{
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				}
				break;
			}
		}
		count++;
	}
	return (s);
}
