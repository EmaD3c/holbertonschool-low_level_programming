#include "main.h"
/**
*
*
*/
void rev_string(char *s)
{
  int e = 0, i = 0, j = 0,temp;
while (s[e])
{
e++;
}
while ( i < j)   
{    
temp = s[0];  
s[0] = s[8];  
s[8] = temp;  
i++; 
j--;
}  
}
