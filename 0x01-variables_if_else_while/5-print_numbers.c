#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 * All your code should be in the main function
 * Return: 0
 */

int main(void)
{
char c = '0';
while (c <= '9')
{
putchar(c);
c++;
}
printf("\n");
return (0);
}
