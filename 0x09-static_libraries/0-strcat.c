#include "main.h"
/**
 * *_strcat - function commute strings
 * @dest: param
 * @src: param
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (dest[i] != '\0')
{
dest[i] = src[i];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
