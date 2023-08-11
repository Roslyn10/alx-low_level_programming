#include <stdio.h>
/**
 * main - Prints quote by Dora Korpa
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
FILE *file = stderr;
char message[] = "and that piece of art is useful\" - Dora Korpar,
"2015-10-19\n";
fputs(message, file);
return (1);
}
