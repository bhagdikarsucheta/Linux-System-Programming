#include<stdio.h>
#include<dirent.h>
#include<string.h>


int main(int argc, char * argv[])
{


  DIR *dir;
  struct dirent *obj;
  char name[100];
  char oldpath[50];
  char newpath[50]; 

  dir = opendir(argv[1]);

  if(dir == NULL)
  {
    printf("\nerror opening directory\n");
    return -1;
  }

  while((obj = readdir(dir)) !=NULL)
  {
	//Source and destination path
	sprintf(oldpath,"%s/%s",argv[1],obj->d_name);	
        sprintf(newpath,"%s/%s",argv[2],obj->d_name);

	//move that file
        rename(oldpath,newpath);
	memset(&oldpath,0,sizeof(oldpath));
	memset(&newpath,0,sizeof(newpath));

  }

 closedir(dir);
 return 0;
}
