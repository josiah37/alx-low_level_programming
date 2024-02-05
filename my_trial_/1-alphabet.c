#include "unistd.h"
/**
 *print_alphabet- print_alphabet prints the alphabet, in lowercase,
 *followed by a new line.
 * description- this is the description for main returns a to z. alphabet.
 * Return: Always 0.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

int main (void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
        {
                _putchar(alphabet);
                alphabet++;
        }
        _putchar('\n');
	return (0);
}
