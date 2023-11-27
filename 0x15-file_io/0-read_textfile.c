#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the name of the file
 * @letters:number of letters it should read and print
 * Return:number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	ssize_t bRead, bWritten;

	if ((!filename && letters))
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	bRead = read(fp, buffer, letters);
	close(fp);
	if (bRead == 0)
	{
		free(buffer);
		return (0);
	}
	if (!bRead)
		bRead = letters;

	bWritten = write(fileno(stdout), buffer, bRead);
	if (bWritten == -1 || bWritten != bRead)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	return (bRead);
}


