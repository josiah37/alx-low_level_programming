#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
/*	opening a file */
 int fd;
 fd = open("doc1.txt", O_RDONLY);
 printf("%d\n", fd);
 char array[10];
read(fd, &array,9 );
printf("%s \n", array);
 return 0;
}

