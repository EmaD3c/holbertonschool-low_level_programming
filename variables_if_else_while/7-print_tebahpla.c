#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
/*declare a variable*/
char alphabet;
for (alphabet = 'z'; alphabet >= 'a' ; alphabet--)
{
/*print the value of the variable*/
putchar(alphabet);
}
putchar('\n');

return (0);
}
