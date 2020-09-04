#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc, char * argv[])
{

 DIR *dir;
 struct  stat filestat;
 struct dirent *obj;
 char name[100];

 dir = opendir(argv[1]);

 if(dir == NULL)
 { 
   printf("\nerror opening directory\n");
     return -1;
 }

 while((obj = readdir(dir)) !=0)
 {
   printf("\nDirectory contents are %s\n",obj->d_name);

	sprintf(name,"%s/%s",argv[1],obj->d_name);
	stat(name,&filestat);

    if(S_ISREG (filestat.st_mode))
    	printf("\nRegular file\n");
    else if(S_ISDIR(filestat.st_mode))
  	printf("\nDirectory File\n");
    else if(S_ISLNK(filestat.st_mode))
	printf("\nSymbolic Link\n");
 }
  
  closedir(dir);

  return 0;
}

