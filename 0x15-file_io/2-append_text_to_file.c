#include "main.h"
/**
 * append_text_to_file - append to file
 *
 * @filename: filename to open
 * @text_content: content to append
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fD, checkWrite;

	if (filename == NULL)
		return (-1);

	fD = open(filename, O_APPEND | O_WRONLY);

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
