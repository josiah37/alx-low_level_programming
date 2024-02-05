#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
   /* Check if filename is NULL */
   if (filename == NULL)
       return (0);

   /* Opening the file */
   int fd = open(filename, O_RDONLY);

   if (fd == -1)
       return (0);

   /* Reading the file */
   char my_buffer[letters];
   ssize_t total_read = 0;
   ssize_t read_bytes;

   while ((read_bytes = read(fd, my_buffer, letters)) != 0)
   {
       if (read_bytes == -1)
       {
           puts("Failed to read\n");
           return (0);
       }

       printf("%s", my_buffer);
       total_read += read_bytes;
   }

   return (total_read);
}

