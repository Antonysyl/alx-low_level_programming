#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 * You are not allowed to use any variable of type char
 * You can only use the putchar option
 * Return: 0
 */

int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
c++;
}
putchar('\n');
return (0);
}
