#include "holberton.h"

/**
* read_textfile - reads a text file and prints it to stdout
* @filename: name of file
* @letters: number of letters to be read
* Return: number of bytes read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t readBytes, wroteBytes;
	char *buf;

	if (!filename || letters == 0)
		return (0);
	file = open(filename, O_RDWR);
	if (file < 0)
	{
		printf("Open Failed");
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	readBytes = read(file, buf, letters);
	if (readBytes < 0)
		return (0);
	wroteBytes = write(STDOUT_FILENO, buf, readBytes);
	return ((readBytes == wroteBytes)  ? wroteBytes : readBytes);
}
