#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	int len = strlen(str);
	char  *ptr;
	ptr = malloc(sizeof(char) * (len +1));
	if (ptr == NULL)
		return NULL;
	//strcpy(ptr, str );
	
/*	writting on the aloocated memory */	
	int i;	
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	ptr[len] = '\0';
	return ptr;	
}


int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
	printf("jesus ");
    return (0);

}
