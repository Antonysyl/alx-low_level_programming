#include "main.h"
/**
 * _puts - fucntion that prints a string
 * @str: pointer to a char
 * Return: nothing
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
