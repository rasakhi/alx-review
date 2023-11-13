#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - returns the length of a string
 * @str: pointer to string
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}

/**
 * main - prints prompt using getline
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer;
	size_t buffer_size = 1024;
	
	buffer = (char *)malloc(buffer_size * sizeof(char));
	if (buffer == NULL)
	{
		perror("Nothing to allocate to buffer");
		exit(1);
	}
	write(1, "$ ", 2);
	getline(&buffer, &buffer_size, stdin);
	write(1, buffer, _strlen(buffer));
	free(buffer);
	return (0);
}
