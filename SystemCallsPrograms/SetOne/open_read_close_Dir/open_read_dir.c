#include<stdio.h>
#include<dirent.h>
#include<sys/types.h>

//Accept Directory name from user and print the contents of that Directory
//Note: dirent structure members like d_name, d_ino are accessed using header sys/types.h

int main(int argc, char * argv[])
{

  DIR *dir;
  struct dirent *obj;

  dir = opendir(argv[1]);
  
  if(dir == NULL)
  {
     printf("\nerror opening directory\n");
      return -1;
  }
 
  while((obj = readdir(dir)) != NULL)
  {
    printf("\nDirectory contents are:\t%s\n",obj->d_name);
  }

  close(dir);
  return 0;
}
