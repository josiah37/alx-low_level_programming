   #include <stdio.h>
   #include <fcntl.h>
   #include "main.h"
   #include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
   /*opening the file */
   int fd = open(filename, O_RDONLY);

   if (fd == -1)
       return (0);

   /*reading the file */
   char my_buffer[letters];
   ssize_t read_bytes = read(fd, my_buffer, letters);
   if (read_bytes == -1){
       puts("failed to read \n");
       return (0);
   }
   printf("they number in the read_bytes is %ld\n", read_bytes);
   /*reading from the file to our buffer*/
   while (read_bytes != 0)
   {
       printf("%s", my_buffer);
       read_bytes = read(fd, my_buffer, letters);
   }
   return (read_bytes);
}

