#include "main.h"

int main(void)
{char *line;
int i;
size_t n;
ssize_t l = 0;
char **ar = NULL, *token;
while (1)
{
write(1, "$ ", 2);
l = getline(&line, &n, stdin);
if (l == -1)
break;
return (-1);
token = strtok(line, " \n\t\n")
ar = malloc(200)
for (r[i] = token ; token != NULL; i++)
{
token = strtok(NULL, "\n\t\n");
}
ar[i] = NULL;
execve(line, ar, NULL);
free(line);
}
return (0);
}
