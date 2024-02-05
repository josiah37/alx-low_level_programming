#include <stdio.h>
//#include "main.h"
#include <string.h>

unsigned int binary_to_uint(const char *b) 
{
  unsigned int count =0;
 int  i=0, len =0;
  /*calculating the number of len */ 
    while (b[i] != '\0')
    {    len++;
         i++;
    }    
  
    for ( i = len-1 ; i >= 0; i-- )
           
    {       
      /*checking if other number is interd except 0 &1 */
      if (b[i] !='0' && b[i] !='1')
             return (0);
        /*computing if it is 1*/
            if ( b[i] == '1')
            {
                     count +=  1 << (len -1 -i);
                    printf("at this stage its: %d \n\n", count);
            }
        
    }
     //count = count + n;

     return count;
}  
/*
int main()
{
       	
      int  n = binary_to_uint("1");
      printf("%u\n", n);
      n = binary_to_uint("101");
      printf("%u\n", n);
	return 0;
}

*/
