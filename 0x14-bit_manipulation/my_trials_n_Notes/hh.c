// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
unsigned int binary_to_uint(const char *b);
int main() {
    // Write C code here
    printf("Hello world\n\n");

    char *bi = "1011011"; //3 8 16 64
    unsigned int x = binary_to_uint(bi);
    printf("%i \n", x);
    return 0;
}


unsigned int binary_to_uint(const char *b) 
{
  int count =0, i, len =0;
  /*calculating the number of len */ 
    while (b[i] != '\0')
    {    len++;
         i++;
    }    
  
    for ( i = len -1; i >= 0; i-- )
           
    {       
      /*checking if other number is interd except 0 &1 */
      if (b[i] !='0' && b[i] !='1')
             return 0;
        /*computing if it is 1*/
            if ( b[i] == '1')
            {
                     count +=  1 << (len -1 -i);
                    printf("at this stage its: %d \n", count);
            }
        
    }
     //count = count + n;

     return count;
}   
