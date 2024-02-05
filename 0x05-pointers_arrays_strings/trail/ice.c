#include <stdio.h>
#include "main.h"
void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0';  i= i+1)
		putchar(str[i]);
		//puts("");

/*
i = 0;

while (str[i] != '\0')
{
	putchar(str[i]);
	i++;
}
*/
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
