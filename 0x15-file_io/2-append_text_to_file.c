#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, new_letter, rwr;

	if (!filename)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (new_letter = 0; text_content[new_letter]; new_letter++)
			;
		rwr = write(f, text_content, new_letter);
		if (rwr == -1)
		{
			return (-1);
		}
	}
	close(f);
	return (1);
}
