/*
 * File: 3-print_alphabets.c
 * Author: [Cmwambu]
 * Description: A program to print the alphabet
 * in lowercase and uppercase using the putchar function.
 */

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);

	putchar('\n');

	return (0);
}
