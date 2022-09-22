#include "main.h"
/**
 * *string_toupper - capitalize a string
 * letters of a string to uppercase
 * @ch: pointer
 * Return: capitalized string
 */
char *string_toupper(char *ch)
{
int i = 0;
while (*(ch + i) != '\0')
{
if (*(ch + i) >= 97 && *(ch + i) <= 122)
*(ch + i) = *(ch + i) - ' ';
i++;
}
return (ch);
}
