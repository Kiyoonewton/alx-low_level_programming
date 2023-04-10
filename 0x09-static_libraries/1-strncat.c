#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates n bytes of a certain string
 *
 * @dest: first pointer to concatenate
 *
 * @src: second pointer to concatenate with
 *
 * @n: the number of bytes to reserve
 *
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
