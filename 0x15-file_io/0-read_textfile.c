#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could print, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openFile, readFile, writer;
	char *reader;

	if (filename == NULL)
		return (0);

	reader = malloc(letters * sizeof(char));
	if (reader == NULL)
		return (0);

	openFile = open(filename, O_RDONLY);

	readFile = read(openFile, reader, letters);

	writer = write(STDOUT_FILENO, reader, readFile);

	reader[readFile] = '\0';

	return (writer);
}
