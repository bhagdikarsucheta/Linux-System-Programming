#include<stdio.h>
#include<fcntl.h>

int main(int argc, char * argv[])
{
  int fd;
  int ret;
  int mode = 0;

  if(strcmp(argv[2],"read") ==0)
  {
    mode = R_OK;
  }
  else if(strcmp(argv[2],"write") == 0)
  {
    mode = W_OK;
  }
  else if(strcmp(argv[2],"execute") == 0)
  {
    mode = X_OK;
  }
  

  ret = access(argv[1],mode);

  if(ret == -1)
  {
     printf("\nError opening in this mode\n");
  }

  printf("\nFile \t%s\topened successufully in %s mode\n",argv[1],argv[2]);

return 0;
  
}
