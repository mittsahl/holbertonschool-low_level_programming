#include "holberton.h"

/**
* append_text_to_file - adds text to end of file
* @filename: name of file
* @text_content:  text to be added
* Return: 1 on successs for errors -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	if (text_content != NULL)
		write(file, text_content, (size_t)_strlen(text_content));
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

