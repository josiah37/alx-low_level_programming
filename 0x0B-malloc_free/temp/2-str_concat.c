#include <string.h>
#include <stdlib.h>

/**
 *str_concat- concatinate two strings
 *description: the function recives 2 parameter and concatinate
 *		them by allocating spce that holds both.
 *
 * @s1: parameter one which will be coppied and later returned
 *@s2: the string where we copy from
 *Retrun: s1
 */
char *str_concat(char *s1, char *s2)
{
	char *my_pointer;
	
	/*      calculating the bytes that we need      */
	int len_s1_s2 = strlen(s1) + strlen(s2) + 1;

	/*      allocating the size to our pointer      */
        my_pointer = malloc(sizeof(char) * len_s1_s2);	

	/*assignig null cxc if NULL is passed (to the parameters)*/
	if (s1 == NULL) 
	{	
		s1 = "";
	}
	if (s2 == NULL)	
	{
		s2 = "";
	}

	/* checking iif the pointer fails */
	if (my_pointer == NULL)
		return (NULL);

	/*	copying s2 & s1 to our new space	*/
	strcat(my_pointer,s1);
	strcat(my_pointer,s2);

	return (my_pointer);
}
