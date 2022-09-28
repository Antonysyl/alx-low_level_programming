#include "main.h"
/**
 * is_prime_number - returns 1 if the integer is a prime number
 * otherwise return 0
 * @n: input number
 * Return: int
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (getNumPrim(n, 2));
}
/**
 * getNumPrim - functiont that gets if mum is 0 or 1
 * @num: input number
 * @i: counter variable
 * Return: int
 */
int getNumPrim(int num, int i)
{
if (num == 1)
return (1);
if (num % i == 0)
return (0);
return (getNumPrim(num, i + 1));
}