#include<stdio.h>
#include<fcntl.h>

int main(int argc, char * argv[])
{

  int fd;

  if(argc != 2)
  {
    printf("\n Not enough argument\n");  
     return -1;
  }

  fd = open(argv[1],O_RDONLY);

  if(fd == -1)
  {
    printf("\nerror opening file\n");
    return -1;
  }

  printf("\nFile \t%s\t opened successfully in %d file descriptor mode\n",argv[1],fd);
  return 0;
}
