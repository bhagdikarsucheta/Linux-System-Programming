#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char * argv[])
{

  int fd;
  int mode = 0;

  if(argc != 3)
  {
    printf("\n Not enough Arguments\n");
	return -1;
  }

   if(strcmp (argv[2],"read")==0)
   {
      mode = O_RDONLY;
   }
   else if(strcmp (argv[2],"write")==0)
   {
     mode = O_WRONLY;  
   }
   else if(strcmp (argv[2],"readwrite")==0)
   {
     mode = O_RDWR;
   }
   else if(strcmp(argv[2],"create") ==0)
   {
     mode = O_CREAT;
   }
   else if(strcmp(argv[2],"truncate") == 0)
   { 
     mode = O_TRUNC;
   }

   fd = open(argv[1],mode);

   if(fd == -1)
   {
      printf("\nerror opening file\n");
	return -1;
   }
 
  printf("\nFile \t%s\t opened successufully in %d filedescriptor\n\n",argv[1],fd);

return 0;   
}
