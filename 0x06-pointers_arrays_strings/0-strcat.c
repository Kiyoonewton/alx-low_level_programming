#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * Return: nil
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
