#include "main.h"
/**
 * main - Copies the content of a file to another file
 * @argc: int
 * @argv: pointer argv
 * Return: Return 0 if successful, otherwise return error code
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to, *buffer;
	int fdir_from, fdir_to, rd;

	
	buffer = malloc(1024);
	if (!buffer)
		return (-1);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fdir_from = open(file_from, O_RDONLY, 0664);

	if (file_from < 0)
	{
		dprintf(STERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fdir_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	rd = read(fdir_from, buffer, 1024);
	if (fdir_to < 0 || (write(fdir_to, buffer, rd) != rd))
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) < 0);
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
