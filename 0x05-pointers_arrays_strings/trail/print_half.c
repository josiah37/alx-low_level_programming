#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
int i, len = strlen(str);
	i = len/2;
	while (str[i] != '\0')
	{
		putchar(str[i]);
	i++;
	}
}


int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
