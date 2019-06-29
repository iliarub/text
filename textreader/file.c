#include "handler.h"
int filecreate(char* file)
{	int fd;
	if(((fd=open((const char*)file, O_CREAT, S_IWUSR|S_IRUSR)))==-1) 
		{
		printf("no open\n");
		return 0;
		}
	else {close(fd); return 1;}
}

int filewrite(char *file, char* strok)
{	int fd, strl;
	if((fd=open((const char*)file, O_WRONLY))==-1)
	{
		printf("file not open\n");
		return 0;
	}
	strl=strlen(strok);
	write(fd, (const char*)strok, strl);
	close(fd);
	return 1;
}

int fileread(char* file, char* strok)
{	int fd;
	if((fd=open((const char*)file, O_RDONLY))==-1)
	{
		printf("file not open\n");
		return 0;
	}
	read(fd, strok, 100);
}

