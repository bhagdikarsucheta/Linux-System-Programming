#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<string.h>
#include<sys/types.h>

int main(int argc, char * argv[])
{

  DIR *dir;
  int max=0;
  struct dirent *obj;
  struct stat filestat;
  char filename[256];
  char name[100];

  dir = opendir(argv[1]);
 
  if(dir == NULL)
  {
     printf("\nerror opening Directory\n");
	return -1;
  } 
 
  while((obj = readdir(dir)) != NULL)
  {
	//Use to create a absolute path
	sprintf(name,"%s/%s",argv[1],obj->d_name);
	stat(name,&filestat);		           
	
	//Chek if file is regular file
 	if(S_ISREG(filestat.st_mode))
	{
		if(max < filestat.st_size)
		{
  		  memset(filename,0,sizeof(filename));
		  strcpy(filename,obj->d_name);
		  max = (int)filestat.st_size;
		}
	}
	memset(&filestat,0,sizeof(filestat));
  }
 printf("\nFile with max size is \t%s \tsize:%d\n",filename,max);
 closedir(dir);

 return 0;
}
