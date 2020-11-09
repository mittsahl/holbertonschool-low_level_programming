#include "holberton.h"

/**
* create_file - creates a file  
* @file: name of the file
* @text_content: the contents of the file
* Return: 0
*/

int create_file(const char *file, char *text_content)
{
	int fileDes;
	ssize_t written;
	size_t len;
	
	if (!file)
		return (-1);
	fileDes = open(file, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fileDes < 0)
		return (-1);
	if (text_content != NULL)
	{
		len = (size_t)_strlen(text_content);
		written = write(fileDes, text_content, len);
		if (written < 0)
			return (-1);
	}		
	close(fileDes);
	return (1);
}

/**
 * _strlen - returns the length of string s
 * Return: length
 * @s: string passed from main
 */

int _strlen(char *s)
{
	int length;
	char *start = s;

	for (length = 0; start[length] != '\0'; length++)
		;
	return (length);
}
