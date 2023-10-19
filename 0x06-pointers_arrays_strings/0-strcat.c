#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

    /* Find the end of the destination string */
	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}

    /* Concatenate the source string to the destination string*/
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /*Add a terminating null byte */
    dest[i] = '\0';

    /*Return a pointer to the resulting string*/
    return dest;
}

