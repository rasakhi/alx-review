#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar('0' + (i / 10)); /* first digit of hour */
			_putchar('0' + (i % 10)); /* second digit of hour */
			_putchar(':');
			_putchar('0' + (j / 10)); /* first digit of minute */
			_putchar('0' + (j % 10)); /* second digit of minute */
			_putchar('\n');
			j++;
		}
		i++;
	}
}
