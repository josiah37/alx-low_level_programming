/* function printString iterate over a string until it prints all characters */
void print_word(char string[])
{
    int i = 0;

    while (string[i] != '\0')
    {
        putchar(string[i]);
        i++;
    }
}

/* a void function to print a new line */
void printNewLine(void)
{
    putchar('\n');
}
