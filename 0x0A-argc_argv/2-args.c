#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all the argument it receives
 * @argc: argument count
 * @argv: arguent vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count = 0;
if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
