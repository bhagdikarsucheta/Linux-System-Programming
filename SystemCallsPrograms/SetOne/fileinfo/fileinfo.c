#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(int argc, char * argv[])
{

   int ret;

   struct stat filestat;
  
   ret = stat(argv[1],&filestat);
  
   if(ret == -1)
   {
     printf("\nFile cannot be opened successfully\n");
     return -1;
   }
   
   printf("\nFile size \t%d ",(int)filestat.st_size);
   printf("\nFile inode \t%d",(int)filestat.st_ino);
   printf("\nFile links \t%d",(int)filestat.st_nlink);
   printf("\nFile blocks\t%d",(int)filestat.st_blocks);
   printf("\nFille Block size: \t%d",(int)filestat.st_blksize);

   printf("\nFile permissions\n");
   printf((S_ISDIR(filestat.st_mode)) ? "d" : "-");
   printf((filestat.st_mode & S_IRUSR) ? "r" : "-");
   printf((filestat.st_mode & S_IWUSR) ? "w" : "-");
   printf((filestat.st_mode & S_IXUSR) ? "x" : "-");
   printf((filestat.st_mode & S_IRGRP) ? "r" : "-");
   printf((filestat.st_mode & S_IWGRP) ? "w" : "-");
   printf((filestat.st_mode & S_IXGRP) ? "X" : "-");
   printf((filestat.st_mode & S_IROTH) ? "r" : "-");
   printf((filestat.st_mode & S_IWOTH) ? "w" : "-");
   printf((filestat.st_mode & S_IXOTH) ? "x" : "-");

  
  if(S_ISLNK(filestat.st_mode))
  {
   printf("\nIs a Symbolic Link\n");
  }
  else 
  {
   printf("\nNot a symbolic link\n");
  }
 
   return 0; 
}
