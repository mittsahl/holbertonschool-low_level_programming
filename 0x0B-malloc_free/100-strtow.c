#include <stdlib.h>
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
	
	if (str == NULL || _strlen(str) == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (_isalpha(str[i]) == 1 && str[i + 1] == ' ')
			numOfWords++;
	}	
	i--;
	if (str[i] != ' ')
		numOfWords++;
	words = (char **)malloc(numOfWords * sizeof(char *) + 1);
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
				for (; wIdx > 0; wIdx--)
					free(words[wIdx]);
				free(words);
				return (NULL);
			}
			words[wIdx][charLength] = '\0';
			for (; i2 < j; i2++, cpyIdx++)
				words[wIdx][cpyIdx] = str[i2];		
			wIdx++;
		}	
	}	
	wIdx++;
	words[wIdx] = '\0';
	return (words);
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
