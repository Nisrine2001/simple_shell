#include "main.h"
/**
 * main -Entry point
 *
 * Description: A C program that works in the same way as getline.
 * Return:Always(0) (Success). 
 */
int main(void)
{
char buf[200];
ssize_t nd;
size_t len = 0
printf("Enter a line of text:\n");
while ((nd = read(STDIN_FILENO, buf + len, sizeof(buf) - len - 1)) > 0)
{len = len + nd;
if (buf[len - 1] == '\n')
break;
if (len == (sizeof(buf)) - 1)
{buf[len] = '\0';
printf("Line too long \n");
return (1);
}
else
return (0);
}
buf[len] = '\0';
printf("You entered: %s\n", buf);
return (0);
}
