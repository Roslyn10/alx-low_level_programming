#include "main.h"
/**
 * jack_bauer - Returns every minute of the day
 * Description - Starrs from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	 (int h = 0; h < 24; h++)
	{
		 (int m = 0; m < 24; m++)
		{
			_putchar("%02d:%02d\n", h, m);
		}
	}
}
