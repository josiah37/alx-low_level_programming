#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat- concatinates 2 strings into a new dynamically allocated
 *		 memory and return a pointer.
 *
 * @s1: destination, where we copy the scource string to
 * @s2: source(src), a string from which we copy from
 * @n: the number of charcters that we want to copy to the dest
 * Return: space
 *
 * Expalantion: strncat concatinates with n number of the src so we should
 * always make sure that we have added additional space for null cxc.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int total_len;

	char *space;

/*asigning an empty string if s1 and s2 are passed null*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculating size of our total string (including '\0')*/
	total_len = strlen(s1) + strlen(s2) + 1;

	/* allocating new spoace memory for of our new string*/
	space = malloc(sizeof(char) * total_len);

	/*	condition if the function fails		*/
	if (space == NULL)
		return (NULL);

	/*putting the 1st string into our new space*/
	strncat(space, s1, strlen(s1));

	/*putting the 1st string into our new space*/
	strncat(space, s2, n);

/* passing the allocated memory (allong wz the new string)to the main */
	return (space);


}
