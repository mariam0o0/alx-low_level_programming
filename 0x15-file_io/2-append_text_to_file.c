#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content:a NULL terminated string to add to the file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bwritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);


	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	bwritten = write(fp, text_content, strlen(text_content));
	if (bwritten == -1)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}

