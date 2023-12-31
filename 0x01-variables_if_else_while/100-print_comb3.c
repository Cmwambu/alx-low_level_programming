#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits
 * separated by ", " in ascending order.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit;

	/* Iterate from 0 to 9 for the first digit */
	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		/* Iterate from first_digit + 1 to 9 for the second digit */
		for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');

			/* Print ", " for separation except for the last combination */
			if (first_digit != 8 || second_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
