#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myarg;
	va_start(myarg, n);
	int i;
	for (i = 0; i < n; i++)
	{	
		int x =  va_arg(myarg, const unsigned int);
		printf("%i",x);
		if (i != n-1)
			printf(", ");
	}
	puts("");
};
