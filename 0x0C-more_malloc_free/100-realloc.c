#include <stdio.h>
#include <stdlib.h>

/**
 *_realloc- afaction which is like realloc
 * @old_size: the old size of memory
 * @new_size: the new size of the will be allocated
 * @ptr: the old pointer (priviously allocated memory)
 * Return: my_realloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	int *my_realloc, *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	/*allocating memory if the above condition fails*/
	my_realloc = malloc(new_size);

	if (my_realloc == NULL)
		return (NULL);

	old_ptr = (int *) ptr;

	if (new_size > old_size)
	{
		while (i < old_size)
		{
			my_realloc[i] = old_ptr[i];
			i++;
		}
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
		{
			my_realloc[i] = old_ptr[i];
			i++;
		}
	}
	free(ptr);
	return (my_realloc);
}
