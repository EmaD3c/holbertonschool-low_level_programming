#include "main.h"
/**
*jack_bauer - prints every minute, starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
int h = 0, m;
while (h < 24)
{
m = 0;
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
h++;
}
}
