#include <stdio.h>
#include "main.h"
/**
 * *argstostr - Concatenates all the arguments of the program
 * Description - Combines allthe arguments of the program
 * Return: NULL if ac == 0 or av == NULL or if it fails
 * ... returns a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
