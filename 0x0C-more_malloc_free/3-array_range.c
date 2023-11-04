#include <stdlib.h>
/**
 * array_range-gives a new array with a newly allocated space
 *		back to the caller
 *@min: the minimum value passed to the function
 *
 *@max: the maximum value passed to the function
 *Return: ptr.
 *
 */

int *array_range(int min, int max)
{
	int i, range;

	int *ptr;

	/*calclulating the range of the array*/
	range = (max + 1) - min;
	/*chceking if min is grather than max*/
	if (min > max)
		return (NULL);
	/*allocating memory for the array*/
	ptr = malloc(sizeof(int) * range);
	/*checking if memory allocation fails*/
	if (ptr == NULL)
		return (NULL);
	/*putting the intigers in the newly allocated space*/


	/*		a working code			*/

	/*
	 * while (min != max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	//but it wont work if its: ptr[i] = min +i; on above

	ptr[range - 1] = max;
	*/


	/*better version of that code (shorter and readable)*/
	for (i = 0; i < range; i++)
		ptr[i] = min + i;

	/*returning the pointer, to the array, back to the caller*/
	return (ptr);
}
