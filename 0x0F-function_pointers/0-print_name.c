/**
 * print_name - function that print name
 *
 * @name: name to print
 * @f: function pointer that return nothing
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
