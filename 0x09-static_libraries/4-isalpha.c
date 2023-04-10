#include"main.h"

/**
 * _isalpha - Check if character is alphabet
 *
 * @c: The character to be checked
 *
 * Return: if alphabet return 1 else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
	    c >= 65 && c >= 90)
		return (1);
	return (0);
}
