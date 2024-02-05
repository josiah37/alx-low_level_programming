#include <stdio.h>
int main()
{
	FILE *freader;
	freader = fopen("file1.txt", "r");
	/*condition to check if the file open is succsesful*/
		if (freader == NULL)
		{
			printf("unable to open the file");
			return (1);
		}
/*creating an array to store what we want to read(basically copy) from that file */
	char str [22];
	fgets(str, 22, freader);

	/*checking that we have succsesful opened and read that file but it is not 
	printed fully ezi gar print yadergwen etachegnaw lay aywetawm 
	if i comment this out get yetachegnw muluwen yenbelenal ... this is because
	 we are accsessing the file with a pointer. the pointer was pointing to the 
	1st byte of the file but now it moved to cetain position*/
	
	printf("%s\n \n", str);

	printf("\n \n _______\n");
	/*allocating diffrent memeory to ensure that we the two are not compiting for sapace/ the same array */

	char strg[500];
	fread(strg,sizeof(char), sizeof(strg), freader);	
	printf("%s",strg);  // this prints all of the file with any loop just commenting the above out.

/*the above (not f read but the one above that)print just a single line to get the whole content we put it in loop 
 * we can use (while != NULL) or != EOF(end of file) or just while freade
 * r(since it means the same while the pointer is existing.. not null) ... not bedenb written!! this comment and what is below this 
 */
	/*
	while ( ch = fgetc(freader) != EOF)
	{
		 printf("%c", ch);
	} */
	return (0);
}
