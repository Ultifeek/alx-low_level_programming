#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, num_letters, rwr;

	if (!filename)
	{
		return (-1);
	}
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	rwr = write(f, text_content, num_letters);
	if (rwr == -1)
	{
		return (-1);
	}
	close(f);
	return (1);
}
