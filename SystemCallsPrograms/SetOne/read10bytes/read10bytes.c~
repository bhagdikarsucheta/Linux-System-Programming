#include<stdio.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc, char * argv[])
{
  DIR *dir;
  struct dirent *obj;
  struct stat filestat;
  char name[100]={'\0'};
  char buff[50] = {'\0'};
  int ret;
  int fd,fdwrite;

   dir = opendir(argv[1]); 
   
   if(dir == NULL)
   {
	printf("\nerror opening file\n");
	return -1;
   }

   fdwrite = creat("DemoFile.txt",0666);

   while((obj = readdir(dir)) != NULL)
   {
	sprintf(name,"%s/%s",argv[1],obj->d_name);
   	stat(name,&filestat);

	if(S_ISREG (filestat.st_mode))
	{
	fd = open(name,O_RDONLY);
   	ret = read(fd,buff,10);
         
 	write(fdwrite,buff,ret);
	close(fd);
	}
   }

 close(dir);
 return 0;
}
