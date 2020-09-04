#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  
  int fd; 
  int ret;
  char *buff =NULL; 

  fd = open(argv[1],O_RDONLY);

  if(fd == -1)
  { 
    printf("\nerror opening file \n");
    return -1;
  }  
 

//Allocate memory for local buffer (atoi - ascii to integer)
  buff = (char*)malloc(sizeof(char) * atoi(argv[2]));
   
 if(buff == NULL)
 {
   printf("\nError allocating memory\n");
   return -1;
 }
 
 ret = read(fd,buff,atoi(argv[2]));

 if(ret != atoi(argv[2]))
 {
   printf("\nUnable to read contents\n");
   return -1;
 }
 printf("\nContents file \t%s\tare %s\n\n",argv[1],buff);

 close(fd);




}
