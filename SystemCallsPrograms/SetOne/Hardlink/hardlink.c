#include<stdio.h>
#include<fcntl.h>

int main()
{

  int ret;
  
  ret = link("newfile.txt","hardlink.txt");
  
  if(ret == -1)
  {
	printf("\nerror creating hardlink\n");
  }

  ret = unlink("hardlink.txt");
  
  if(ret == -1)
  {
	printf("Unable to hardlink the file\n");
	return -1;
  }
  
  /*ret = remove("hardlink.txt");
  
  if(ret == -1)
  {
	printf("\nerror removing file\n");
	return -1;
  }
  */
 
  return 0;
  
}
