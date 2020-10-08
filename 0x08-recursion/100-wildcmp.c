#include "holberton.h"

/**
 * length - compares two strings and returns 1 if they are identical
 * @string: string
 * @count: int count, counts the length
 * Return: 1 or 0
 */
int length(char *string, int count)
{
	/*returns length of string*/
	if (string[count] != '\0')
		return (length(string, ++count));
	else
		return (count);
}
/**
 * check_Wild2 - compares two strings and returns 1 if they are identical
 * @s1: string 1
 * @s2: string 2 to be tested
 * @idx1: index of s1
 * @idx2: index of s2
 * @s1Len: last index of s1
 * Return: 1 or 0
 */
int check_Wild2(char *s1, char *s2, int idx1, int idx2, int s1Len)
{
	/*If s1 and s2 both reach null, it ran with no problems returning 1 */
	if (s2[idx2] == '\0' && s1[idx1] == '\0')
		return (1);
	/*If they are the same, increment both*/
	if (s2[idx2] == s1[idx1])
		return (check_Wild2(s1, s2, idx1 + 1, idx2 + 1, s1Len));
	/*If s2 runs into an asterick */
	if (s2[idx2] == '*')
	{
		/*If char after * is another *, increment idx2*/
		if (s2[idx2 + 1] == '*')
			return (check_Wild2(s1, s2, idx1, idx2 + 1, s1Len));
		/*If char after * is null, it is done iterating and returns 1*/
		if (s2[idx2 + 1] == '\0')
			return (1);
		/* If char after * does not match s1, start from end of */
		/* s1 and go backwards from their until it finds a match. */
		/* If no match is found going backwards, return 0 (Not Identical). */
		/* Had to create another helper function that does all this for me */
		/* called backtrack */
		else
			return (backtrack(s1, s2, length(s1, 0) - 1, idx2 + 1));
	}
	return (0);
}
/**
 * backtrack - The purpose of this function is to
 * backtrack to find a certain letter and provide
 * the indexes when the matching letter is found
 * @s1: string 1
 * @s2: string 2 being tested against string 1
 * @s1end: int starting at last index of s1
 * @idx2: index of s2
 * Return: 0 or calls check_Wild2
 */
int backtrack(char *s1, char *s2, int s1end, int idx2)
{
	if (s1end < 0)
		return (0);
	if (s1[s1end] != s2[idx2])
		return (backtrack(s1, s2, s1end - 1, idx2));
	else
		return (check_Wild2(s1, s2, s1end + 1, idx2 + 1, length(s1, 0)));
}
/**
 * wildcmp - checks if two strings are identical
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (check_Wild2(s1, s2, 0, 0, length(s1, 0)) == 1)
		return (1);
	else
		return (0);
}	
