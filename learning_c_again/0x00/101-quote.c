#include <unistd.h>

/**
 * main - prints a string followed by a new line
 *
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
