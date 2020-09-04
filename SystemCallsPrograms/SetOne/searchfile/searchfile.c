#include<stdio.h>
#include<dirent.h>

int main(int argc, char * argv[])
{
  DIR *dir;
  
  
  struct dirent *obj;
  char name[100];

  dir=opendir(argv[1]);
  if(dir == NULL)
  {
    printf("\nerror opening directory\n");
	return -1;
  } 
  
  
  while((obj = readdir(dir)) != NULL)
  {


        if(strcmp(argv[2],(char*)obj->d_name) == 0)
	{
		printf("\nfile is present in directory\n",argv[2]);
	}
  }

 close(dir);
}
