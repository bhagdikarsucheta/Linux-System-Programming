#include<stdio.h>
#include<fcntl.h>
#include<string.h>


//Accept data from user and write it into files

int main(int argc, char * argv[])
{

  int fd;
  int ret;
  char buff[256];

  fd = open(argv[1],O_WRONLY);
 
  if(fd == -1)
  {
      printf("\nerror opening file in write mode\n");
	return -1;
  }
 

  printf("\nEnter the string that you want to enter:\n");
   scanf("%[^\n]s",buff);
  
  ret = write(fd,buff,strlen(buff));
  

  if(ret = strlen(buff))				//OR (ret == -1 ) can also work
  {
     printf("\nerror writing in file\n");
	return -1;
  }

  close(fd);
  return 0;
}
