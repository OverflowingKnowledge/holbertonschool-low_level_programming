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
 * print_rev - Prints a string in reverse
 * @s: String being reversed
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s) - 1;
	for (i = len; i >= 0; i--)
		putchar(*(s + i));
	putchar('\n');
}
