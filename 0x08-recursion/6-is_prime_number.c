/**
 * is_prime - function to check if n is prime
 *
 * @n: input number
 * @a: input from is_prime_number
 *
 * Return: return 1 if prime and 0 if not
 */
int is_prime(int n, int a)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2 || a == n)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, a + 1));
	}
}
/**
 * is_prime_number - function to pass in is_prime
 *
 * @n: parameter from main.
 * Return: return the is_prime function
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
