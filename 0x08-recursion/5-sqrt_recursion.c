/**
 * _sqrt_recursion - function to find square_root
 *
 * @n: input number
 *
 * Return: square root
 */
int square_root_helper(int n, int low, int high);

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (square_root_helper(n, 1, (n / 2)));
}

/**
 * square_root_helper - sqrt_recursion helper
 *
 * @n: input number from main file
 *
 * @low: the lowest integer
 *
 * @high: the highest integer of the function
 *
 * Return: return square_root_helper
 */
int square_root_helper(int n, int low, int high)
{
	int mid;
	if (low > high)
	{
		return (-1);
	}
	mid = low + ((high - low) / 2);

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (square_root_helper(n, (mid + 1), high));
	}
	else
	{
		return (square_root_helper(n, low, mid - 1));
	}
}
