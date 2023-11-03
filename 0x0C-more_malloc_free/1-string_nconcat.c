#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat- concatinates 2 strings into a new dynamically
 *		   allocated memory and return a pointer.
 *
 * @s1: destination, where we copy the scource string to
 * @s2: source(src), a string from which we copy from
 * @n: the number of charcters that we want to copy to the dest
 * Return: space
 *
 * Expalantion: strncat concatinates with n number of the src so
 * we should always make sure that we have added additional
 * space for null cxc.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *space;

	unsigned int i;

	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
/*asigning an empty string if s1 and s2 are passed null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculating size of our total string (including '\0')*/
	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	/* if n size is too big make if n 2*/
	if (s2_len <= n)
		n = s2_len;

	/* allocating new space/ memory for of our new string*/
	space = malloc(s1_len + n + 1);

	/*      condition if the function fails         */
	if (space == NULL)
		return (NULL);

	/*putting the 1st string into our new space*/
	for (i = 0; i < s1_len; i++)
		space[i] = s1[i];
	/*putting the 1st string into our new space*/
	for (i = 0; i <= n; i++)
		space[s1_len + i] = s2[i];
/* passing the allocated memory (allong wz the new string)to the main */
	return (space);
}
