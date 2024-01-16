#include <stdio.h>
/**
 * this code is not betty complient yet, but it is another version that still works!
 * this works as: there is the full sentence in the paramenter. the function print the
 * first latter then call the function again. in the second call we will be
 * printing the 2nd later then we call the funcion till we reach the null byte.
 */
void _puts_recursion (char *s)
{    // base case 
    if (*s == '\0')
       {
           putchar('\n');
            return;
       }
    putchar(*s);
    s=s+1;
//return; //if you wanna learn more uncommment this. if we return here only the 1st letter will be called
     _puts_recursion(s);
return;
}
