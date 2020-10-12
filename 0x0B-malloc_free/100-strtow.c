#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* strtow - takes a stirng snd splits it up into words
* @str: string passed from main
* Return: a pointer to array of strings or NULL
*/

char **strtow(char *str)
{
	int i, j;
	int numOfWords = 0;
	char **words;
	int charLength;
	int wIdx = 0;
	int cpyIdx;
	int i2;
	
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (_isalpha(str[i]) == 1 && str[i + 1] == ' ')
			numOfWords++;
	}	
	i--;
	if (str[i] != ' ')
		numOfWords++;
	words = (char **)malloc(numOfWords * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			i++;
			charLength = 1;
			i2 = i;
			cpyIdx = 0;
			for (j = i; str[j] != ' ' && str[j]; j++)
				charLength++;		
			words[wIdx] = (char *)malloc(charLength);
			if (words[wIdx] == NULL)
			{	
				return (NULL);
			}
			words[wIdx][charLength + 1] = '\0';;
			for (; i2 < j; i2++, cpyIdx++)
				words[wIdx][cpyIdx] = str[i2];		
			wIdx++;
		}	
	}	
	return ((char **)words);
}

/**
 * _isalpha - checks if a char is a lette
 * Return: 0 if not, 1 if it is a letter
 * @c: ASCII value passed into function
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 * _strncat - concatenates two strings up to n bytes
 * Return: dest;
 * @src: src of copied bytes
 * @dest: where bytes are copied to
 * @n: number of bytes to be copied
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, destLength;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (i = 0; i < n && src[i]; i++)
		dest[destLength + i] = src[i];
	dest[destLength + i] = '\0';
	return (dest);
}
