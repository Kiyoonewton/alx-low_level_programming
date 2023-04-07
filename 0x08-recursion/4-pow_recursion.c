/**
 * _pow_recursion - Calculate the power of an input
 *
 * @x: The input to increase it power
 *
 * @y: The number of power
 *
 * Return: return the value of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
