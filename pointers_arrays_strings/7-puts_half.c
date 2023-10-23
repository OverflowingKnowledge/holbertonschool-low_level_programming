#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Variable being evaluated
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
 * puts_half - Prints half of string
 * @str: String being evaluated
 */
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = (len + 1) / 2; i < len; i++)
		putchar(str[i]);
	putchar('\n');
}
