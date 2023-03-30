#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n bytes of a certain string
 *
 * @dest: first pointer to concatenate
 *
 * @char: second pointer to concatenate with
 * 
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
