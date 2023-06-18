#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	/* Start from 'z' (ASCII value 122) and print
	 * the lowercase alphabet in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
