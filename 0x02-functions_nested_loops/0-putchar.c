#include <stdio.h>
#include "main.h"
/**
 *main- Entry point
 *description- this is to print _putchar followed by a new line.
 *		You are not allowed to use the standard library.
 *		Any use of functions like printf, puts, etc… is forbidden.
 *		You are allowed to use _putchar. No more than 5 functions per fili
 * return- 0 (sucsses)
 */
int main(void)
{
	char mychar[] = "_putchar";

	print_word(mychar);
	printNewLine();
	return (0);
}
