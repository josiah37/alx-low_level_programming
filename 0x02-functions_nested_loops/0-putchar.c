#include <main.h>
/**
 *main- Entry point
 *description- this is to print _putchar followed by a new line.
 *		You are not allowed to use the standard library.
 *		Any use of functions like printf, puts, etc… is forbidden.
 *		You are allowed to use _putchar. No more than 5 functions per fili
 * return- 0 (sucsses)
 */
/* function printString iterate over a string untill it print all z charcters*/
int printString(char *str)/* str is a variable and the parameter.
			   * the return tye is int
			   */
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
/*a void function to print a new line*/
void printNewLine(void)
/*a void function to print a new line*/
{
	putchar('\n');
}

int main(void)
{
	char *str = "_putchar";

	printString(str);
	printNewLine();
	return (0);
}
