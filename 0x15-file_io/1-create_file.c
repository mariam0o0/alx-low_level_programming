#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content:a NULL terminated string to write to the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bwritten;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		bwritten = write(fp, text_content, strlen(text_content));
		if (bwritten == -1)
		{
			close(fp);
			return (-1);
		}
	}

	close(fp);
	return (1);
}
