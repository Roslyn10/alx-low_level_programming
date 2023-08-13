#include <stdio.h>
/**
 * main - Prints combinations of two two-digit 
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int first_digit, second_digit, third_digit, fourth_digit; 

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		for (second_digit = first_digit +1; second_digit <= 9; second_digit++)
		{
			for (third_digit = second_digit +1; third_digit <= 9; third_digit++)
			{
				for (fourth_digit = third_digit +1; fourth_digit <= 9; fourth_digit++)
				{ 
					putchar(first_digit + '0');
					putchar(second_digit + '0');
					putchar(third_digit + '0');
					putchar(fourth_digit + '0');

					if (!(first_digit == 6 && second_digit == 7 && third_digit == 8 && fourth_digit == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

		return (0);
}
