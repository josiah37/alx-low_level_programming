#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entery point
 *
 * @argc: counting the parameters passed to main
 *
 * @argv: it is an array that prints the arguments passed to
 * the main // after the compilation process
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		puts("Error\n");
		return (1);
	}

	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
