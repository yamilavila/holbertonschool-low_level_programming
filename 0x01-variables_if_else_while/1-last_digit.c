#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- greater>, less<, equal==
*Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Las digit of %i", n);

if (n % 10 > 5)

printf("is %i and is greater than 5\n", n % 10);
}
else if (n % 10 == 0)
{
printf("is %i and is 0\n", n % 0);
}
else if ((n % 10) < 6 && n % 10 != 0)
{
printf("is %i and is less than 6 and not 0\n", n % 10);
}
return (0);
}
