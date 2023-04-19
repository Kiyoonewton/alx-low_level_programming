#include <stddef.h>

/**
 * array_iterator - a function of a given function that runs
 *                  as a parameter on each element of an array
 *
 * @array: array to loop
 * @size: size of array
 * @action: function pointer to call
 *
 * Return: empty if array and action is null
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
