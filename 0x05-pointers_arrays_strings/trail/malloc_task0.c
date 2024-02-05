#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
int i;
	char *s;
	s = malloc(sizeof(char)*size);
	if (s == NULL)
		return NULL;
	for (i = 0; i < size; i++)
		s[i] = c;
//		s[1] = c;
return s;
}


void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
