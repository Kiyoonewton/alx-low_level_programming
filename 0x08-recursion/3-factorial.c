/**
 * factorial - return the fatorial of a number with formular of (n(n-1!))
 *
 * @n: factorial number
 *
 * Return: return the calculated recursion
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
