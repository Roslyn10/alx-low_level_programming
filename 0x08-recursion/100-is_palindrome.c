#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * Description - Checks if a string is a palindrome or not
 * Return: 1 if it is and 0 if not
 */
int is_palindrome_helper(char *s, int b; int e)
{
	if (b >= e)
	{
		return (1);
	}

	if (s[b] != s[e])
	{
		return (0);
	}

	return is_palindrom_helper(s, b + e - 1);
}

int is_palindrome(char *s)
{
	int length = string_length(s);
	return is_palindrome_helper(s, 0, length - 1);
}
