#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
return (0);
}
