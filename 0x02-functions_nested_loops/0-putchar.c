#include <stdio.h>
#include "main.h"
/**
 *main- Entry point
 * * Description: This program prints "_putchar" followed by a new line.
 *              It is not allowed to use the standard library.
 *              Any use of functions like printf, puts, etc... is forbidden.
 *              Only _putchar is allowed. No more than 5 functions per file.
 *
 * Return: 0 (Success)
 */
/*main functionis the intery point */
int main(void)
/*main functionis the intery point */
{
	char mychar[] = "_putchar";

	print_word(mychar);
	printNewLine();
	return (0);
}
