#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (b > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);

}

int main(void)
{
        int a, b, c;
        int largest;

        a = -972;
        b = 98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

	a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("\n%d is the largest number now \n", largest);


	a = 972;
        b = -98;
        c = 999;

        largest = largest_number(a, b, c);

        printf("\n%d is the largest number now \n", largest);
        return (0);
}
