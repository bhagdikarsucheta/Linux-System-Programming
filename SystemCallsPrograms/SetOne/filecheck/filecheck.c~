#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc, char * argv[])
{

  DIR *dir;
  int ret, ret2,fd,fd2;
  struct stat filestat1,filestat2;
  char buff[256],buff2[256];
  int flag=0;
   
  ret = stat(argv[1],&filestat1);
  if(ret == -1)
  {
	printf("\nUnable to retrieve file contents\n");
	return -1;
  }

  ret2 = stat(argv[2],&filestat2);
  if(ret2 == -1)
  {
	printf("\nUnable to retrieve second file contents\n");
	return -1;
  }

  fd = open(argv[1],O_RDONLY);
  if(fd == -1)
  {
      printf("\nerror opening file\n");
  }
 
  fd2 = open(argv[2],O_RDONLY);
  if(fd2 == -1)
  {
	printf("\nerror opening file 2\n");
  }
 
  while((ret = read(fd,buff,256)) != 0)
  {
     ret2 = read(fd2,buff2,ret);
     if(memcmp(buff,buff2,ret) != 0)
     {
	flag = -1;
      
     }
  }

 if(flag == -1 || ret !=0 || ret2 != 0)
 {
         printf("\ncontents are not equal\n");
	 return -1;
 }
 else
 {
  printf("\ncontents are equal\n");
 }
  return 0;
}
