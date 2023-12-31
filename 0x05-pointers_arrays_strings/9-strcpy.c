#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte, to the buffer pointed to by dest
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: pointer to dest
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
