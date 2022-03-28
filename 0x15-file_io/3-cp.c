#include "main.h"
/**
 * main - copies from file to file
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fDfrom, fDto, sZ, closeCheck = 0;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fDto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	fDfrom = open(argv[1], O_RDONLY);
	if (fDfrom == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((sZ = read(fDfrom, buff, sizeof(buff) - 1)) > 0)
	{
		if (write(fDto, buff, sZ))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
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
	return (0);
}
