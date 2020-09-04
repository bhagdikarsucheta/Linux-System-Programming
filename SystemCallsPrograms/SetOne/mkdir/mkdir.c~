#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc, char * argv[])
{

  int ret;

  ret = mkdir(argv[1], S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

  if(ret == -1)
  {
	printf("\nerror creating file\n");	
	return -1;
  }

  return 0;
}
