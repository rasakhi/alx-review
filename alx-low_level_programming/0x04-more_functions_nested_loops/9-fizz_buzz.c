#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with multiples of
 * 3 printed as Fizz, multiples of 5 as Buzz and multiples
 * of 3 and 5 as FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz ");
		else if ((i % 3 != 0) && (i % 5 == 0))
			printf("Buzz ");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
		i++;
	}
	putchar('\n');
	return (0);
}
