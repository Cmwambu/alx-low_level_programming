/*
 * File: 5-print_numbers.c
 * Author: [Cmwambu]
 * Description: A program to print all
 * single-digit numbers of base 10,
 * starting from 0, using the putchar function.
 */

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');

	putchar('\n');

	return (0);
}
