#include <shell.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * task_0 : a beautiful code that passes the Betty checks
 */
int main(void)
{
size_t a = 0;
char *buffer = NULL

printf("$ ");
getline(&buffer, &a, stdin);
printf("%s\n", buffer);

free(buffer);

return (0);
}
