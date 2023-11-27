#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the name of the file
 * @letters:number of letters it should read and print
 * Return:number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bRead, bWritten;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	buffer = malloc(letters + 1);
	if (!buffer)
	{
		fclose(fp);
		return (0);
	}
	bRead = fread(buffer, 1, letters, fp);
	if (bRead == 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	buffer[bRead] = '\0';
	bWritten = write(fileno(stdout), buffer, bRead);
	if (bWritten == -1 || bWritten != bRead)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (bRead);
}


