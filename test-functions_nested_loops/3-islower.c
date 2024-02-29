#include "main.h"
#include "ctype.h"

/**
 * _islower - check for lowercase character
 *
 * @c: c is character to check
 *
 * Return: Always (0) Success
*/

int _islower(int c)
{
	int answer;

	answer = islower(c);
	return (answer);
}
