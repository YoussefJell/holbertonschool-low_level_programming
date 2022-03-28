#include "main.h"
/**
 * create_file - Create a file
 *
 * @filename: filename to read
 * @text_content: content for new file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fD, checkWrite;

	if (filename == NULL)
		return (-1);

	fD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fD == -1)
		return (-1);

	if (text_content != NULL)
		checkWrite = write(fD, text_content, strlen(text_content));
	else
		checkWrite = write(fD, 0, 0);

	if (checkWrite == -1)
		return (-1);

	close(fD);

	return (1);
}
