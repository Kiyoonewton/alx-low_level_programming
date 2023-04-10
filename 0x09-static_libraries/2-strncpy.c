#include <string.h>

/**
 * _strncpy - copy up to n number of bytes to the pointer
 *
 * @dest: the pointer to the destination array where the
 *        content is to be copied
 * @src: the string to be copied
 *
 * @n: number to be copied from source
 * Return: the character to be returned
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
