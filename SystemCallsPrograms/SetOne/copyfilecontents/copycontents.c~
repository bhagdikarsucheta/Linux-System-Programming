#include<stdio.h>
#include<fcntl.h>

int main(int argc, char * argv[])
{
   
   int fdread,fdwrite,readcnt,writecnt;
   fdread = fdwrite = readcnt = writecnt = 0;
   char buff[256] = {'\0'};

   fdread = open(argv[1],O_RDWR);
   fdwrite =creat(argv[2],0666);


   if(fdread == -1)
   {
      printf("\nerrror opeing file\n");
       return -1;
   }

   if(fdwrite == -1)
   {
      printf("\nerror opening file\n");
   }

   while((readcnt = read(fdread,buff,sizeof(buff))) != 0)
   {
      if(writecnt = write(fdwrite,buff,readcnt) == -1)
      {
  	printf("\nproblem in writing\n");
      }
     //writecnt = write(fdwrite,buff,readcnt);
   }

  close(fdread);
  close(fdwrite);
}
