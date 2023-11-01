#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
        char *character = malloc(sizeof(char) * size);
        if (size == 0)
                return (NULL);
        int i;

        for (i = 0; i < size; i++)
        	putchar(c);
	putchar('\n');
        return (0);
}
