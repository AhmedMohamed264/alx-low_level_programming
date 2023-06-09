#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is ", n);

if (n < 0)
n *= -1;

n %= 10;

if (n > 5)
printf("%d and is greater than 5\n", n * ((n > 5) ? 1 : -1));
else if (n == 0)
printf("%d and is 0\n", n);
else
printf("%d and is less than 6 and not 0\n", n * ((n > 5) ? 1 : -1));

return (0);
}
