#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: filename
 * @letters: number of characters printed
 *
 * Return: numbers of characters printed, else 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(f, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(f);

	free(buf);

	return (nwr);
}
