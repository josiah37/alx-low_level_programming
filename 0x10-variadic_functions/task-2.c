#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
void  print_strings(const char *separator, const unsigned int n, ...)
{
	va_list myarg;
	va_start(myarg, n);
	int i;
	for (i = 0; i < n; i++)
	{	
		char * x =  va_arg(myarg,char*);
		printf("%s",x);
		if (i != n-1)
			printf(", ");
	}
	puts("");
};
