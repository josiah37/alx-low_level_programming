#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/*

stdin

when a file is open it returns a file discriptors as 3. 
*/
int main ()
{
	/*opening a file (creating or overwiritng)*/
	int file_d = open("Abc.txt", O_RDWR |O_CREAT, 0777);
	/* error handling for the file opened*/
	if (file_d == -1)
		printf("can not create the file\n");
	else 
		printf("File is created succsesfully\n");

	printf("if you wanna know the file discriptor of open it's: %d \n", file_d); //3

	/*reading fro the file */
	
	char buffer[150];
	
	// read takes (the file we opened,the array, amount 2 be read, )
	int  read_bytes = read(file_d, buffer, sizeof(buffer) );
	printf("%s \n",buffer);	

	/*but it is better to use a loop because we don't know how much memory
	 we should allocate so we loop untill we reach at the end of the file. not 0 means ther's still data to be read.*/
	printf("the bytes to be read in the file is %d \n", read_bytes); // see its 115 but we allocated 150 that is memory westage.
	puts("\n\n ------------\n");
 while (read_bytes != 0)
{
 	printf("%s \n",buffer);
	read_bytes = read(file_d, buffer, sizeof (buffer));
}


	/*writing on the file*/

	char * word = "te amo!";
	// write (on the opend file, the above string, length of the string)
	int written = write(file_d, word, strlen(word));
	/*checking if it is written succsesfully (the is the only reason we need the "written var in the above")
	the write function returns an integer for the bytes that has been written so we will use that and compare
	 it with null. if it is null it means we have not witten or it failed
	 ssize_t write(int fd, const void *buf, size_t count)
	*/
	if (written == 1)
		puts("writting failed");
	else 
		puts("you have sucessfully writtten");


	// if you run this te amo wont appear because it is written but not read but if you compile again it will be included if you run 4th  time you may get 2 te amo 


	/*closing the file when we finish*/
	 close(file_d);
	return (0);
}
