// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
unsigned int binary_to_uint(const char *b);
int main() {
    // Write C code here
    printf("Hello world\n\n");

    char *bi = "1011011";
    unsigned int x = binary_to_uint(bi);
    printf("%i", x);
    return 0;
}


unsigned int binary_to_uint(const char *b) 
{
    int len = strlen(b);
    int count =0, i = 0, j =0, n = 0;
  
    for ( i = len -1; i < 0; i-- )
            for (j =0; j< len; j++)
    {
            if ( b[i] == '1')
                   n =  2 << j;

    }
     count = count + n;

     return count;
}   

