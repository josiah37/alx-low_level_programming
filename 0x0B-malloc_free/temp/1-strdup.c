#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *strdup-is a function recives a str, allocate a memory
 *		that is same amount as the str and copy
 *		its contents in it.
 *description- func recives a str, allocate a memory
 *that is same amount as the str and copy its contents in it.
 *@str: is a paramter w/h recives a string that will be copied
 *@s: it a pointer variable to recive the address, the value
 *Retrun: s- which is the memory we allocated and written what is
 *	on the input/ parameter.
 */

char *_strdup(char *str)
{
	int str_len = strlen(str) + 1;

	int i;

	/*giving our new variable "s" a memory zat can hold */
	char *s = malloc(sizeof(char) * str_len);

	/*checking if our pointer(s) is null()*/
	if (s == 0)
	{
		return (NULL);
	}

	/*assigning/intalizing (by coping from the input "str")*/

	for (i = 0; i < str_len; i++)
		s[i] = *(str + i);
/**
 * like z above, or i can use like: strcpy(s, str); that will is
 * copy and can definatly hold what is given into srt parameter.
 */

	return (s);
}
