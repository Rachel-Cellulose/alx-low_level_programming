#include <stdio.h>
/**
 * main - entry point
 *
 * codes for printing all possible combination of two d/t digits
 * in assending order and separated by a comma followed by a space
 * Return: 0 Success
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 100; digit1++)
	{
		for (digit2 = 0; digit2 < 100; digit2++)
		{
			if (digit2 > digit1)

			{
				putchar((digit1 / 10) + '0');
				putchar((digit1 % 10) + '0');
				putchar(' ');
				putchar((digit2 / 10) + '0');
				putchar((digit2 % 10) + '0');

				if (digit1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
