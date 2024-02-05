#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	for (i = len; i < 0; i--)
		putchar(s[i]);

}

/*
int main()
{
	char kal[]= "jesus";
	rev_string(kal);
	return 0;
}

*/

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
