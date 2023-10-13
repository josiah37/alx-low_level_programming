#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10) /* this is the line of code that is causing the problem*/
	 {
		 putchar(i);
	 }

	printf("Infinite loop avoided! \\o/\n");
	
	return (0);
}
