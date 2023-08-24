#include "main.h"
/**
 * reverse_array - Reverses an array
 * Description - Reverses the content of an array of integers
 * @a: Array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int begin = 0;
	int end = n - 1;

	int t;

	while (begin < end)
	{
		t = a[begin];
		a[begin] = a[end];
		a[end] = t;

		begin++;
		end--;
	}
}
