/**
 * swap_int - This swap the value of interger a and b
 *
 * @a: First parameter
 * @b: Second parameter
 *
 * Return: nil
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
