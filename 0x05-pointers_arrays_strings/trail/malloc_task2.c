 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
char *str_concat(char *s1, char *s2)
{
/*	calulating len	*/	
int len = (strlen(s1)+ strlen(s2) + 1)

;/*allocating memeory for the str*/

char *ptr = malloc(len);
if (ptr == NULL)
	return NULL;
strcpy(ptr, s1);
strcat(ptr, s2);

return ptr;
}


int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
