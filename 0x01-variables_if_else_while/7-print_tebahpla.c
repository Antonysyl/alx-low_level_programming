#include <stdio.h>

/**
 * main - program the lowercase alphabets in reverse
 * You can only use the putchar option
 * Return: 0
 */

int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}

