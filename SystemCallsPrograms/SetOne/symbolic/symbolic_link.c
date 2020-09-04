#include<stdio.h>
#include<fcntl.h>

int main()
{

  int ret,fd;
  char buff[30];

  ret = symlink("newfile.txt","symlink.txt");
 
  if(ret == -1)
  {
	printf("\nerror creating symlink\n");
  }
   

  ret = readlink("symlink.txt",buff,sizeof(buff));

  if(ret == -1)
  {
	printf("\nunable to retreive contents\n");
	return -1;
  }

 printf("Path of symbolic link are \n%s ",buff);

 fd = open("symlink.txt",O_RDONLY);
 
 if(fd == -1)
 {
	printf("\nerror opening file\n");
	return -1;
 }
  memset(buff,0,sizeof(buff));


 ret = read(fd,buff,sizeof(buff));
 if(ret == -1)
 {
	printf("\nerror opening file\n");
	return -1;
 }

 printf("\ncontents inside file are \n%s\n",buff);

 return 0;
}
