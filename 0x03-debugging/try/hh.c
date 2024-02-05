#include <stdio.h>

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    if (b < a && a > c)
	largest = a;
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

        return (0);
}
