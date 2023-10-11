#include "main.h"
/**
 * main- main prints the alphabet, in lowercase, followed by a new line.
 * description- this is the description for main returns a to z. alphabet.
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		_putchar('\n');
		alphabet++;
	}
	return (0);
}
