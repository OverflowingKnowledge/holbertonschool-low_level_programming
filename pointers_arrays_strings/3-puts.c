#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints string then newline to stdout
 * @str: String being printed
 */
void _puts(char *str)
{
	while (*str != '\0')
		putchar(*str++);
	putchar('\n');
}
