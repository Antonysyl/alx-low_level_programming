include "main.h"
/**
 * _memset - fills the first n bytes
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
i= 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
