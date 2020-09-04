#include<stdio.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{

  int fd;
  int ret;
  char buff[256];
  fd = open(argv[1],O_RDONLY);
  
  if(fd == -1)
  {
    printf("\nerror opening file\n");
    return -1;
  }

  while(ret = read(fd,buff,sizeof(buff)) != 0)
  {
    printf("\n Data is \n %s",buff);
  }
  
  close(fd);
  return 0;
}
