#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array- this function creates an array of characters with 
 * 		specified size and caracter it provided
 *
 * @size: this is the size of memory that we request to be allocated
 *
 *@char: this is a character we use to intalize the array of charcters
 *
 * Return: characrter
 */

char *create_array(unsigned int size, char c)
{
	char *character = malloc(sizeof(char) * size);
	if (size == 0|| character == 0)
		return (NULL);
	int i;
	
	for (i = 0; i < size; i++)
		character[i]=c;
	putchar('\n');

	return (character);
}
