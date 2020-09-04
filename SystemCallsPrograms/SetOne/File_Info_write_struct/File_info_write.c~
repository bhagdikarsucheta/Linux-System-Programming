#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<fcntl.h>

int main(int argc, char * argv[])
{

  DIR *dir;
  struct dirent *entry;
  int fd;
  char name[100] ={'\0'};
  struct stat filestat;

  typedef struct
  {
    char name[100];
    int ino;
    int size;
  }FILEINFO;
   FILEINFO obj;
  
  dir = opendir(argv[1]);

  if(dir == NULL )
   {
      printf("\nerror opening directory\n");		
      return -1;
   }
   
   fd= creat("Info",0666);
   
   while((entry = readdir(dir)) != NULL)
   {
	sprintf(name,"%s/%s",argv[1],entry->d_name);
         stat(name,&filestat);
 
	if(S_IREG (filestat.st_mode))
        {
	   strcpy(obj.name,entry->d_name);
 	   obj.ino = filestat.st_ino;
  	   obj.size = filestat.st_size; 
 
	  write(fd,&obj,sizeof(obj));
	}
 
   }

 closedir(dir);
 printf("\nInformation of all files are:\n");
 close(fd);
 fd = open("Info",O_RDONLY);

 while((read(fd,&obj,sizeof(obj))) != 0)
 {
    printf("\t%d\t%s\n",obj.ino,obj.name,obj.size);
 }

 return 0;
 

}
