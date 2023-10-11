
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

	
	
/*		what i have written below is something i made to answer task 0... i didnt know the above was alrady provided*/	
	
	
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

#endif
