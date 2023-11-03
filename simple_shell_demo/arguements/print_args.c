#include <stdio.h>

/**
 * main - prints arguements passed into main
 * @ac: number of arguements
 * @av: arguement vectors
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
