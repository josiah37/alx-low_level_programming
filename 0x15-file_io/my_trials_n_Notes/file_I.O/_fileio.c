#include <stdio.h>
#include <unistd.h>
int main()
{
FILE *fptr;
fptr= fopen("file1.txt", "w");

if (fptr == NULL)
{
	printf("the file is not created");
	return (1);
}
else 
fputs("this is a test on file i /o. \n love of God\n", fptr);
fprintf(fptr,"hellow ... AMMANUEL\n");

fclose(fptr);

if (fptr==NULL)
	printf("the file is closed!\n");

return (0);
}
