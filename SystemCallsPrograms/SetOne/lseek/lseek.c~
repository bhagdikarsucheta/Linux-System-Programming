#include<stdio.h>
#include<fcntl.h>

int main(int argc, char * argv[])
{

  int fd,ret;
  char buff[256]={'\0'};
  fd = open(argv[1],O_RDONLY);
  
   if(fd == -1)
   {
	printf("\nerror opening file\n");
	return -1;
   }

   lseek(fd,atoi(argv[2]),SEEK_SET);
   ret = read(fd,buff,20);
   printf("\t%s",buff);
   return 0;

}
