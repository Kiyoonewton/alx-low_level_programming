#include <string.h>
/**
 * infinite_add - addtwo set of input values
 * @n1: first input
 * @n2: second input
 * @r: buffer
 * @size_r: buffer size
 * Return: return the summation of the values or zero if buffer size is higher
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, i, j, k, d1, d2, sum;
	len1 = strlen(n1);
	len2 = strlen(n2);/* Check if result has more digits than buffer can hold */
	if (len1 + len2 >= size_r) 
	{
		return NULL;
    	}
	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = 0;/* Add digits from both numbers and store result in buffer */
	while (i >= 0 || j >= 0)
	{
		d1 = (i >= 0) ? n1[i] - '0' : 0;
		d2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = d1 + d2 + carry;
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
		i--;
		j--;
	}/* Add carry to result if necessary */
	if (carry > 0)
	{
		r[k++] = carry + '0';
	}/* Reverse the result */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];r[i] = r[j];r[j] = temp;
	}/* Add null terminator to result */
	r[k] = '\0';
	return r;
}
