#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer whose absolute value is to be computed
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}
