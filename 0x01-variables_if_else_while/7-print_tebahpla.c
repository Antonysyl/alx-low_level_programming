#include <stdio.h>

/**
 * main - program the lowercase alphabets in reverse
 * You can only use the putchar option
 * Return: 0
 */

int main(void)
{
char ch;
for(ch = 'z'; ch >= 'a'; ch-- )
putchar(ch);
putchar('\n');
return (0);
}

