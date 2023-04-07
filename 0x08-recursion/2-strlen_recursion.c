/**
 * _strlen_recursion - get the length of the passed-in string
 *
 * @s: passed-in string
 *
 * Return: return string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
