#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: input char
 * Return: char
 */
char *_strdup(char *str)
{
char *s;
int i = 0, j;
if (!str)
return (NULL);
while (*(str + i))
i++;
i++;
s = malloc(sizof(char) * i);
if (s == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
s[j] = str[j];
}
return (s);
}
