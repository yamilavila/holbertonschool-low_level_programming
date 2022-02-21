#include <stdio.h>
#include <unistd.h>

/**
* main - print a string with no printf and puts
* Return: 1
*/

int main(void)
{
write(2, "and that piece of art is useful\"- Dora KOrpa, 2015-10-19\n", 59);
return (1);
}
