#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 * You are not allowed to use any variable of type char
 * You can only use the putchar option
 * Return: 0
 */
int main(void)
{
    int n;

    for (n = 48; n < 58; n++)
    {
       putchar(n);
    }
    putchar('\n');
    return (0);
}


