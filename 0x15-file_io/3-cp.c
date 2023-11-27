#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 1024

/**
* print_error - print error messege
* @filename: the name of the file
* @message: the error message
* @code: exit code
* Return: nothing
*/

void print_error(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "Error %d: %s %s\n", code, message, filename);
	exit(code);
}

/**
* main -  copies the content of a file to another file
* @argc: no of arguments
* @argv: list of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[SIZE];
	ssize_t bread, bwritten;

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to", "");
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Can't read from file", file_from);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC
			, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Can't write to file", file_to);
	}
	while ((bread = read(fd_from, buffer, SIZE)) > 0)
	{
		bwritten = write(fd_to, buffer, bread);
		if (bwritten == -1 || bwritten != bread)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Can't write to file", file_to);
		}
	}
	if (bread == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Can't read from file", file_from);
	}
	if (close(fd_from) == -1)
		print_error(100, "Can't close fd", "fd_from");
	if (close(fd_to) == -1)
		print_error(100, "Can't close fd", "fd_to");
	return (0);
}
