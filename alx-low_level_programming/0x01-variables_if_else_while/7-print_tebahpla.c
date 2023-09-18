#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return(0);
}
