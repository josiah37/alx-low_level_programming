#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *ptr, i, n=5;
    int new_size = 5;

    // Allocate memory for 5 integers
    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Initialize the integers
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Print the original integers
    printf("Original integers: ");
    for (i = 0; i < n; i++) 
        printf("%d ", ptr[i]);
    
    //reallocating for 10 intgers

	ptr = realloc(ptr, (n+new_size)*sizeof(int));
	if (ptr==NULL)
	{
		puts("oopsss");
		exit(1);
	}
    // intalizing the memory 
   for (i=5; i < (n+new_size); i++)
  	ptr[i]=i + 1;
/*	i=n;
	while (i < new_size) 
	{
		ptr[i] = i +1;
		//n++;
		i++;
	}
*/	//printing
	printf("\n and the new ints are : ");
	for (i =0 ; i <= (n + new_size-1); i++ ) 
	      printf("%d ",ptr[i]);	

   free(ptr);
    	return 0;

}
