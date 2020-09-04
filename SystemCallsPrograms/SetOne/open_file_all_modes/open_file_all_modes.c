#include<stdio.h>
#include<fcntl.h>

int main()
{
  int fd;

  fd = open("home/Desktop/SystemCalls/open_file_all_modes/Demo",O_RDONLY); 
  if(fd == -1)
  {
 	printf("File opened successfully in O_RDONLY mode by %d descriptor\n",fd);
  }
  else 
  {
	printf("unable to open file\n");
  }

  fd = open("home/Desktop/SystemCalls/open_file_all_modes/Demo",O_WRONLY); 
   if(fd == -1)
  {
 	printf("File opened successfully in O_WRONLY mode by %d descriptor\n",fd);
  }
  else 
  {
	printf("unable to open file\n");
  }
 
  fd = open("home/Desktop/SystemCalls/open_file_all_modes/Demo",O_RDWR); 
   if(fd == -1)
  {
 	printf("File opened successfully in O_RDWR mode by %d descriptor\n",fd);
  }
  else 
  {
	printf("unable to open file\n");
  }
}
