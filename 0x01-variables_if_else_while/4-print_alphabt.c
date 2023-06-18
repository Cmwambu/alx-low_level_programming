/*
 * File: 4-print_alphabt.c
 * Author: [Cmwambu]
 * Description: A program to print the alphabet
 * in lowercase, excluding 'q' and 'e',
 * using the putchar function.
 */

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
