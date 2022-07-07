#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a = 0, b = 0;

	while (a <= 23)
	{
		if (b <= 9 && a <= 9)
		{
			printf("0%d:0%d\n", a, b);
		//	_putchar('0');
		//	_putchar(a);
		//	_putchar(':');
		//	_putchar('0');
		//	_putchar(b);
		//	_putchar('\n');
		}
		else
		{
			if (b > 9 && a <= 9)
			{
				printf("0%d:%d\n", a, b);
			//	_putchar('0');
			//	_putchar(a);
			//	_putchar(':');
			//	_putchar(b);
			//	_putchar('\n');
			} else
			{
				if (b > 9 && a > 9)
				{
					printf("%d:%d", a, b);
			//		_putchar(a);
			//		_putchar(':');
			//		_putchar(b);
			//		_putchar('\n');
				}
			}
		}
		if (b == 59)
		{
			b = 0;
			a++;
		}
		b++;
	}
}
