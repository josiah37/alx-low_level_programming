#include "main.h"
/**
 * print_alphabet_x10- print_alphabet- this print..
 * Return: always 0.
 * this doesn't have to contail the semi colon
 * because we are defining a function here/
 */

void print_alphabet_x10(void)  /* no semicolon here*/
{
	int i;
	char letter;

	i = 0;
	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
