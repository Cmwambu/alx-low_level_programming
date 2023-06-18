#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase
 *
 * Description:
 * This program prints all the numbers of base 16 in lowercase,
 * followed by a new line. It uses the putchar function for output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char hex_digit;

	/* Print numbers 0 to 9 */
	for (number = 0; number < 10; number++)
		putchar(number + '0');

	/* Print lowercase letters a to f */
	for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
		putchar(hex_digit);

	putchar('\n');

	return (0);
}
