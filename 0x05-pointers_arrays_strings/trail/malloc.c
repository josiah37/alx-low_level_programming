 #include <stdio.h>
 #include <stdlib.h>
int main()
{

int i, n;
printf("how many intiger you want?\n");
scanf("%d", &n);
puts("");

/*allocating memory for the number inserted */

int *ptr = malloc(sizeof( int) * n);

/*writing on the alllocated memory*/

for (i = 0; i < n; i++)
{
	printf("inter an intger: ");
	scanf("%d", ptr + i);
}

printf("the numbers you have inserted are:");
for (i = 0; i < n; i++)
{	printf("%d ", *(ptr + i));	
}

free(ptr);

/*	printing string with malloc	*/
char *s = malloc (sizeof (char)* 6);
s[1]= 'j';
s[2] = 'e';
s[3] = 's';
s[4] = 'u';
s[5] = 's';
s[6] = '\0';
printf("%s ", s);

/* also possible to say 
s = "GOD!!";
printf("%s", s);

free(s);
i*/

return 0;
}





