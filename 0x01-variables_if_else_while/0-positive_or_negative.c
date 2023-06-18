/*
 * File: 0-positive_or_negative.c
 * Author: [Cmwambu]
 * Description: A program to print whether a randomly generated number is positive, negative, or zero.
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o program
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number and prints whether it is positive, negative, or zero.
 * Return: 0 on success
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("%d ", n);

    if (n > 0)
        printf("is positive\n");
    else if (n < 0)
        printf("is negative\n");
    else
        printf("is zero\n");

    return 0;
}
