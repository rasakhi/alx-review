#include <stdio.h>

/**
 * main - printd the size of various types
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int));
	return (0);
}
