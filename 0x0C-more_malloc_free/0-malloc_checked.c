#include <stdlib.h>
/**
 *malloc_checked- allocate a memory for int and if fails it retrurns 98.
 *
 *@b: a parameter that recives an interger to allocate the memeory.
 *
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	/* allocating memory for "b" number of int */
	int *ptr = malloc(sizeof(*ptr) * b);

	/* condition if malloc falils to allocate memory */
	if (ptr == NULL)
		exit(98);

	return (ptr);

}
