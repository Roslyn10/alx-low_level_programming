#include "main.h"
/**
 * swap_int - Swaps the value of two integers
 * Description - Function swaps the valuse of two integers
 * @a: First given integer
 * @b: Second given integer
 * @c: temporary value of a 
 * Reurn: 0 Always(Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
