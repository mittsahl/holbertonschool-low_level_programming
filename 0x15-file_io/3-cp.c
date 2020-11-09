#include "holberton.h"

/**
* main - copies contents of one file to another file 
* @ac:  number of arguments
* @av:  array of arguments 
* Return: 0
*/

int main(int ac, char **av)
{
	int from, to;
	ssize_t readBytes, wroteBytes;
	char *buf = malloc(1024);
	
	if (buf == NULL)
		return (0);
	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	readBytes = read(from, buf, 1024);	
	wroteBytes = write(to, buf, readBytes); 
	if (from < 0 || readBytes < 0)
	{
		printf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}	
	if (to < 0 || wroteBytes < 0)
	{
		printf("Error: Can't write to %s\n", av[2]);
		exit(99);
	}	
	to = close(to);
	from = close(from);
	if (to < 0 || from < 0)
	{
		printf("Error: Can't close fd %d\n", ((to < 0) ? to : from));
	}
	return (0);
}

