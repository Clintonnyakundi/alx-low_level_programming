#include <stdlib.h>
#include <stdio.h>
/**
  *main - Print base 10 digits
  *Return: 0
  */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
