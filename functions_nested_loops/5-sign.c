#include "main.h"
/**
*print_sign - look for a uppercase
*Return: 1, 0 or -1
*@n: number
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
