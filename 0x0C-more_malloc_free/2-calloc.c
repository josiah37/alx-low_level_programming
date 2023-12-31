#include <stdlib.h>

/**
 * _calloc- a func the basically do what the reall calloc does
 *	    allocating memeory and initalizing
 * @nmemb: the number of elemnts in the array
 * @size: the sizeof each elemnts in the array
 *
 * Return: my_malloc
 * Explaintion: declaring the pointer as void b/c wedont know what
 * the array is pointing to (int, char, float..) so making it void
 * increases the flaxability
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
/*declaring the pointer as void b/c wedont know what z array is pointing to*/
	char *my_calloc;

	/*/char *ptr;*/

	unsigned int i;

	/* if size or numb of elemnt is passed as 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocating memory for the pointer*/
	my_calloc = malloc(nmemb * size);

	 /*      checking if allocation fails */
	if (my_calloc == NULL)
		return (NULL);

/*
 * intalizing each elemnt to zero. we use another pointer becase we
 * can inalize it dircetly while using a void pointer
 */

	for (i = 0; i < (nmemb * size); i++)
		my_calloc[i] = 0;
	/*returning the new memory for the array to back to the caller*/
	return (my_calloc);

}
