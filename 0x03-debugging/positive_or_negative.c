#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*main - negative number and positive number
*Return: 0
*/
void positive_or_negative(int i)
{

if (i > 0)
{
printf("%i is positive\n", i);
}
else if (i == 0)
{
printf("%i is zero\n", i);
}
else
{
printf("%i is negative\n", i);
}
}
