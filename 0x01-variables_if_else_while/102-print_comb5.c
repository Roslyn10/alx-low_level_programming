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
		for (s_digit = 0; s_digit <= 9; s_digit++)
		{
			for (t_digit = 0; t_digit <= 9; t_digit++)
			{
				for (fo_digit = 0; fo_digit <= 9; fo_digit++)
				{
					if (f_digit * 10 + s_digit < t_digit * 10 + fo_digit)
					{
						putchar(f_digit + '0');
						putchar(s_digit + '0');
						putchar(' ');
						putchar(t_digit + '0');
						putchar(fo_digit + '0');

						if (!(f_digit == 9 && s_digit == 8 && t_digit == 9 && fo_digit == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
