#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two two-digit numbers,
 * ranging from 0 to 99. The combinations are separated by a comma and a space,
 * and numbers are printed with two digits. The combinations are printed in
 * ascending order.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int first_num, second_num;

	/* Iterate from 0 to 99 for the first number */
	for (first_num = 0; first_num < 100; first_num++)
	{
		/* Iterate from 0 to 99 for the second number */
		for (second_num = 0; second_num < 100; second_num++)
		{
			/* Check if the numbers are in ascending order */
			if (first_num <= second_num)
			{
				/* Print the first number with two digits */
				putchar(first_num / 10 + '0');
				putchar(first_num % 10 + '0');

				putchar(' ');

				/* Print the second number with two digits */
				putchar(second_num / 10 + '0');
				putchar(second_num % 10 + '0');

				/* Print ", " for separation except for the last combination */
				if (first_num != 99 || second_num != 99)
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
