#include "main.h"
#include <stdio.h>

/**
 * more_numbers -Prints 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, j, k, doubleDigit;

	for (j = 0; j < 10; j++)
	{
		 for (i = 0; i < 15; i++)
		 {	
		 	  if (i < 10)
			  {
				  _putchar(i + '0');
		          }
			  else
			  {
				  _putchar((i /10) +'0');
				 _putchar((i %10) +'0'); 
		  }
	}
}
				 
											
