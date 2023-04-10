#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of file
 * @letters: number of printed letters
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int l;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
	{
		return (0);
	}
	l = open(filename, O_RDONLY);

	if (l == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}
	nrd = read(l, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(l);
	free(buf);
	return (nwr);
}
