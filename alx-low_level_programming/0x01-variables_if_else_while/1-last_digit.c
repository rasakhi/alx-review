#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether the last digit of a number n
 * is less than 6, greater than 5 or 0
 * Return: 0
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	i = n % 10; /*i is the last digit of n */
	if (i < 0)
        i *= -1;
    if (i > 5)
        printf("Last digit of %d is %d and is greater than 5\n", n, i);
    else if (i == 0)
        printf("Last digit of %d is %d and is 0\n", n, i);
    else
        printf("Last digit of %d is %d and is less than 6 but not 0\n", n, i);

	return (0);
}
