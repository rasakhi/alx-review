#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char lower;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
			_putchar(lower);
		_putchar('\n');
	}
}
