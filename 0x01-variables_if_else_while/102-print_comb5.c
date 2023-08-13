#include <stdio.h>
/**
 * main - Prints combinations of two two-digit
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int f_digit, s_digit, t_digit, fo_digit;

	for (f_digit = 0; f_digit <= 9; f_digit++)
	{
		for (s_digit = f_digit + 1; s_digit <= 9; s_digit++)
		{
			for (t_digit = s_digit + 1; t_digit <= 9; t_digit++)
			{
				for (fo_digit = t_digit + 1; fo_digit <= 9; fo_digit++)
				{
					putchar(f_digit + '0');
					putchar(s_digit + '0');
					putchar(' ');
					putchar(t_digit + '0');
					putchar(fo_digit + '0');

					if (!(f_digit == 6 && s_digit == 7 && t_digit == 8 && fo_digit == 9))
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
