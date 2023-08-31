#include "main.h"
/**
 * stringlength - Checks the length of a string
 * Description - Checks the length of a string
 * @s: Given string
 * Return: 0
 */
int stringlength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + stringlength(s + 1));
}
/**
 * is_palindrome_helper - Checks the charaters of a string
 * Description - Checks the string and its characters
 * @s: Given string
 * @b: Start of the string
 * @e: End of the string
 * Return: 1 b and e are the same, and 0 if not
 */

int is_palindrome_helper(char *s, int b, int e)
{
	if (b >= e)
	{
		return (1);
	}

	if (s[b] != s[e])
	{
		return (0);
	}

	return (is_palindrome_helper(s, b + 1, e - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * Description - Checks if a string is a palindrome or not
 * @s: Given string
 * Return: 1 if it is and 0 if not
 */
int is_palindrome(char *s)
{
	int length = stringlength(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
