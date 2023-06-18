/*
 * File: 2-print_alphabet.c
 * Author: [Cmwambu]
 * Description: A program to print the alphabet
 * in lowercase using the putchar function.
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
		putchar(letter);

	putchar('\n');

	return (0);
}
