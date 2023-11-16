#include <SHELL_H>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (void)
{
size_t a = 0;
char *buffer = NULL;

int type = write(STDOUT_FILENO, "& ", 1);
type = write(STDOUT_FILENO, buffer, strlen(buffer));
type = write(STDOUT_FILENO, "\n", 1);

free (buffer);
return (0);
}
