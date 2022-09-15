Task 6.txt
Today
11:51 AM

Antony Bahati uploaded an item
Text
Task 6.txt
#include <stdio.h>
#include "main.h"

/**
*print_line - prints a straight line
*@n: parameter
*Return:returns nothing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
