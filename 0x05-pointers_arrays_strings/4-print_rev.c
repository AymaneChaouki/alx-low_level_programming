#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a char
 *
 * Return: void
 */

void	print_rev(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	while (i--)
		_putchar(*(s + i));
	_putchar('\n');
}
