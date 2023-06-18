#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ", " in ascending order.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	/* Iterate from 0 to 9 for the first digit */
	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');

		/* Print ", " for separation except for the last number */
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return 0;
}
