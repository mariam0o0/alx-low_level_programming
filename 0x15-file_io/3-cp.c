#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 1024

/**
* main -  copies the content of a file to another file
* @argc: no of arguments
* @argv: list of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{	int fd_from, fd_to;
	char buffer[SIZE];
	ssize_t bread;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC
			, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	while ((bread = read(fd_from, buffer, SIZE)) > 0)
	{
		if (write(fd_to, buffer, bread) == -1)
		{
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bread == -1)
	{
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if ((close(fd_from) | close(fd_to)) == -1)
		exit(100);
	return (0);
}
