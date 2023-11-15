#include <shell.h>

/**
 * main - Functions for the main simple shell
 * @argv: arguments vector
 * @argc: arguments count
 * @env
 * Return: 0 (if success)
 */
int main(int argc, char **argv)
{
char *l = NULL, **order = NULL;
int st = 0;
void (argc);
void (argv);

while (1)
{

l = read_line();
if (l == NULL)/* reach EOF ctrl = D */
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
return (st);
}

free(l);
command = tokenize(l);

/*execute_status = (order, argv);*/
}
}

/**
 * read_line - read from the input
 * Return: 0 (if success)
 */

char *read_line(void)
{
char *line = NULL;
size_t lenght = 0;
size_t i;
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$ ", 2);
i = getline(&line, &lenght, stdin);
if (i == -1)
{
free(line);

return (NULL);
}

return (line);
}
