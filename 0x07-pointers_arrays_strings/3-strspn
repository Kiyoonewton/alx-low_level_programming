/**
 * _strspn - a functions that compare and printout the 
Number of char that are the same as the one in s
 *
 * @s: pointer to string
 * @accept: substring prefix
 *
 * Return: the number of bytes of same string
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1; /*flag status*/
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
