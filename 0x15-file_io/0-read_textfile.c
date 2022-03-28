#include "main.h"
/**
 * read_textfile - read file
 *
 * @filename: filename to read
 * @letters: size in letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fD, sZ;
	char *buf = malloc(letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fD = open(filename, O_RDONLY);

	if (fD == -1)
		return (0);

	sZ = read(fD, buf, letters);

	write(STDOUT_FILENO, buf, sZ);

	free(buf);
	close(fD);

	return (sZ);
}
