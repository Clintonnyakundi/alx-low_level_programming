#include "main.h"
/**
 *_pow_recursion - return x to power y
 *@x: base integer
 *@y: power integer
 *
 *Return: x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
