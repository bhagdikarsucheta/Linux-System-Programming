#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{

  int fd;
  int ret;

 typedef struct info
 {
    char name[20];
    int number;
 }INFO;

 INFO obj1,obj2;

 strcpy(obj1.name,"Marvellous");
 strcpy(obj2.name,"Infosystems");

 obj1.number = 11;
 obj2.number = 21;

 fd = open(argv[1],O_WRONLY);
 
 if(fd == -1)
 {
	printf("\nerror opening file\n");
	return -1;
 }

 ret = write(fd,(char*)&obj1,sizeof(obj2));
  
 if(ret == -1)
 {
	printf("unable to write contents\n\n");
	return -1;
 }

 close(fd);
  
}
