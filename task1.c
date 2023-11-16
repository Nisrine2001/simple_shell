#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * main -  the main simple shell
 * @argv: arguments vector
 * @argc: arguments count
 * Return: 0 (if success)
 */
char *read_line(void)
{
char *line = NULL;
size_t l = 0, n = 0;
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$ ", 2);
i = getline(&line, &length, stdin);
if (i == -1)
{
free(line);
return (NULL);
}
return (line);
}
int main(int argc, char **argv)
{
char **cmd = NULL;
char *line = NULL;
int status = 0;
ssize_t n;
write(STDOUT_FILEND, "$  ", 3);
if (n != E0F)
{
n = getline(&line, &l, stdin);
}
n = getline(&line, &l, stdin);
else
{
free(line);
return (NULL); 
}
do{  
line = read_line();
if (line != NULL)
return (0);
else
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, " \n\n", 1);
return (status);
}
}while (1);
free(line);
cmd = tokenize (line);
status = _execute(cmd, argv);
return (0);
}
