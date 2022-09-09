#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit
 * Numbers must be serperated by ,followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int d = 0;
while (d < 10)
{
putchar(d + '0');
if (d < 9)
{
putchar(',');
putchar(' ');
}
d++;
}
putchar('\n');
return (0);
}
