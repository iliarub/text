#include "handler.h"
int main()
{
char filename[10];
char buffer[100];
printf("Vvedite nazvanie\n");
scanf("%s", filename);
//printf("Vvedite stroku\n");
//scanf("%s", buffer);
//filecreate(filename);
fileread(filename, buffer);
curses(buffer);
filewrite(filename, buffer);
return 1;
}
