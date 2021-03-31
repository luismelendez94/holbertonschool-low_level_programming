#include "holberton.h"

/**
 * create_file - Create a file
 * @filename: Name of the file to read
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int openFile, writeFile, len;

	if (filename == NULL)
		return (-1);

	openFile = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (openFile == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	writeFile = write(openFile, text_content, len);
	if (writeFile == -1)
		return (-1);

	close(openFile);

	return (1);
}
