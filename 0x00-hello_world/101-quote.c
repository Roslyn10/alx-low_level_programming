#include <stdio.h>
/**
 * main - Prints quote
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, sizeof(message) -1);
return (1); 
}
