#include "main.h"
/**
 * main - Functions for the main simple shell
 * @argv: arguments vector
 * @argc: arguments count
 * Return: 0 (if success)
 */
void execute(char *line, char **ar)
{
pid_t id;
id = fork();
while (id != 0)
{
wait(NULL);
}
execve(line, ar, NULL);
}

int main(int argc, char **argv)
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
