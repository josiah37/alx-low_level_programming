#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fptr;
	fptr= fopen("doc1.txt", "w");

	fprintf(fptr,"%s", "HELLO, Addis!");
	//fgets(fptr, "");
	fclose(fptr);

	return (0);
}
