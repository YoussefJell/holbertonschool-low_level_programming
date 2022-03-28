#include "main.h"
void cpy(const char *source, const char *dest);
/**
 * main - copies from file to file
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cpy(argv[1], argv[2]);
	return (0);
}
/**
 * cpy - copy from source to dest
 * @source: argv[1]
 * @dest: argv[2]
 */
void cpy(const char *source, const char *dest)
{
	int fDfrom, fDto, sZ;
	char buf[1024];

	fDfrom = open(source, O_RDONLY);
	if (fDfrom == -1 || source == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	fDto = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((sZ = read(fDfrom, buf, 1024)) > 0)
	{
		if (sZ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
			exit(98);
		}
		if (write(fDto, buf, sZ) != sZ || fDto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (close(fDto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fDto);
		exit(100);
	}
	if (close(fDfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fDfrom);
		exit(100);
	}
}
