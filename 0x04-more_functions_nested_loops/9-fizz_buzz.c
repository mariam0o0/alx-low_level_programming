#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always success
 */
int main(void)
{
for (int n = 1; n <= 100; n++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");
else if ((n % 3) == 0)
printf("Fizz");
else if ((n % 5) == 0)
printf("Buzz");
else
printf("%i", n);
}
printf('\n')
}
