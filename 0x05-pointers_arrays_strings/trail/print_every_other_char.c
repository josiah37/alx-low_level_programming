#include <stdio.h>
#include "main.h"
   void puts2(char *str)
   {
           int i;
           for (i = 0; str[i] != '\0';  i= i+2)
                   putchar(str[i]);
}

int main()
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
