#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies string pointed to by src
 * @dest: Array being copied to
 * @src: String to be copied
 *
 * Return: The value of pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	while (*src++)
		i++;
	len = i;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
