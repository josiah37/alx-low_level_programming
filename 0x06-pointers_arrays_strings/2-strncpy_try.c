#include <stdio.h>
#include <stdlib.h>
/*******************************************************************
Write a function that copies a string.
•	Prototype: char *_strncpy(char *dest, char *src, int n);
•	Your function should work exactly like strncpy
FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

Hello world 3
Hello wor
If dest is not null count the strings(index) in that variable 
If src is not null
//Count src till it reaches n number… LOOP
LOOP (start copping at the last index of the dest var… n number of index from src)
*************************************************************************************/

char *_strncpy(char *dest, char *src, int n)
{
	if (src == NULL || dest ==NULL)
	{
		printf("can not copy; pls check ur input\n");
		return NULL;
	}
else
{
int i;
//going to the end of the des string 
for (i =0; dest[i] != '\0'; i++){}	
// adding the src string at the last index of des

/****
char * paper = malloc(sizeof( char )* i + n +2);
for (i =0; dest[i] != '\0'; i++)
{
	 paper[i] = dest[i];
	i++;
} 
*********************/
char * space= " ";
dest[i] = space[0];
for (int j = 0; j < n && src[j] != '\0'; j++)
{
	i++;	
	dest[i] =src[j];
//	i++;
}

//making the last index a null byte 

dest[i+1] = '\0';
}
return dest;
}


#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int i;
	char str[] = "OH,GOD";
printf("%s\n", _strncpy(str,"ALMITY jesus", 15));
char destination[5];
     char *source = "Hello, World!";

printf("%s\n", _strncpy(destination, source, 5));
    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    } 
    printf("\n");
//	free(_strncpy);
    return (0);
}
