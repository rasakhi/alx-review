#include <stdio.h>

/**
 * main - prints all hexadecimal numbers from 0 - f
 *
 * Return: 0
 */
int main(void)
{
	char num, letter;

	num = '0';
	letter = 'a';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
