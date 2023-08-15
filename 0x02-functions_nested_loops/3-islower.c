#include "main.h"
/**
 * int _islower - Checks for lower case 
 * Description - Returns 0 for every other letter exept c 
 * Return: 1 for lowercase c and 0 for every other letter 
 */
int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}


