#include "main.h"
/**
 * void swap_int - Swaps the value of two integers
 * Description - Function swaps the valuse of two integers
 * @a: First given integer
 * @b: Second given integer
 * Reurn: 0 Always(Success)
 */
void swap_int(int *a, int *b)
{
	*a = *b;
		*b = *a;
}
