#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: A C program that calculates the sum of two numbers
 *
 * Return: Always 0 (Success).
*/
int main(void)
{int b, q;

write(1, "Entrez deux nombres à additionner\n", 34);
scanf("%d%d", &b, &q);
printf("La somme des deux nombres est = %d\n", b + q);
return (0);
}

