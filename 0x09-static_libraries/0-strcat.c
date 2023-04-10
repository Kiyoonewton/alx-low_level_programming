#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: a pointer the character we eant to concat
 *
 * @src: a pointer the character to concat with
 *
 * Return: nil
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
