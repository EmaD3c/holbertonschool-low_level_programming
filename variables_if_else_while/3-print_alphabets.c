#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
/*declare a variable*/
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
/*print the value of the variable*/
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
{
/*print the value of the variable*/
putchar(alphabet);
}
putchar('\n');

return (0);
}
