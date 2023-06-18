#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits
 * separated by ", " in ascending order.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit, third_digit;

	/* Iterate from 0 to 9 for the first digit */
	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		/* Iterate from first_digit + 1 to 9 for the second digit */
		for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
		{
			/* Iterate from second_digit + 1 to 9 for the third digit */
			for (third_digit = second_digit + 1; third_digit < 10; third_digit++)
			{
				putchar(first_digit + '0');
				putchar(second_digit + '0');
				putchar(third_digit + '0');

				/* Print ", " for separation except for the last combination */
				if (first_digit != 7 || second_digit != 8 || third_digit != 9)
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
