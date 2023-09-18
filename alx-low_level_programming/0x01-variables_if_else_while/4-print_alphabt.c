#include <stdio.h>

/**
 * main - prints lowercase alphabets except q and e
 *
 * Return: 0
 */
int main(void)
{
    char lower;

    lower = 'a';
    while (lower <= 'z')
    {
        if ((lower == 'e') || (lower == 'q'))
            lower++;
        else
        {
            putchar(lower);
            lower++;
        }
    }
    putchar('\n');

    return (0);
}
