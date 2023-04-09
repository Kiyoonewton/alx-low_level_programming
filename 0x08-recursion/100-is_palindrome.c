#include <string.h>

/**
 * is_palindrome - function that reads the same backward as forward
 *
 * @s: the palindrome string
 * @start: the start of the string
 * @end: the end of the string
 *
 * Return: return 1 if string is palindrome and 0 if not
 */

int is_palindrome_recursion(char s[], int start, int end);

int is_palindrome(char s[])
{
	int len = strlen(s);

	return (is_palindrome_recursion(s, 0, len - 1));
}

/**
 * is_palindrome_recursion - is_palindrome helper or checker
 *
 * @s : the palindrome string
 *
 * @start: the start of the string
 *
 * @end: the end of the string
 *
 * Return: return 1 if string is palindrome and 0 if not
 */
int is_palindrome_recursion(char s[], int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_recursion(s, start + 1, end - 1));
}
