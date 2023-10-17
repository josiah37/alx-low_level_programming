#include <stdio.h> 
void tring_headers (void)
{
        printf("the grace of god is upon you!");
}
int  numadd(int num1, int num2)
{
	int result = num1 + num2;
	printf("the addition of %i and %i is: %i", num1, num2, result);
}
int main (void)
{
	tring_headers();
	numadd(23, 35);
	return (0);
}
