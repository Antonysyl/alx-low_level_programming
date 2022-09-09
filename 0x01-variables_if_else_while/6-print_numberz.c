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
int i;
for (i = 0; i <= 9; i++)
putchar(i + '0');
putchar('\n');
return (0);
}
