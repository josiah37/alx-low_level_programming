/***
Write a function that prints a string in reverse.
the output has to be something like: "reklaW notloC"

*/
#include <stdio.h>
#include <string.h>
void _print_rev_recursion(char *s)
{
	int leng = strlen(s);
	//putchar();
	char str[20];
	int i = 0;
	for (leng; leng <=0 ; leng-- )
	{
		str[i] =s[leng];
		i++;
	}
	str[i]= '\0';
	printf("%s\n",str);
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}

