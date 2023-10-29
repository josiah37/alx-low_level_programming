#include <stdio.h>
/**
 * this code is not betty complient yet, but it is another version that still works!
 */
void _puts (char *s)
{    // base case 
    if (*s == '\0')
       {
           putchar('\n');
            return;
       }
    putchar(*s);
    s=s+1;
    _puts(s);
}
